#include <stdio.h>
#include <locale.h>

int main (void)
{
    int produto;
    setlocale(LC_ALL, "Portuguese");
    for (int i = 1; i < 6; i++) {
        for (int j = 0; j < 11; j++) {
            produto = i * j;
            printf("\n%d", produto);
        }
        printf("\n");
    }
}
