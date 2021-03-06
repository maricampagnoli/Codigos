#include<stdio.h>

#include<stdlib.h>

int main() {

  int i;
  int v1[10];
  int v2[10];
  int v3[10];

  void busort(int vetor1[], int qtd);
  void sesort(int vetor2[], int x);
  void insort(int vetor3[], int x);

  for (i = 0; i < 10; i++) {
    printf("%d posicao do vetor 1: ", i);
    scanf("%d", & v1[i]);
  }
  busort(v1, 10);

  printf("\n");

  for (i = 0; i < 10; i++) {
    printf("%d posicao do vetor 2: ", i);
    scanf("%d", & v2[i]);
  }

  sesort(v2, 10);

  printf("\n");

  for (i = 0; i < 10; i++) {
    printf("%d posicao  do vetor 3: ", i);
    scanf("%d", & v3[i]);
  }

  insort(v3, 10);

  printf("\n");

  printf("\n\n***Bubble Sort***\n");

  for (i = 0; i < 10; i++) {
    printf("vetor 1[%d]=%d\n", i, v1[i]);
  }

  printf("\n\n***Selection Sort***\n");

  for (i = 0; i < 10; i++) {
    printf("vetor 2[%d]=%d\n", i, v2[i]);
  }

  printf("\n\n***Insert Sort***\n");

  for (i = 0; i < 10; i++) {
    printf("vetor 3[%d]=%d\n", i, v3[i]);
  }

  return 0;
}

void busort(int vetor1[], int qtd) {
  int i, j;
  int x;
  for (i = 0; i < (qtd - 1); i++) {
    for (j = 0; j < qtd - (i + 1); j++) {
      if (vetor1[j] > vetor1[j + 1]) {
        x = vetor1[j];
        vetor1[j] = vetor1[j + 1];
        vetor1[j + 1] = x;
      }
    }
  }
}

void sesort(int vetor2[], int t) {

  int i, j, x, y;

  for (i = 0; i < t - 1; i++) {
    x = i;
    for (j = (i + 1); j < t; j++) {
      if (vetor2[j] < vetor2[x])
        x = j;
    }
    if (i != x) {
      y = vetor2[i];
      vetor2[i] = vetor2[x];
      vetor2[x] = y;
    }
  }
}

void insort(int vetor3[], int t) {

  int i, j, x;

  for (i = 0; i < t; i++) {
    x = vetor3[i];
    j = i - 1;
    for (j >= 0; vetor3[j] > x; j--) {
      vetor3[j + 1] = vetor3[j];

    }
    vetor3[j + 1] = x;
  }
}
