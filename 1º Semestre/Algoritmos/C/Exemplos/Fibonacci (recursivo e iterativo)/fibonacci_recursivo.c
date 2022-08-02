#include <stdio.h>
#include <stdlib.h>

long long int fib( int n );
long long int fibi( int n );

int main(int argc, char *argv[]) {
	int k, i;
	printf("Digite a quantidade de termos: ");
	scanf("%d", &k);
	for( i = 1 ; i <= k ; i++ )
		printf("%d : %lld\n", i, fibi( i ) );
	
	return 0;
}

long long int fib( int n ){
	if( n == 1 || n == 2 )
		return 1;

	return fib( n-1 ) + fib( n-2 );
}

long long int fibi( int n ){
	if( n == 1 || n == 2 )
		return 1;
	
	long long a = 1, b = 1, atual;
	int i;
	for( i = 3 ; i <= n ; i++ ){
		atual = a + b;
		a = b;
		b = atual;
	}
	return atual;
}


