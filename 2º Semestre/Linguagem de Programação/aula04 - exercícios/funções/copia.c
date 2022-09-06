#include <stdio.h>
#include <locale.h>

int const tam = 5;

int copiaVetor(int *v){
    int vetor[tam];
    for (int i = 0; i < tam; i++){
        vetor[i] = v[i];
    }
    for (int i = 0; i < tam; i++){
        printf("\nVetorCópia[%d]: %d", i, vetor[i]);
    }
}

int main (void)
{
    int v[tam];
    setlocale(LC_ALL, "Portuguese");
    for (int i = 0; i < tam; i++){
        printf("Digite o %dº valor do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
    copiaVetor(v);
}
