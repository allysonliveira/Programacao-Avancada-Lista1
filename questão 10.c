//Implemente um programa de computador para testar estas suposições e compare as respostas
//oferecidas pelo programa com as respostas que você idealizou.
//
//Resolução:

#include <stdio.h>
#include <stdlib.h>

int main(){
    char x1[4] = {4022};
    int x2[4] = {4,9,13,22};
    float x3[4] = {4,9,13,22};
    double x4[4] = {4,9,13,22};

    for(int i=0; i<4; i++) {
        printf("\n");
        printf("TIPO CHAR X%d = %p \n", i+1,(x1+i));
        printf("TIPO INT X%d = %p \n", i+1,(x2+i));
        printf("TIPO FLOAT X%d = %p \n", i+1,(x3+i));
        printf("TIPO DOUBLE X%d = %p \n", i+1,(x4+i));
    }
    return 0;
}
