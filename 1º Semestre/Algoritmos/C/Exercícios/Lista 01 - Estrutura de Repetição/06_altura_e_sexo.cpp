#include <stdio.h>
#include <locale.h>

int main (void)
{
    int n, altura, soma = 0, maior = 0, qtd = 0;
    char sexo;
    float media;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o número de pessoas: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Digite a altura: ");
        scanf("%d", &altura);
        printf("Digite o sexo:\n\n[M] - Masculino\n[F] - Feminino\n\n");
        scanf("%s", &sexo); // usar %s ao invés de %c para o scanf desconsiderar o Enter
        if (sexo == 'm' || sexo == 'M') {
            if (altura > maior) {
                maior = altura;
            }
        }
		else if (sexo == 'f' || sexo == 'F') {
            soma += altura;
            qtd++;
        }
		else {
            printf("Dados inválidos\n");
        }
    }
    media = soma / qtd;
    printf("Maior altura entre os homens: %d centímetros\n", maior);
    printf("Média de altura das mulheres: %f.2", media);
    printf("%d", soma);
}
