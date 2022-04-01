
#include<stdio.h>

#include<stdlib.h>

int main() {

  int i;
  char strings1 [5][100];
  char strings2 [5][100];
  char strings3 [5][100];
  int cont1, cont2, cont3;


  void busort(char vetor1[5][100], int qtd);
  void sesort(char vetor2[5][100], int x);
  void insort(char vetor3[5][100], int x);

  
  busort(strings1, 10);
  
  	for (cont1=0;cont1<5;cont1++)
        {
        	printf ("\n\nDigite uma string: ");
        	gets (strings1[cont1]);
        }

  printf("\n");

  	for (cont2=0;cont2<5;cont2++)
        {
        	printf ("\n\nDigite uma string: ");
        	gets (strings2[cont2]);
        }

  sesort(strings2, 10);

  	for (cont3=0;cont3<5;cont3++)
        {
        	printf ("\n\nDigite uma string: ");
        	gets (strings3[cont3]);
        }
  insort(strings3, 10);

  printf("\n");

  printf("\n\n***Bubble Sort***\n");

  printf ("\n\n\nAs strings que voce digitou foram:\n\n");
	for (cont1=0;cont1<5;cont1++)
                printf ("%s\n",strings1[cont1]);

  printf("\n\n***Selection Sort***\n");

  printf ("\n\n\nAs strings que voce digitou foram:\n\n");
	for (cont2=0;cont2<5;cont2++)
                printf ("%s\n",strings2[cont2]);

  printf("\n\n***Insert Sort***\n");

  printf ("\n\n\nAs strings que voce digitou foram:\n\n");
	for (cont3=0;cont3<5;cont3++)
                printf ("%s\n",strings3[cont3]);
  return 0;
}

void busort(char vetor1[5][100], int qtd) {
  int i, j;
  int x;
  for (i = 0; i < (qtd - 1); i++) {
    for (j = 0; j < qtd - (i + 1); j++) {
      if (vetor1[i][j] > vetor1[i][j + 1]) {
        x = vetor1[i][j];
        vetor1[i][j] = vetor1[i][j + 1];
        vetor1[i][j + 1] = x;
      }
    }
  }
}

void sesort(char vetor2[5][100], int t) {

  int i, j, x, y;

  for (i = 0; i < t - 1; i++) {
    x = i;
    for (j = (i + 1); j < t; j++) {
      if (vetor2[i][j] < vetor2[x][y])
        x = j;
    }
    if (i != x) {
      y = vetor2[i][j];
      vetor2[i][j] = vetor2[x][y];
      vetor2[x][y] = y;
    }
  }
}

void insort(char vetor3[5][100], int t) {

  int i, j, x;

  for (i = 0; i < t; i++) {
    x = vetor3[i][j];
    j = i - 1;
    for (j >= 0; vetor3[i][j] > x; j--) {
      vetor3[i][j] = vetor3[i][j];

    }
    vetor3[i][j] = x;
  }
}
