#include <stdio.h>
#include <ctype.h>
#include <locale.h>

void digito(char *c) {
	int i;
	for (i = 0; i < 3; i++){
		if (isdigit(c[i])  !=  0  ) { 
		printf ( "\nO caractere %c � um d�gito" , c[i]);
	    }
	    else {
	    	printf ( "\nO caractere %c n�o � um d�gito" , c[i]);
	    }
	}
	printf("\n\n");
}

void maiusculoMinusculo(char *c) {
	int i;
	for (i = 0; i < 3; i++){
		if (isalpha(c[i])  !=  0  ) { 
		printf ( "\nO caractere %c � alfab�tico" , c[i]);
	    }
	    else {
	    	printf ( "\nO caractere %c n�o � alfab�tico" , c[i]);
	    }
	}
	printf("\n\n");
}

void maiusculoMinusculoDigito(char *c) {
	int i;
	for (i = 0; i < 3; i++){
		if (isalnum(c[i])  !=  0  ) { 
		printf ( "\nO caractere %c � alfab�tico/d�gito" , c[i]);
	    }
	    else {
	    	printf ( "\nO caractere %c n�o � alfab�tico/d�gito" , c[i]);
	    }
	}
	printf("\n\n");
}

void hexadecimal(char *c) {
	int i;
	for (i = 0; i < 3; i++){
		if (isxdigit(c[i])  !=  0  ) { 
		printf ( "\nO caractere %c � um d�gito hexadecimal" , c[i]);
	    }
	    else {
	    	printf ( "\nO caractere %c n�o � um d�gito hexadecimal" , c[i]);
	    }
	}
}

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    char c[3];
    int i;
    for (i = 0; i <3; i++){
    	printf("Digite o %d� caractere: ", i+1);
    	scanf(" %c", &c[i]);
	}
    digito(c);
    maiusculoMinusculo(c);
    maiusculoMinusculoDigito(c);
    hexadecimal(c);
}
