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
    printf("Subtra��o: %d", subtracao);
}

int multiplicar(int a, int b) {
    int multiplicacao;
    multiplicacao = a * b;
    printf("Multiplica��o: %d", multiplicacao);
}

float dividir(int a, int b) {
    float divisao;
    divisao = a / b;
    printf("Divis�o: %.2f", divisao);
}

int main (void)
{
    int a, b, escolha;
    setlocale(LC_ALL, "Portuguese");
    do {
        printf("\n\nQual opera��o aritm�tica voc� deseja fazer?\n\n[1] - Soma\n[2] - Subtra��o\n[3] - Multiplica��o\n[4] - Divis�o\n[5] - Sair\n\n");
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
                printf("\nPor favor, digite um n�mero v�lido (1 � 5.)");
                break;
        }
    } while (escolha != 5);
}
