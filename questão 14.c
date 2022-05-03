#include <stdio.h>
#include <stdlib.h>

int compara_array (const void*x, const void*y);
void le_array(int n, float num[]);
void ordena_array(int n, float num[]);

int main() {
    int n;
    float *p;

    printf("Digite a quantidade de numeros a serem ordenados: ");
    scanf("%d", &n);

    p=malloc(n * sizeof(float));
    le_array(n, p);
    ordena_array(n, p);


    for(int i=0; i<n; i++){
        printf("%f ", p[i]);
    }

    free(p);
    return 0;
}

int compara_array (const void*x, const void*y){
  float fx = *(const float *)x,fy = *(const float*)y;
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
