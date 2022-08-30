#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n, m, soma = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o número inicial: ");
    scanf("%d", &n);
    printf("Digite o número limite: ");
    scanf("%d", &m);
    for (int i = n+1; i < m; i++) {
        if(i % 2 == 0) {
            soma += i;
        }
    }
    printf("Soma dos números pares nesse intervalo: %d", soma);
}
