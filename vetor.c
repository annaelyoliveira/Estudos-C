#include <stdio.h>
#include <stdlib.h>

int main (){
    int numeros[5];

    for (int i = 0; i < 5; i++){
		printf("\nDigite o numero da posicao %d:", i+1);
		scanf("%d", &numeros[i]);
    }

    printf("Valores do array: \n");
    for(int i = 0; i < 5; i++){
        printf("\nValor %d: %d", i, numeros[i]);
    }

    printf("\nValores do array * 3: \n");
    for (int i = 0; i < 5; i++){
        numeros[i] *= 3;
        printf("\nValor %d: %d", i+1, numeros[i]);

    }


    return 0;
}