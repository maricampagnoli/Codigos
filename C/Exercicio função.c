#include <stdio.h>

double base;
int exp;

int main()
{
	
	void num(double base, int exp);
	
    double pot(double a, int b);
    
    num(base, exp);
    
       printf("\nResultado = %.1lf", pot(num(base, exp));
       
    return 0;
}

void num(double base, int exp){
    
    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("\nDigite o expoente: ");
    scanf("%d", &exp);

}


double pot(double a, int b)
{

    double res=1;
    int i;

    for(i=1; i<=b; i++){
        res *= a;
    }

    return res;
}


