#include <stdio.h>
#include <string.h>
#include <locale.h>

void imprimir(char *linha) {
	int tamanho;
    tamanho = strlen(linha);
	int i;
	for (i = 0; i < tamanho; i++){
		if (isalpha(linha[i])  !=  0  ) { 
		printf ( "%c" , linha[i]);
	    }
	}
}

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    char linha[100];
    printf("Digite uma string com, no máximo, 100 caracteres: ", linha);
    scanf(" %s", &linha);
    imprimir(linha);
}
