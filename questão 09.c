//Seja x um vetor de 4 elementos, declarado da forma TIPO x[4];. Suponha que depois da
//declaração, x esteja armazenado no endereço de memória (4092) (ou seja, o endereço de x[0]).
//Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
//int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
//valores de x+1, x+2 e x+3 se:
//
//Resolução:
//◦ x for declarado como char?   1 byte   | X+1 = 4093; X+2 = 4094 ; X+3 = 4095
//◦ x for declarado como int?    2 byte   | X+1 = 4094; X+2 = 4096 ; X+3 = 4098
//◦ x for declarado como float?  4 bytes  | X+1 = 4096; X+2 = 409A ; X+3 = 409E
//◦ x for declarado como double? 8 bytes  | X+1 = 409A; X+2 = 40A2 ; X+3 = 40AA
