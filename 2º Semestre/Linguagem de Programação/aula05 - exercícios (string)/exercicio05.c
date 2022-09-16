#include <stdio.h>
#include <string.h>
#include <locale.h>

void comparar(char *string1, char *string2) {
	int tam1, tam2;
	tam1 = strlen(string1);
	tam2 = strlen(string2);
	if (tam1 > tam2) {
		printf("\nA primeira string � maior!");
	}
	else if (tam2 > tam1) {
		printf("\nA segunda string � maior!");
	}
	else {
		printf("\nAs strings s�o do mesmo tamanho!");
	}
}

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    char string1[100], string2[100];
    printf("Digite a primeira string: ");
    scanf(" %s", &string1);
    printf("Digite a segunda string: ");
    scanf(" %s", &string2);
    comparar(string1, string2);
}
