//Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
//atribuição são ilegais?
//   p = i;           | Saída: Não tem problema
//   q = &j;          | Saída: Não tem problema
//   p = &*&i;        | Saída: Não tem problema
//   i = (*&)j;       | Saída: Ilegal por ter problema
//   i = *&j;         | Saída: Não tem problema
//   i = *&*&j;       | Saída: Não tem problema
//   q = *p;          | Saída: Ilegal por ter problema
//   i = (*p)++ + *q; |Saída: Ilegal por ter problema
// Resolução:

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j,r;
    int *p, *q;
    //r = EXPRESSÃO
    r = q = *p;
    printf("%d %d %d %d", r);
    return 0;
}
