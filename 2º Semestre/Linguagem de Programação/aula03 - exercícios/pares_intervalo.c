#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n, m, soma = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o n�mero inicial: ");
    scanf("%d", &n);
    printf("Digite o n�mero limite: ");
    scanf("%d", &m);
    for (int i = n+1; i < m; i++) {
        if(i % 2 == 0) {
            soma += i;
        }
    }
    printf("Soma dos n�meros pares nesse intervalo: %d", soma);
}
