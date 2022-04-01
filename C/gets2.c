    #include <stdio.h>
    #include <string.h> 
    
    int main (){
    	
      char nome[30];
      char cidade[30];
            
      printf("Digite seu nome: ");
      gets(nome);
      
      printf("Digite sua cidade: ");
      gets(cidade);
      
      printf("\nSeu nome e %s\nVoce mora em %s", nome, cidade);
      

	  
      return 0;
      
  }
