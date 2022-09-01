#include<stdio.h>
#include<stdlib.h>

int main(){
	unsigned char a = 0b1110000; // em decinal, 112
	printf("%d\n", a);
	unsigned char b = 0b11111000; // em decimal, 248
	printf("%d\n", b);
	unsigned char soma_char;
	unsigned short soma_short;
	
	soma_char = a + b;
	soma_short = a + b;
	
	printf("%u %u\n", soma_char, soma_short);
	return 0;
}

// O limite de char � 127. A soma excede, volta para o -128, at� chegar no valor final
// O limite de short � 32.767 (ap�s isso ele retorna ao negativo), portanto, nesse caso n�o causa overflow
