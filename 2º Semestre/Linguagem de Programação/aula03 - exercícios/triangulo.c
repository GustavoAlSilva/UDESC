#include <stdio.h>
#include <locale.h>

int main (void)
{
    float a1, a2, a3;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o primeiro �ngulo do tri�ngulo: ");
    scanf("%f", &a1);
    printf("Digite o segundo �ngulo do tri�ngulo: ");
    scanf("%f", &a2);
    printf("Digite o terceiro �ngulo do tri�ngulo: ");
    scanf("%f", &a3);
    if (a1 == 90 || a2 == 90 || a3 == 90) {
        printf("\nTri�ngulo ret�ngulo.");
    }
    if (a1 == a2 && a1 == a3 && a2 == a3) {
        printf("\nTri�ngulo equil�tero.");
    }
    else if (a1 != a2 && a1 != a3 && a2 != a3){
        printf("\nTri�ngulo escaleno.");
    }
    else {
        printf("\nTri�ngulo is�celes.");
    }
}
