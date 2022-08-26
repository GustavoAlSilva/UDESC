#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	unsigned char a = 0b01001;
	printf("%d\n", a);
	unsigned char b = 0b01000;
	printf("%d\n", b);
	unsigned char soma_char;
	unsigned short soma_short;
	soma_char = a + b;
	soma_short = a + b;
	printf("%u %u\n", soma_char, soma_short);
	return 0;
}
