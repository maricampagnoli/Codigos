<?php
header('Content-Type: text/html; charset=utf-8');
$arq0="senhas.php";
$arq = "RegistroDeEmprestimos.txt";
$arq1 = "validaUsr.php";
$arq2 = "emprestarLivro.php";
$arq3="sair.php";

require_once("$arq0");

echo <<<_TEXTO1
<form name = "sair" action="$arq3" method="post">
<input type="submit" value="Sair"></form>
_TEXTO1;

if ($_usuarioDigitado = '' or $senhaDigitada = '')
	header("Location: $arq1");
else
{
	$tab="livros";

	$conexão = new mysqli($servidor, $usuario, $senha, $bd);
	if ($conexão->connect_error) die($conexão->connect_error);

	$tombo = mostraLivros($tab, $arq2, $conexão);

	// $handle ---> modo a+: escrita; cursor no fim; o texto existente não é sobrescrito
	$handle = fopen("$arq","a+");

	if($tombo!=0) {
		echo "<br> Gravando em arquivo:<br>";
		echo "<br>------------------------------------------------------------------------------";

		fwrite($handle,"Livro: $tombo\n>");
		fclose($handle);

		echo "<br>";
		echo "O livro de tombo $tombo foi emprestado";
		echo "<br>------------------------------------------------------------------------------";
		echo "<br>";
	}

}

function mostraLivros($tab, $arq, $conexão){
		//  ************* Mostrar os livros existentes *************
		$query= "SELECT * FROM $tab";
		$resultado = $conexão->query($query);
		if (!$resultado) die ("Erro de acesso à base de dados: " . $conexão->error);
		
		$linhas = $resultado->num_rows;
		echo "<br>";
		echo "Lista de livros:";
		echo "<br>";
		$_novoId=0;
		for ($j = 0 ; $j < $linhas ; ++$j)
		{
		$resultado->data_seek($j);
		$linha = $resultado->fetch_array(MYSQLI_NUM);
		echo <<<_TEXTO
		<pre>

		Autor	$linha[0]
		Título	$linha[1]
		Área	$linha[2]
		Ano	$linha[3]
		Tombo	$linha[4]
		</pre>

		<form name = "emprestar" action="$arq" method="post">
		<input type ="hidden" name="Tombo" value="$linha[4]">
		<input type ="submit" value="Emprestar"></form>
_TEXTO;
		}
	if (isset ($_POST['Tombo'])) $tombo = $_POST['Tombo'];
		else $tombo = "0";
	return ($tombo);
}
?>
