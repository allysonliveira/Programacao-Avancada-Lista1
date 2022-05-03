#include <stdio.h>
#include <stdlib.h>

void le_array(int n, float num[]);
void ordena_array(int n, float num[]);

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

void le_array(int n, float num[]){
    for(int i=0; i<n; i++){
        printf("Digite o %do valor a ser ordenado: ", i+1);
        scanf("%f", &num[i]);
    }
}

void ordena_array(int n, float num[]){
    int aux;
    for( int i=0; i<n; i++ ){
        for( int j=i+1; j<n; j++ ){
            if( num[i] > num[j] ){
                aux =num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
}
