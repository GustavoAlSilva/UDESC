#include <stdio.h>
#include <math.h>

int main (void)
{
    float peso, altura;
    int imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    imc = round(peso / (altura * altura));
    switch(imc) {

        case 17 ... 19:
            printf("Abaixo do peso.");
            break;

        case 20 ... 24:
            printf("Normal.");
            break;

        case 25 ... 29:
            printf("Excesso de peso.");
            break;

        case 30 ... 35:
            printf("Obesidade.");
            break;

        case 36 ... 58:
            printf("Super obesidade.");
            break;

        default:
            printf("Erro! Teste inválido.");
    }
}
