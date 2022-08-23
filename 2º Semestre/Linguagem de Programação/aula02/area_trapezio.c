#include <stdio.h>
#include <locale.h>

int main (void)
{
    float b_maior, b_menor, h, a;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor da base maior: ");
    scanf("%f", &b_maior);
    printf("Digite o valor da base menor: ");
    scanf("%f", &b_menor);
    printf("Digite o valor da altura: ");
    scanf("%f", &h);
    a = ((b_maior + b_menor) * h) / 2;
    printf("Área do trapézio: %.2f", a);
}
