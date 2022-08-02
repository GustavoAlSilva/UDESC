#include <stdio.h>
#include <stdlib.h>

#define DX 0.0001

double func( double x );

int main(int argc, char *argv[]) {
	double a, b, i;
	printf("Digite um valor: ");
	scanf("%lf", &a);
	printf("Digite outro valor: ");
	scanf("%lf", &b);
	
	double soma = 0;
	
	for( i = a; i < b ; i+= DX ){
		double area = func( i ) * DX;
		soma = soma + area;
	}
	
	printf("Soma: %.5lf\n", soma);
	
	return 0;
}

double func( double x ){
	return x*x;
}


