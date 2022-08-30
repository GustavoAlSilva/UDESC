#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n_linhas;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o número de linhas: ");
    scanf("%d", &n_linhas);
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < i; j++) {
        printf("$");
        }
        printf("*\n");
    }
}
