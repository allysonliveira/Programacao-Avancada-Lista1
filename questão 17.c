#include <stdio.h>
#include <stdlib.h>

void le_array(int n, float num[]);
void soma_array(int n, int a[], int b[], int c[]);

int main() {
  int *a, *b, *c, n;

  printf("Digite a quantidade de elementos dos vetores: ");
  scanf("%d", &n);

  a = malloc(sizeof(int)*n);
  b = malloc(sizeof(int)*n);
  c = malloc(sizeof(int)*n);

  printf("Entre com os elementos do vetor a: ");
  le_array(n,a);
  printf("Entre com os elementos do vetor b: ");
  le_array(n,b);

  //realizando a soma dos 3 vetores
  soma_array(n,a,b,c);

  printf("O vetor c é dado por:\n");
  for(int i=0; i<n; i++){
    printf("%d ", c[i]);
  }

  free(a);
  free(b);
  free(c);
  return 0;
}


void le_array(int n, float num[]){
    for(int i=0; i<n; i++){
        printf("Digite o %do valor a ser ordenado: ", i+1);
        scanf("%f", &num[i]);
    }
}

void soma_array(int n, int a[], int b[], int c[]){
  for( int i=0; i<n; i++ ){
    c[i] = a[i]+b[i];
  }
}
