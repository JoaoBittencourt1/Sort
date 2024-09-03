#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5 

void trocar(int *primeironumero, int *segundonumero)
{
    int temporario = *primeironumero;
    *primeironumero = *segundonumero;
    *segundonumero = temporario;
}

void selectionSort(int vetorr[], int tamanho){
    int Controlador,NumeroVetor, MenorIdx;

    for(Controlador = 0; Controlador < tamanho - 1; Controlador++){
        MenorIdx = Controlador;
        for (NumeroVetor = Controlador + 1; NumeroVetor < tamanho; NumeroVetor++){
            if (vetorr[NumeroVetor] < vetorr[MenorIdx]){
                MenorIdx = NumeroVetor;
            }
        }

trocar(&vetorr[MenorIdx], &vetorr[Controlador]);
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

    selectionSort(vetor, TAMANHO);

    printf ("sequencia depois do selectionSort:\n");
    printvetor(vetor,TAMANHO);

return 0;
}