#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n, soma, metade;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
	    if (n % i == 0) {
	    	soma += i;
		}
	}
	metade = soma / 2;
	if (metade == n) {
		printf("� um n�mero perfeito");
	}
	else {
		printf("N�o � um n�mero perfeito");
	}
}
