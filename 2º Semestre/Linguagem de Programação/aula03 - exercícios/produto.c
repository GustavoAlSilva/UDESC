#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n, produto;
    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Digite o número limite (ele deve ser positivo): ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 0; i <=n; i++) {
        produto = i*(i + 1);
        printf("\n%d", produto);
    }
}
