<?php
header('Content-Type: text/html; charset=utf-8');
require_once 'senhas_admin.php';
$conexão = new mysqli($servidor, $usuario, $senha, $bd);
$tab="livros";
$arq = "fazTudo.php";
$arq1 = "sair.php";

if ($conexão->connect_error) die($conexão->connect_error);

// ************* Apagar dados da tabela *************

if (isset($_POST['apagar']) && isset($_POST['tombo']))
{
	$tombo = get_post($conexão, 'tombo');
	$query= "DELETE FROM $tab WHERE tombo='$tombo'";
	$resultado = $conexão->query($query);
		
	if (!$resultado) echo "Erro ao remover dados: $query<br>" .
		$conexão->error . "<br><br>";
	}

	// ************* Inserir dados na tabela ************* 

if (isset($_POST['autor'])
	&&
	isset($_POST['titulo'])
	&&
	isset($_POST['area'])
	&&
	isset($_POST['ano'])
	&&
	isset($_POST['tombo'])
	)

{
	$autor 	= get_post($conexão, 'autor');
	$titulo	= get_post($conexão, 'titulo');
	$area 	= get_post($conexão, 'area');
	$ano 	= get_post($conexão, 'ano');
	$tombo 	= get_post($conexão, 'tombo');

	$query	= "INSERT INTO $tab VALUES"."('$autor', '$titulo', '$area', '$ano', '$tombo')";	
		
	$resultado 	= $conexão->query($query);

	if (!$resultado) echo "Erro ao inserir dados: $query<br>" .
	$conexão->error . "<br><br>";
	
}

echo <<<_TEXTO1
	<form name = "sair" action="$arq1" method="post">
	<input type="submit" value="Sair"></form>
_TEXTO1;


// ************* Montar os formulários para entrada de dados na tabela *************

echo <<<_END
<form action="$arq" method="post">
	<pre>
		<br>
		Indique os livros a incluir:
		Autor  <input type="text" name="autor">   Título <input type="text" name="titulo">
		<br>
		Área   <input type="text" name="area">    Ano    <input type="text" name="ano">
		<br>
		Tombo  <input type="text" name="tombo">
		<form name = "adicionar" action="$arq" method="post">
		<input type="submit" value="Adicionar Registro">
	</pre>
</form>
_END;

//  ************* Mostrar os livros existentes na tabela                *************
//  ************* Note que o botão de apagar é colocado para cada registro.*************

$query= "SELECT * FROM $tab";

$resultado = $conexão->query($query);

if (!$resultado) die ("Erro de acesso à base de dados: " . $conexão->error);

$linhas = $resultado->num_rows;
echo "        ------------------------";
echo "<br>";
echo "Conteúdo atual da tabela livros:";
echo "<br>";

for ($j = 0 ; $j < $linhas ; ++$j)
	{
	$resultado->data_seek($j);
	$linha = $resultado->fetch_array(MYSQLI_NUM);
	echo <<<_END
<pre>


	Autor  $linha[0]
	Título $linha[1]
	Área   $linha[2]
	Ano    $linha[3]
	Tombo  $linha[4]
</pre>
	<form action="$arq" method="post">
	<input type="hidden" name="apagar" value="yes">
	<input type="hidden" name="tombo" value="$linha[4]">
	<input type="submit" value="Apagar Registro"></form>
_END;
	echo "        ------------------------";
}

$resultado->close();
$conexão->close();

function get_post($conexão, $variável)
	{
	return $conexão->real_escape_string($_POST[$variável]);
	}
?>
