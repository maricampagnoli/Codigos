#include <stdio.h>
void leMatriz(double m[100][100], int tam);
void impMatriz(double m[100][100], int tam);
void somaMat(double mat1[100][100], double mat2[100][100], double matRes[100][100], int n);
int main() {
    double m1[100][100], m2[100][100], mRes[100][100];
    int tam;
    // leituras
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tam);
    printf("\nLeitura da matriz M1");
    leMatriz(m1, tam);
    printf("\nLeitura da matriz M2");
    leMatriz(m2, tam);
    // faz a soma
    somaMat(m1, m2, mRes, tam);
    // impressoes
    printf("\nImprimindo M1\n");
    impMatriz(m1, tam);
    printf("\nImprimindo M2\n");
    impMatriz(m2, tam);
    printf("\nImprimindo Matriz SOMA\n");
    impMatriz(mRes, tam);
    return 0;
}
void leMatriz(double m[100][100], int n) {
    int i, j;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("\nDigite o valor da posição [%d][%d]: ", i, j);
            scanf("%lf", &m[i][j]);
        }
    }
}
void impMatriz(double m[100][100], int n) {
    int i, j;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%.1lf\t", m[i][j]);
        }
        printf("\n");
    }
}
void somaMat(double mat1[100][100], double mat2[100][100],
             double matRes[100][100], int n) {
    int i, j;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            matRes[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
