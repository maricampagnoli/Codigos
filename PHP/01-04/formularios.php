<?php
session_start();

$arq0="FormularioUsuarioHTML.html";

require_once("$arq0");

$_SESSION['usuarioDigitado'] = $_POST['usuario'];
$_SESSION['senhaDigitada'] = $_POST['senha'];
$usuarioDigitado = $_POST['usuario'];
$senhaDigitada = $_POST['senha'];

	if ($usuarioDigitado == 'mari' and $senhaDigitada == 'mari'){

		echo <<<_resposta
		<pre>
		Usuário existe: $usuarioDigitado
		Senha: $senhaDigitada
		
		</pre>

_resposta;
}

	else 
		echo "usuario e/ou senha invalido";
	



?>	
