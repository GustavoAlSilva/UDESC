#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n, soma, metade;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
	    if (n % i == 0) {
	    	soma += i;
		}
	}
	metade = soma / 2;
	if (metade == n) {
		printf("É um número perfeito");
	}
	else {
		printf("Não é um número perfeito");
	}
}
