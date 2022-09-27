#include <stdio.h>
#include <locale.h>

int somarValorPonteiro(int *ptrx, int *ptry) {
	int soma;
	soma = *ptrx + *ptry;
	return soma;
}

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int x = 5, y = 6;
	int *ptrx = &x, *ptry = &y;
	printf("Soma dos valores: %d", somarValorPonteiro(ptrx, ptry));
}
