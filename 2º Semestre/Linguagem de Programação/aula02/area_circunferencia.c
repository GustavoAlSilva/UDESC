#include <stdio.h>
#include <locale.h>

int main (void)
{
    float r, a;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor do raio da circunferência: ");
    scanf("%f", &r);
    a = 3.14 * (r*r);
    printf("Área da circunferência: %.2f", a);
}
