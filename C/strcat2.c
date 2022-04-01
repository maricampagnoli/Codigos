#include <stdio.h>
#include <string.h>
int main() {
	
   char nome[100], cidade[100];
   
   printf("Digite seu nome: ");
   gets(nome);
   
   printf("Digite sua cidade: ");
   gets(cidade);
   
   strcat(nome, cidade);

   printf("\nSeu nome e %s e voce mora em %s", nome, cidade);

   return 0;
}
