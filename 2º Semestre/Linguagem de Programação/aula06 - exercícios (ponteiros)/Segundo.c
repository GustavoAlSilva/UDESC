#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int x = 5;
	int *ptr = &x;
	printf("Ponteiro (posi��o da vari�vel X): %x\nValor armazenado no ponteiro: %d\nValor da vari�vel X: %d", ptr, *ptr, x);
}
