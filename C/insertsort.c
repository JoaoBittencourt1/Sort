#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5 


void insertSort(int vetorr[],int Numero){

int Controlador, chave, NumerosVetor;

for (Controlador = 0;Controlador < Numero; Controlador++){
    chave =vetorr[Controlador];
    NumerosVetor = Controlador - 1;

    while (NumerosVetor >= 0 && vetorr[NumerosVetor] > chave){
        vetorr[NumerosVetor + 1] = vetorr[NumerosVetor];
        NumerosVetor = NumerosVetor - 1;
    }
    vetorr[NumerosVetor + 1] = chave;
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

    printf ("sequencia dsem o selectionSort:\n");
    printvetor(vetor, TAMANHO);

    insertSort(vetor, TAMANHO);

    printf ("sequencia depois do selectionSort:\n");
    printvetor(vetor,TAMANHO);

return 0;
}