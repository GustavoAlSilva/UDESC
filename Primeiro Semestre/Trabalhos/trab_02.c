// Aluno: Gustavo Almeida da Silva
// Primeiro semestre de TADS
// 29/06/2022

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opcao;
    printf("Digite:\n\n[1] - Calcular MMC e MDC\n[2] - Sair\n");
    scanf("%d", &opcao);
    while (opcao == 1) {
        int a, b, mmc = 1, mdc = 1, div = 2, valido;
        do {
            printf("\nDigite o valor de a: ");
            scanf("%d", &a);
            printf("Digite o valor de b: ");
            scanf("%d", &b);
			if (a > 1 && b > 0) {
				valido = 1;
			} else {
				valido = 0;
			}
        } while (!valido);
        while (a != 1 || b != 1) {
        	int contador = 0;
            if (a % div == 0) {
                a /= div;
                contador++;
            }
            if (b % div == 0) {
                b /= div;
                contador++;
            }
            switch (contador) {
            	
                case 0:
					div++;
					break;
					
                case 1:
					mmc *= div;
					break;
					
                case 2:
					mmc *= div;
					mdc *= div;
            }
        }
        printf("\nMMC: %d\nMDC: %d\n", mmc, mdc);
        printf("\nNovamente, digite:\n\n[1] - Calcular MMC e MDC\n[2] - Sair\n");
        scanf("%d", &opcao);
    }
    printf("Obrigado por participar. Volte sempre!");
    return 0;
}
