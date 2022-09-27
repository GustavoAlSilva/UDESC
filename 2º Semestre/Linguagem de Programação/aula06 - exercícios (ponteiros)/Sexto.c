#include <stdio.h>
#include <locale.h>
#include <string.h>

int medirString(char *string) {
	int i, tamanho, contador = 0;
	for (i = 0; string[i] != '\0'; i++) {
		contador++;
	}
	tamanho = contador;
	return tamanho;
}

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	char string [100];
	printf("Digite a string: ");
	scanf("%s", &string);
	printf("\nTamanho da string: %d", medirString(string));
}
