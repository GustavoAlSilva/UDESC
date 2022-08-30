#include <stdio.h>
#include <locale.h>

int main (void)
{
    float a1, a2, a3;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o primeiro ângulo do triângulo: ");
    scanf("%f", &a1);
    printf("Digite o segundo ângulo do triângulo: ");
    scanf("%f", &a2);
    printf("Digite o terceiro ângulo do triângulo: ");
    scanf("%f", &a3);
    if (a1 == 90 || a2 == 90 || a3 == 90) {
        printf("\nTriângulo retângulo.");
    }
    if (a1 == a2 && a1 == a3 && a2 == a3) {
        printf("\nTriângulo equilátero.");
    }
    else if (a1 != a2 && a1 != a3 && a2 != a3){
        printf("\nTriângulo escaleno.");
    }
    else {
        printf("\nTriângulo isóceles.");
    }
}
