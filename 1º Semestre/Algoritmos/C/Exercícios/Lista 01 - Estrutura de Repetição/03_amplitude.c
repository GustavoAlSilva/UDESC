#include <stdio.h>
#include <locale.h>

int main (void)
{
    int qtd, n, menor, maior, amplitude, n1, n2;
    setlocale(LC_ALL, "Portuguese");
    printf("Quantos n�meros voc� deseja digitar? ");
    scanf("%d", &qtd);
    printf("\nDigite o 1� n�mero: ");
    scanf("%d", &maior);
    menor = maior;
    for (int i = 1; i < qtd; i++) {
    	printf("Digite o %d� n�mero: ", i+1);
    	scanf("%d", &n);
    	if (n > maior) {
    		maior = n;
		}
		if (n < menor) {
			menor = n;
		}
	}
	amplitude = maior - menor;
    printf("Amplitude: %d", amplitude);
}
