#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int k, i, j, m1[][] = {{2, 4, 5, 6, 7},{}}, m2[][], m3[][], m4[][], m5[][], m6[][], ;
	for (k = 0; k < 6; k++) {
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 3; j++) {
				printf("Digite o valor da posição [%d][%d] da %dªmatriz: ", i+1, j+1, k+1);
				scanf("%d", &matriz[i][j]);
			}
		}
	}
	if 
	for (i = 0; i < 2; i++) {
		printf("\n");
		for (j = 0; j < 3; j++) {
			matriz[i][j] *= escalar;
			printf("  %d", matriz[i][j]);
		}
	}
}
