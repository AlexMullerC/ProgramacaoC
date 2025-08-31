#include <stdio.h>

int main()
{

    int torre = 1, bispo, rainha = 1;

    printf("A torre está se movimentando nas seguintes direções:\n");

    while (torre <= 5)
    {
        printf("direita\n");
        torre++;
    }

    printf("O Bispo está se movimentando nas seguintes direções:\n");

    for (bispo = 1; bispo <= 5; bispo++)
    {
        printf("Cima + Direita\n");
    }

    printf("A rainha está se movimentando nas seguintes direções:\n");

    do
    {
        printf("esquerda\n");
        rainha++;

    } while (rainha <= 8);

    return 0;
}