#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	int dia, mes, ano, resto, div_quatro, chave_mes, chave_ano, dia_semana;
	
	setlocale(LC_ALL, "Portuguese");
	do {
		printf("Digite o dia: ");
		scanf("%d", &dia);
		if (dia<1 || dia>31) {
			printf("\nDia inválido.\nPor favor, digite um dia de 1 à 31.\n\n");
		}
	} while(dia<1 || dia>31);
	do {
		printf("Digite o mês: ");
		scanf("%d", &mes);
		if (mes<1 || mes>12) {
			printf("\nMês inválido.\nPor favor, digite um mês de 1 à 12.\n\n");
		}
	} while(mes<1 || mes>12);
	do {
		printf("Digite o ano: ");
		scanf("%d", &ano);
		if (ano<1800 || ano>2199) {
			printf("\nAno inválido.\nPor favor, digite um ano de 1800 à 2199.\n\n");
		}
	} while(ano<1800 || ano>2199);
	resto = ano % 100;
	div_quatro = resto / 4;
	if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
		switch(mes) {
			
			case 10:
				chave_mes = 1;
				break;
				
			case 3:
			case 11:
				chave_mes = 4;
				break;
				
			case 1:
			case 4:
			case 7:
				chave_mes = 0;
				break;
				
			case 5:
				chave_mes = 2;
				break;
				
			case 6:
				chave_mes = 5;
				break;
				
			case 2:
			case 8:
				chave_mes = 3;
				break;
				
			case 9:
			case 12:
				chave_mes = 6;
				break;
				
		}
	}
	else {
		switch(mes) {
			
			case 1:
			case 10:
				chave_mes = 1;
				break;
				
			case 2:
			case 3:
			case 11:
				chave_mes = 4;
				break;
				
			case 4:
			case 7:
				chave_mes = 0;
				break;
				
			case 5:
				chave_mes = 2;
				break;
				
			case 6:
				chave_mes = 5;
				break;
				
			case 8:
				chave_mes = 3;
				break;
				
			case 9:
			case 12:
				chave_mes = 6;
				break;
		}
	}
	switch(ano) {
		
		case 1800 ... 1899:
			chave_ano = 2;
			break;
			
		case 1900 ... 1999:
			chave_ano = 0;
			break;
			
		case 2000 ... 2099:
			chave_ano = 6;
			break;
			
		case 2100 ... 2199:
			chave_ano = 4;
			break;
			
	}
	dia_semana = (resto + div_quatro + chave_mes + chave_ano + dia) % 7;
	switch(dia_semana) {
		
		case 0:
			printf("\nSábado.");
			break;
			
		case 1:
			printf("\nDomingo.");
			break;
			
		case 2:
			printf("\n2ª Feira.");
			break;
			
		case 3:
			printf("\n3ª Feira.");
			break;
			
		case 4:
			printf("\n4ª Feira.");
			break;
			
		case 5:
			printf("\n5ª Feira.");
			break;
			
		case 6:
			printf("\n6ª Feira.");
			break;
	
	}
	return 0;
}
