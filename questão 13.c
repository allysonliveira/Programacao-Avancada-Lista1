/* 13. Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente.
Utilize alocação dinâmica de memória para realizar a tarefa. */


#include <stdio.h>
#include <stdlib.h>

void ordem(int n, float num[]);
void entrada(int n, float num[]);

int main() {
  int tam;
  float *p;

  printf("Digite a qtd de num: \n");
  scanf("%d", &tam);

  p = malloc(tam * sizeof(float));

  //Chama as funções
  entrada(tam, p);

  printf("--------- ORDENAÇAO ---------\n");
  ordem(tam, p);

  //Apresenta na tela
  for(int i=0; i<tam; i++){
    printf("%.2f ", p[i]);
  }

  return 0;
}

void entrada(int tam, float num[]){
  printf("Digite os numeros para serem ordenados: \n");
  for(int i=0; i<tam; i++){
    scanf("%f", &num[i]);
  }
}

void ordem(int tam, float num[]){
  for( int i=0; i<tam; i++ ){
    for( int j=i+1; j<tam; j++ ){
      if( num[i] > num[j] ){
        float aux;
        aux =num[i];
        num[i] = num[j];
        num[j] = aux;
      }
    }
  }
}
