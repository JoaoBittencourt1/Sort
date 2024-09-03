#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

void bubblesort(int vetorr[], int ControladorGeral)
{
    int temporario;
    int troca;
    for (int ControladorExterno = 0; ControladorExterno < ControladorGeral - 1; ControladorExterno++)
    {
        troca = 0;
        for (int NumerosVetor = 0; NumerosVetor < ControladorGeral - ControladorExterno - 1; NumerosVetor++)
        {
            if (vetorr[NumerosVetor] > vetorr[NumerosVetor + 1])
            {
                temporario = vetorr[NumerosVetor];
                vetorr[NumerosVetor] = vetorr[NumerosVetor + 1];
                vetorr[NumerosVetor + 1] = temporario;
                troca = 1;
            }
        }
        if (troca == 0)
        {
            break;
        }
    }
}
void printvetor(int vetorr[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetorr[i]);
    }
    printf("\n");
}

int main()
{
    int vetor[TAMANHO] = {51, 28, 62, 71, 17};

    printf("sequencia incial do vetor:\n");
    printvetor(vetor, TAMANHO);

    bubblesort(vetor, TAMANHO);

    printf("a sequencia do vetor pos bubblesort e:\n");
    printvetor(vetor, TAMANHO);

    return 0;
}