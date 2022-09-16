#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int i, j, matriz[2][3], escalar;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("Digite o valor da posição [%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\nDigite o escalar que deseja multiplicar: ");
	scanf("%d", &escalar);
	for (i = 0; i < 2; i++) {
		printf("\n");
		for (j = 0; j < 3; j++) {
			matriz[i][j] *= escalar;
			printf("  %d", matriz[i][j]);
		}
	}
}
