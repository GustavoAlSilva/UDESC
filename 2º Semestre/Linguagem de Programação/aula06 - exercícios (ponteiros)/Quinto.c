#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	int array[] = {1, 2, 3, 4, 5};
	int *ptrarray = &array;
	for (i = 0; i < 5; i++) {
		printf("\nVetor[%d]: %d", i, ptrarray[i]);
	}
}
