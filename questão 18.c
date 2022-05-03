#include <stdio.h>
#include <stdlib.h>

void ler(int nl, int nb, int **matriz){
  for(int i=0; i<nl; i++){
    for(int j=0; j<nb; j++){
      printf("Infrome o elemento %d%d da matriz\n", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void multiplicacao(int lA, int cA, int cB, int **matrizA, int **matrizB, int **matrizC){
  for( int i=0; i<lA; i++ ){
    for (int j=0; j<cB; j++){
      int resultado = 0;
      for (int k=0; k<cA; k++){
        resultado += matrizA[i][k]*matrizB[k][j];
      }
      matrizC[i][j] = resultado;
    }
  }
}

int main() {
  int cA, lA, cB, lB;
  int **matrizA, **matrizB, **matrizC;

  printf("Digite a quantidade de linhas e colunas da matriz A: \n");
  scanf("%d", &lA);
  scanf("%d", &cA);

  printf("Digite a quantidade de linhas e colunas da matriz B: \n");
  scanf("%d", &lB);
  scanf("%d", &cB);

  matrizA = malloc(lA * sizeof(int));
  for(int i=0; i<lA; i++){
    matrizA[i] = malloc(cA * sizeof(int));
  }
  matrizB = malloc(lB * sizeof(int));
  for(int i=0; i<lB; i++){
    matrizB[i] = malloc(cB * sizeof(int));
  }
  matrizC = malloc(lA * sizeof(int));
  for(int i=0; i<lA; i++){
    matrizC[i] = malloc(cB * sizeof(int));
  }

  printf("Matriz A\n");
  ler (lA, cA, matrizA);
  printf("Matriz B\n");
  ler (lB, cB, matrizB);

  multiplicacao (lA, cA, cB, matrizA, matrizB, matrizC);

  printf("Matriz C\n");
  for(int i=0; i<lA; i++){
    for (int j=0; j<cB; j++){
      printf("%d ", matrizC[i][j]);
    }
    printf("\n");
  }

  for(int i=0; i<lA; i++){
    free(matrizA[i]);
  }
  free(matrizA);
  for(int i=0; i<lB; i++){
    free(matrizB[i]);
  }
  free(matrizB);
  for(int i=0; i<lA; i++){
    free(matrizC[i]);
  }
  free(matrizC);
  return 0;
}
