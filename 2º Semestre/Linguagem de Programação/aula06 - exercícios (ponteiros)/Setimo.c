#include <stdio.h>
#include <locale.h>

int medirArray(int *array) {
	int i, tamanho, contador = 0;
	for (i = 0; array[i] != '\0'; i++) {
		contador++;
	}
	tamanho = contador;
	return tamanho;
}

void inverterArray(int *array, int tamanho) {
	int i;
	for (i = tamanho-1; i >= 0; i--) {
		printf("\n%d", array[i]);
	}
}

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int array[] = {1, 2, 3, 4, 5, 6, 7, 9};
	int tamanho;
	tamanho = medirArray(array);
	inverterArray(array, tamanho);
}
