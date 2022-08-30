#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n, div;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o número a ser dividido: ");
    scanf("%d", &n);
    div = n / 10;
    printf("%d dividido por 10: %d", n, div);
}
