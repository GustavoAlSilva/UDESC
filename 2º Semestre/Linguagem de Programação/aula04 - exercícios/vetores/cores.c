#include <stdio.h>
#include <locale.h>

int main (void)
{
    char cores[] = {{"azul"}, {"amarelo"}, {"vermelho"}, {"verde"}, {"marrom"}, {"rosa"}};
    setlocale(LC_ALL, "Portuguese");
    printf("%c", cores[1]);
}
