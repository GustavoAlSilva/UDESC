#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = 5;
	printf("X = %d, (endereco %d)\n", x, &x);
	
	int *p; // Isso � um ponteiro
	
	p = &x; // & recupera o endere�o de uma vari�vel
	
	*p = 0; // Zera a vari�vel x usando o ponteiro p.
	
	printf("X = %d, (endereco %d)\n", x, &x);
	
	printf("X = %d, (endereco %d)\n", *p, p); // Feito de jeito diferente...
	
	printf("Digite um valor: ");
	scanf("%d", p); // &x
	
	printf("X = %d, (endereco %d)\n", x, &x);
	
	p = x;
	
	printf("P = %d, (endereco %d)", p, &p);
	
	//*p = 0; // Pode travar!
	
	return 0;
}
