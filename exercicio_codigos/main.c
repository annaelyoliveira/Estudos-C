#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero); 

    printf("Numero digitado: %d", numero);
    printf("Numero digitado: %p", &numero);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}
