#include<stdio.h>
#include<stdlib.h>

int main(){
	unsigned int a = 0b11111010101011100010101111111101; // em decinal, 4.205.718.525
	printf("%u\n", a);
	unsigned int b = 0b1111101111110111111101011111111; // em decimal, 2.113.665.791
	printf("%u\n", b);
	unsigned int soma_uint;
	
	soma_uint = a + b;
	
	printf("%u", soma_uint);
	return 0;
}

// O limite de unsigned int é 4.294.967.295 (possui apenas valores positivos). A soma excede, volta para o 0, e percorre novamente até chegar no valor final (2.024.417.020)
