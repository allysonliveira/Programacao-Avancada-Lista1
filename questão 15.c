#include <stdio.h>
#include <stdlib.h>

void le_array(int n, float num[]){
    for(int i=0; i<n; i++){
        printf("Digite o %do valor a ser ordenado: ", i+1);
        scanf("%f", &num[i]);
    }
}

void ordena_array(int n, float numero[]){
    int aux;
    for( int i=0; i<n; i++ ){
        for( int j=i+1; j<n; j++ ){
            if( numero[i] > numero[j] ){
                aux =numero[i];
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }
    }
}

int main() {
    int n;
    float *x;

    printf("Digite a quantidade de numeros a serem ordenados:");
    scanf("%d",&n);

    x = malloc(sizeof(float)*n);

    le_array(n,x);
    ordena_array(n,x);

    for(int i=0; i<n; i++){
        printf("%f ",x[i]);
    }

    free(x);
    return 0;
}
