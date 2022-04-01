<?php

include ('UsuariosInterfaces.php');

$usuario1 = $_POST['usuario'];
$senha1 = $_POST['senha'];


	if (null!= $usuario1 && null!= $senha1)
	{ 

	$user = new Usuario();

	$user->avisar($usuario1, "123", $senha1);
	}
	else{
		echo "ERRO - CAMPO VAZIO OU INVALIDO, DIGITE NOVAMENTE";
	}

?>