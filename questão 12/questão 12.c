/*O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso.
*/
//Resposta:
//    Ponteiros são utilizados para armazenar variáveis na memória. Para as funções, eles guardam endereços de áreas de código, apontando para uma função,
// assim como ponteiros também apontam para as variáveis. Por exemplo:

#include <stdio.h>
#include <stdlib.h>

    int soma(int x, int y){
        return x + y;
    }

    int main(){
        int a,b,c;
        int(*px)(int,int);
        printf("Escreva dois valores para realizar a soma: ");
        scanf("%d %d", &a,&b);

        px = soma;
        c = px(a,b);
        printf("A soma eh %d",c);

        return 0;
    }
