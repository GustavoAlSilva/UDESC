#include <stdio.h>
#include <string.h>
#include <locale.h>

void acrescentar10(char *s1, char *s2) {
	strncat(s1, s2, 10);
	printf("\n%s", s1);
}

void comprimento(char *s1) {
	int tamanho;
    tamanho = strlen(s1);
    printf("\nTamanho de s1: %d", tamanho);
}

void converterInt(char *string) {
	long num;
	char *final; // endereço do último caractere da string, para saber quando parar de converter
	num = strtol(string, &final, 10);
	printf("\nINT: %ld", num);
}

int main (void)
{
    int escolha;
    char s1[] = "Paralelepípedo", s2[] = "Inconstitucionalissimamente", string[] = "-21";
    setlocale(LC_ALL, "Portuguese");
    do {
        printf("\n\nO que você deseja fazer?\n\n[1] - Acrescente 10 caracteres da string em s2 à string em s1\n[2] - Determine o comprimento da string em s1. Imprima o resultado\n[3] -  Converta a string “-21” em int e imprima o valor\n[4] - Sair\n\n");
        scanf("%d", &escolha);
        if (escolha == 4) {
            printf("\nObrigado! Volte sempre!");
            break;
        }
        switch(escolha) {

            case 1:
                acrescentar10(s1, s2);
                break;

            case 2:
                comprimento(s1);
                break;

            case 3:
                converterInt(string);
                break;

            default:
                printf("\nPor favor, digite um número válido (1 à 4.)");
                break;
        }
    } while (escolha != 4);
}
