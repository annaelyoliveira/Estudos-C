#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero;
    char palavra[100];

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Digite uma frase: ");
    scanf(" %[^\n]", palavra);



    printf("\nNumero: %d", numero);
    printf("\nFrase: %s", palavra);

    printf("\nEndereco numero: %p", &numero);
    printf("\nEndereco palavra: %p", &palavra);





    return 0;
}