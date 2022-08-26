#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	unsigned char a = 0b01110000;
	printf("%d\n", a);
	unsigned char b = 0b011111000;
	printf("%d\n", b);
	unsigned char soma_char; // Overflow: passa de 127, volta para o -128, até chegar no valor final
	unsigned short soma_short; // Vai até 32.767 antes de voltar para o negativo, portanto, nesse caso não há overflow
	soma_char = a + b;
	soma_short = a + b;
	printf("%u %u\n", soma_char, soma_short);
	return 0;
}
