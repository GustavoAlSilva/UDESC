#include <stdio.h>
#include <locale.h>

int main (void)
{
    int x, y;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);
    if(x > 15 && !y < x % 3 + 35){
        printf("Verdadeiro.");
    }
    else{
        printf("Falso.");
    }
}
