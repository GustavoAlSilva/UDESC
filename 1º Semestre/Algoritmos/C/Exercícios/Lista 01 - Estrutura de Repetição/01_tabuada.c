#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++) {
        printf("\n%d x %d = %d", n, i, i*n);
    }
}
