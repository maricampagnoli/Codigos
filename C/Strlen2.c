#include <stdio.h>
#include <string.h>

int main(){
	
  char nome[100];
  int comprimento;
  
  printf("Entre seu nome: ");
  gets(nome);
  comprimento = strlen(nome);
  
  printf("Seu nome tem  %d caracteres.\n", comprimento);
}
