<?php

interface i_usr {
	public function avisar($nome, $id, $senha);
}

interface i_func extends i_usr {
	public function registrar_emp($livro, $nome);
	public function registrar_devol($livro, $nome);
}

interface i_aln extends i_usr {
	public function emprestar($livro, $nome);
	public function devolver ($nome);
}

class Usuario implements i_usr {
	public function avisar($nome, $id, $senha){
		echo "$nome foi criado como usuário.<br>";
}
}
class Funcionario implements i_func{
	public function avisar($nome, $id, $senha){
	}
	public function registrar_emp($livro, $nome){
		echo "O livro $livro foi emprestado para $nome.<br>";
	}
	public function registrar_devol($livro, $nome){
		echo "O livro $livro foi devolvido por $nome.<br>";
}
}

class Aluno implements i_aln {
	public function avisar($nome, $id, $senha){
	}
	public function emprestar ($livro, $nome){
		echo "O livro $livro foi emprestado para o aluno $nome.<br>";
	}
	public function devolver ($nome){
		echo "O aluno $nome devolveu o livro.";
	}
}

$usuario = new Usuario();
    $usuario->avisar("Mari", "red",'12321');
	
$funcionario1 = new Funcionario();
	$funcionario1->registrar_emp("Jogos Vorazes", "mari");
	$funcionario1 -> registrar_devol("Jogos Vorazes", "mari");
	
$aluno = new Aluno();
	$aluno-> emprestar ("Jogos Vorazes", "mari");
	$aluno-> devolver ("mari");


?>