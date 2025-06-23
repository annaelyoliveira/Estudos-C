#include <stdio.h>
#include <stdlib.h>

int main (){

    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);

    double num2; 
    printf("Digite outro numero:");
    scanf("%lf", &num2);

    int opcao;
    printf("1. Adicao \n2. Subtracao \n3. Multiplicacao \n4. Divisao \nDigite uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Adicao: %.2f\n", (num + num2));
            break;
        case 2: 
            printf("Subtracao: %.2f", (num - num2));    
            break;
        case 3: 
            printf("Multiplicacao: %.2f", num * num2);
            break;
        case 4: 
            printf("Divisao: %.2f", (num / num2));
            break;
        default:
            printf("Opcao invalida!");




    }

    return 0;
}
