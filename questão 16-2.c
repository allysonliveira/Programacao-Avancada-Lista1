#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//COM QSORT

int compara_array (const void*x, const void*y);
void le_array(int n, float num[]);
void ordena_array(int n, float num[]);

int main() {
    int n;
    float *x;

    clock_t tempo;s

    printf("Digite a quantidade de numeros a serem ordenados:");
    scanf("%d",&n);

    x = malloc(sizeof(float)*n);

    le_array(n,x);
    tempo=clock();
    ordena_array(n,x);
    tempo=clock()-tempo;

    for(int i=0; i<n; i++){
        printf("%f ", x[i]);
    }
    free(x);
    return 0;
}

int compara_array (const void*x, const void*y){
  float fx = *(const float*)x,fy = *(const float*)y;
  return (fx>fy) - (fx<fy);
}

void le_array(int n, float num[]){
    for(int i=0; i<n; i++){
        printf("Digite o %do valor a ser ordenado: ", i+1);
        scanf("%f", &num[i]);
    }
}

void ordena_array(int n, float num[]){
    qsort(num, n, sizeof(float), compara_array);
}
