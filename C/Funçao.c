#include <stdio.h>

int soma (int a, int b) {
int c;

c = a + b;

return c;

}

int main(){
	
int r;

r = soma(12, 90);

printf("r = %d\n", r);

r = soma (-9, 45);

printf("r = %d\n", r);

}
