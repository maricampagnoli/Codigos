#include <stdio.h>
#include <string.h>
 
int main(){
   char copianome[40];
   char nome[40];
   char cidade[30];
   char copiacidade[30];
 
   printf("Digite seu nome : \n");
   gets(nome);
   
   printf("Digite sua cidade : \n");
   gets(cidade);
 
   
   strcpy(copianome, nome);
   strcpy(copiacidade, cidade);
 
   printf("\n%s\n%s", copianome, copiacidade);
   return 0;
}
