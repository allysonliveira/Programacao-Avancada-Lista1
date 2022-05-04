// O que fazem os seguintes programas em C?
//
// Resolução:
//
#include <stdio.h>
#include <stdlib.h>

//Algoritmo 1
int main(){
    int vet[] = {4,9,13};        //(1)
    int i;
    for(i=0;i<3;i++){            //(2)
        printf("%d ",*(vet+i));  //(3)
    }
    return 0;
}
//(1) É declarado do vetor, inserindo os valores de entrada 4,9 e 13.(2)É feito um Laço de repetição FOR,
//para repetir o conteúdo dentro do printf, dentro dele é usado o parâmetro "%d"(que imprime o conteúdo do
//bloco de memória) que será percorrido a cada elemento de acordo com a incrementação da variável i.
//(3) A saída irá mostrar cada um dos valores inseridos na entrada.


//Algoritmo 2
int main(){
    int vet[] = {4,9,13};       (1)
    int i;
    for(i=0;i<3;i++){           (2)
        printf("%X ",vet+i);    (3)
    }
    return 0;
}
//(1) É declarado do vetor, inserindo os valores de entrada 4,9 e 13.(2)É feito um Laço de repetição FOR,
//para repetir o conteúdo dentro do printf, dentro dele é usado o parâmetro "%X"(que imprime o Endereço do
//bloco de memória) que será percorrido a cada elemento de acordo com a incrementação da variável i.
//(3) A saída irá mostrar o endereço dos blocos do vetor.
