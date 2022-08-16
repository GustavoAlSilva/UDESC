#include <stdio.h>
#include <locale.h>
#include<time.h>

int main (void)
{
    int nivel, num_secreto, chute, qtd_tentativas;

    setlocale(LC_ALL, "Portuguese");
    printf("Bem Vindo!");
    do {
        printf("\n\nQual o n�vel de dificuldade? Por favor, digite um n�mero v�lido.\n\n");
        printf("\t[1] - F�cil\n\t[2] - M�dio\n\t[3] - Dif�cil\n\n\t");
        scanf("%d", &nivel);
    } while (nivel != 1 && nivel != 2 && nivel != 3);
    srand(time(NULL));
    switch (nivel) {

        case 1:
            num_secreto = rand() % 10;
            qtd_tentativas = 6;
            break;

        case 2:
            num_secreto = rand() % 50;
            qtd_tentativas = 5;
            break;

        case 3:
            num_secreto = rand() % 100;
            qtd_tentativas = 4;
            break;
    }
    for (int i=1; i<=qtd_tentativas; i++){
        printf("\n-> Tentativa %d de %d\n", i, qtd_tentativas);
        printf("\tChute um n�mero: ");
        scanf("%d", &chute);

        if (chute == num_secreto) {
            printf("\n\nParab�ns! Voc� acertou o n�mero secreto na %d� tentativa!\n\n", i);
            break;
        }
        else if (chute < num_secreto) {
            printf("\nSeu chute foi menor que o n�mero secreto!\n\n");
        }
        else {
            printf("\nSeu chute foi maior que o n�mero secreto!\n\n");
        }
    }
    if (chute != num_secreto) {
        printf("\n\nVoc� perdeu!\nO n�mero secreto era: %d\n\n", num_secreto);
    }
}
