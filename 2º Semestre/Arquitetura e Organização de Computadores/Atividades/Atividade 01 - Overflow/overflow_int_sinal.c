#include <stdio.h>
#include <limits.h> // A biblioteca limits.h cont�m a implanta��o dos limites dos tipos num�ricos em C

int main() {
	
	int a = INT_MAX, b; // Maior inteiro
	
	b = INT_MAX + 1;
	printf("Maior inteiro: %d\nOverflow: %d", a, b);
	return 0;
}
