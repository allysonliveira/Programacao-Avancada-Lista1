// Seja o seguinte trecho de programa:
//   int i=3,j=5;
//   int *p, *q;
//   p = &i;
//   q = &j;
// Determine o valor das seguintes expressões:
//   p == &i;          |Saída: 1
//   *p - *q;          |Saída: -2
//   **&p;             |Saída: -3
//   3 - *p/(*q) + 7;  |Saída: 10
// Resolução:

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=3, j=5;
    int *p, *q, a,b,c,d;
    p = &i;
    q = &j;

    a = p == &i;            //Saída: 1
    b = *p - *q;            //Saída: -2
    c = **&p;               //Saída: -3
    d = 3 - *p/(*q) + 7;    //Saída: 10

    printf("QUESTAO 1:\n 'p == &i' = %d\n '*p - *q' = %d\n '**&p' = %d\n '3 - *p/(*q) + 7' = %d\n", a,b,c,d);

    return 0;
}
