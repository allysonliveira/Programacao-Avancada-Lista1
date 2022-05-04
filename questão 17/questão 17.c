/*Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,
5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.
*/

#include <stdio.h>
#include <stdlib.h>

void soma_array(int n, int a[], int b[], int c[]);
void entrada(int tam, float num[]);

int main() {
	int *a, *b, *c, n;

	printf("Digite a qtd de elementos para os vetores: ");
	scanf("%d", &n);

	a = malloc(sizeof(int)*n);
	b = malloc(sizeof(int)*n);
	c = malloc(sizeof(int)*n);

	printf("Entre com os elementos do vetor a: ");
	entrada(n,a);
	printf("Entre com os elementos do vetor b: ");
	entrada(n,b);

	//realizando a soma dos 3 vetores
	soma_array(n,a,b,c);

	printf("O vetor c é dado por:\n");
	for(int i=0; i<n; i++){
		printf("%d ", c[i]);
    }
    return 0;
}

void entrada(int tam, float num[]){
  printf("Digite os numeros para serem ordenados: \n");
  for(int i=0; i<tam; i++){
    scanf("%f", &num[i]);
  }
}

void soma_array(int n, int a[], int b[], int c[]){
  for( int i=0; i<n; i++ ){
    c[i] = a[i]+b[i];
  }
}
