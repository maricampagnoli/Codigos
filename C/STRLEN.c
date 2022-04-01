    #include <stdio.h>
    #include <string.h>
    
	int main (){
	
      int tam;
      char str[30] = "Mariana Campagnoli Barbosa";
      
      tam = strlen(str);
      
      printf("O tamanho do nome %s vale %d\n", str, tam);
      
      return 0;
    }
