#include <stdio.h>
#include <limits.h> // A biblioteca limits.h contém a implantação dos limites dos tipos numéricos em C

int main() {
	
	int a = INT_MAX, b; // Maior inteiro
	
	b = INT_MAX + 1;
	printf("Maior inteiro: %d\nOverflow: %d", a, b);
	return 0;
}
