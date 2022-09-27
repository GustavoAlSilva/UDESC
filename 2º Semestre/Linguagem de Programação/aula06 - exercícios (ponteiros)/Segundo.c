#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int x = 5;
	int *ptr = &x;
	printf("Ponteiro (posição da variável X): %x\nValor armazenado no ponteiro: %d\nValor da variável X: %d", ptr, *ptr, x);
}
