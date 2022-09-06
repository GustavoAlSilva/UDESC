#include <stdio.h>
#include <locale.h>

float converterFahrenheit(float c){
    float ce, fa;
    ce = c;
    fa = 1.8 * ce + 32;
    return fa;
}

float converterKelvin(float c){
    float ce, ke;
    ce = c;
    ke = ce + 273;
    return ke;
}

int main (void)
{
    float c, f, k;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &c);
    printf("\nFahrenheit: %.2f\nKelvin: %.2f", converterFahrenheit(c), converterKelvin(c));
}
