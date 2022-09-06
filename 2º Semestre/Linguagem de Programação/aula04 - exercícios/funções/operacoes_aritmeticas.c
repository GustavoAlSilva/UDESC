#include <stdio.h>
#include <locale.h>

int somar(int a, int b){
    int soma;
    soma = a + b;
    printf("Soma: %d", soma);
}

int subtrair(int a, int b) {
    int subtracao;
    subtracao = a - b;
    printf("Subtração: %d", subtracao);
}

int multiplicar(int a, int b) {
    int multiplicacao;
    multiplicacao = a * b;
    printf("Multiplicação: %d", multiplicacao);
}

float dividir(int a, int b) {
    float divisao;
    divisao = a / b;
    printf("Divisão: %.2f", divisao);
}

int main (void)
{
    int a, b, escolha;
    setlocale(LC_ALL, "Portuguese");
    do {
        printf("\n\nQual operação aritmética você deseja fazer?\n\n[1] - Soma\n[2] - Subtração\n[3] - Multiplicação\n[4] - Divisão\n[5] - Sair\n\n");
        scanf("%d", &escolha);
        if (escolha == 5) {
            printf("\nObrigado! Volte sempre!");
            break;
        }
        printf("\nDigite o primeiro valor: ");
        scanf("%d", &a);
        printf("Digite o segundo valor: ");
        scanf("%d", &b);
        switch(escolha) {

            case 1:
                somar(a, b);
                break;

            case 2:
                subtrair(a, b);
                break;

            case 3:
                multiplicar(a, b);
                break;

            case 4:
                dividir(a, b);
                break;

            default:
                printf("\nPor favor, digite um número válido (1 à 5.)");
                break;
        }
    } while (escolha != 5);
}
