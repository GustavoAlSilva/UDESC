#include <stdio.h>
#include <locale.h>

int main (void)
{
    float c, f, k;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &c);
    f = 1.8 * c + 32;
    k = c + 273;
    printf("\nFahrenheit: %.2f\nKelvin: %.2f", f, k);
}
