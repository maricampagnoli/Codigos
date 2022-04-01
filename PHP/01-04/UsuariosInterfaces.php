<?php
interface i_usr
	{ public function avisar($nome, $id, $senha);}

interface i_func extends i_usr {
	public function registrar_emp($livro, $nome);
	public function registrar_devol($livro, $nome);}

interface i_aln extends i_usr {
	public function emprestar($livro, $nome);
	public function devolver($nome);
	}

class Usuario implements i_usr { 
	public function avisar($nome, $id, $senha){
		echo <<<_resposta
		<pre>
			O seguinte usuário foi criado:
				Usuário:	$nome
				id:		$id
				Senha:		$senha
		</pre>
_resposta;
	}
}

class Funcionario implements i_func { 
	public function avisar($nome, $cracha, $senha){
		echo "$nome foi criado(a) como funcionario.<br>";}
	public function registrar_emp($livro, $nome){
		echo "Foi emprestado o livro '$livro' para $nome.<br>";}
	public function registrar_devol($livro, $nome){
		echo "Foi devolvido o livro '$livro' por $nome.<br>";}
	}

class Aluno implements i_aln { 
	public function avisar($nome, $ra, $senha){
		echo "$nome foi criado(a) como aluno.<br>";}
	public function emprestar($livro, $nome){
		echo "O(a) aluno(a) $nome solicitou o empréstimo do livro '$livro'.<br>";}
	public function devolver($nome){
		echo "O(a) aluno(a) $nome devolveu todos livros.<br>";}
	}
?>
