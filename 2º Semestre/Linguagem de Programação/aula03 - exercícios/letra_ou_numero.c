#include <stdio.h>
#include <locale.h>

int main (void)
{
    char string[100];
    setlocale(LC_ALL, "Portuguese");
    printf("Digite uma string: ");
    scanf("%c", &string);
    if (string[0] == '0' || string[0] == '1' || string[0] == '2' || string[0] == '3' || string[0] == '4' || string[0] == '5' || string[0] == '6' || string[0] == '7' || string[0] == '8' || string[0] == '9') {
        printf("Come�a com um n�mero.");
    } else {
        printf("Come�a com uma letra.");
    }
}
