#include <stdio.h>
#include <locale.h>

int main (void)
{
    float r, a;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor do raio da circunfer�ncia: ");
    scanf("%f", &r);
    a = 3.14 * (r*r);
    printf("�rea da circunfer�ncia: %.2f", a);
}
