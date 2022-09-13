#include <stdio.h>
#include <ctype.h>
#include <locale.h>

void digito(char *c) {
	int i;
	for (i = 0; i < 3; i++){
		if (isdigit(c[i])  !=  0  ) { 
		printf ( "\nO caractere %c é um dígito" , c[i]);
	    }
	    else {
	    	printf ( "\nO caractere %c não é um dígito" , c[i]);
	    }
	}
	printf("\n\n");
}

void maiusculoMinusculo(char *c) {
	int i;
	for (i = 0; i < 3; i++){
		if (isalpha(c[i])  !=  0  ) { 
		printf ( "\nO caractere %c é alfabético" , c[i]);
	    }
	    else {
	    	printf ( "\nO caractere %c não é alfabético" , c[i]);
	    }
	}
	printf("\n\n");
}

void maiusculoMinusculoDigito(char *c) {
	int i;
	for (i = 0; i < 3; i++){
		if (isalnum(c[i])  !=  0  ) { 
		printf ( "\nO caractere %c é alfabético/dígito" , c[i]);
	    }
	    else {
	    	printf ( "\nO caractere %c não é alfabético/dígito" , c[i]);
	    }
	}
	printf("\n\n");
}

void hexadecimal(char *c) {
	int i;
	for (i = 0; i < 3; i++){
		if (isxdigit(c[i])  !=  0  ) { 
		printf ( "\nO caractere %c é um dígito hexadecimal" , c[i]);
	    }
	    else {
	    	printf ( "\nO caractere %c não é um dígito hexadecimal" , c[i]);
	    }
	}
}

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    char c[3];
    int i;
    for (i = 0; i <3; i++){
    	printf("Digite o %dº caractere: ", i+1);
    	scanf(" %c", &c[i]);
	}
    digito(c);
    maiusculoMinusculo(c);
    maiusculoMinusculoDigito(c);
    hexadecimal(c);
}
