#include <stdio.h>
#include <locale.h>

int main (void)
{
    int qtd_div = 0;
    setlocale(LC_ALL, "Portuguese");
    for (int i = 3; i < 100; i++) {
        qtd_div = 0;
        for (int j = 2; j<i; j++) {
            if (i % j == 0) {
                qtd_div++;
            }
        }
        if (qtd_div == 0) {
                printf("\n%d", i);
        }
    }
}
