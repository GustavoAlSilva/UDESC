#include <stdio.h>
#include <string.h>
#include <locale.h>

void somar(char *string1, char *string2, char *string3, char *string4) {
	long num1, num2, num3, num4;
	char *final1, *final2, *final3, *final4;
	num1 = strtol(string1, &final1, 10);
	num2 = strtol(string2, &final2, 10);
	num3 = strtol(string3, &final3, 10);
	num4 = strtol(string4, &final4, 10);
	return num1 + num2 + num3 + num4;
}

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    char string1[], string2[], string3[], string4[];
    int i;
    printf("Digite a primeira string: ");
    scanf(" %s", &string1);
    printf("Digite a segunda string: ");
    scanf(" %s", &string2);
    printf("Digite a terceira string: ");
    scanf(" %s", &string3);
    printf("Digite a quarta string: ");
    scanf(" %s", &string4);
    print("Soma: %ld", somar(string1, string2, string3, string4));
    
}
