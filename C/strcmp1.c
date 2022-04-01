#include<stdio.h>
#include<string.h>
  
int main()
{ 
      
    char str1[] = "g f g";
    char str2[] = "g f g";
    int res = strcmp(str1, str2);
      
    if (res==0){
        printf("As strings sao iguais");
   }else 
        printf("As strings nao sao iguais");
      
    return 0;
}
