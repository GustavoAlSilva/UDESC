#include <stdio.h>
#include <locale.h>

int main (void)
{
    int x, y, z, soma, i;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &x);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &y);
    if (y < x) {
    	z = x;
    	x = y;
    	y = z;
	}
    for (i = x+1; i < y; i++) {
        if (i % 2 != 0) {
        	soma += i;
		}
    }
    printf("Soma dos n�meros �mpares nesse intervalo: %d", soma);
}
