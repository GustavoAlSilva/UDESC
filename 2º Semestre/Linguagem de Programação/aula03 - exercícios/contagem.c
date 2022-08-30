#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o número limite: ");
    scanf("%d", &n);
    for (int i = 0; i <=n; i++) {
        printf("\n%d", i);
    }
}
