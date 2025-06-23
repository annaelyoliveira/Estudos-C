#include <stdio.h>
#include <stdlib.h>

int main (){

    int num = 10;
    int *p;

    p = &num;

    printf("Valor de num: %d", num);
    printf("\nEnderevo de num: %p", &num);
    printf("\nValor de p: %p", p);
    printf("\nEndereco de p: %p", &p);
    printf("\nValor apontado por p: %d", *p); //Quando quero pegar o valor q o ponteiro ta apontando






    return 0;
}