#include <stdio.h>
#include <locale.h>

int const tam = 5;

float mediaVetor(int *v){
    int soma = 0;
    float media;
    for (int i = 0; i < tam; i++){
        soma += v[i];
    }
    media = soma / tam;
    return media;
}

int main (void)
{
    int v[tam];
    setlocale(LC_ALL, "Portuguese");
    for (int i = 0; i < tam; i++){
        printf("Digite o %dº valor do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("Média dos números do vetor: %.2f", mediaVetor(v));
}
