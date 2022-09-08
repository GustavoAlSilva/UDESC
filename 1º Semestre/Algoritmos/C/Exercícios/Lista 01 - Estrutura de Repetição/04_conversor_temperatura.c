#include <stdio.h>
#include <locale.h>

int main (void)
{
    int inicio, final;
    float c;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);
	printf("Digite o final do intervalo: ");    
    scanf("%d", &final);
    for (int i = inicio; i <= final; i += 2) {
	    c = (i - 32) * 0.555555556;
	    printf("\n%d° Farenheit: %.2f° Celsius", i, c);
	}
}
