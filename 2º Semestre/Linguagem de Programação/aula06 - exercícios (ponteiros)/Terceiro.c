#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int x = 5, y = 6, soma;
	int *ptrx = &x, *ptry = &y;
	soma = *ptrx + *ptry;
	printf("Soma dos valores: %d", soma);
}
