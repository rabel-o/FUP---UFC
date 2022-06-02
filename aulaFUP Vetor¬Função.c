#include <stdio.h>
#include <stdlib.h>

void incializaVetor (int vetor[], int tam)
{
    int i = 0;

    while (i < tam)
    {
        printf("digite um elemento para  o vetor [%d]", i);
        scanf("%d", &vetor[i]);

        i++;
    }
}

void imprimeVetor (int vetor[], int tam)
{
    int i = 0;
    printf("[");
    while (i < tam)
    {
        printf("%d ", vetor[i]);

        i++;
    }
    printf("] \n");
}

int presente(int vetor[], int tamanho, int num)
{
    int res = 0;
    int i = 0;

    while (i < tamanho)
    {
        if (vetor[i] == num)
        {
            res = 1;
            break;
        }

        i++;
    }

    return res;
}

void imprimeIntersecao (int vetor1[], int vetor2[], int tam)
{
    int vetorIntersecao [tam];
    int iIntersecao = 0;

    printf("intersecao: ");
    int i = 0;

    while (i < tam)
    {
        int numero = vetor2[i];
        int res = presente(vetor1, tam, numero);

        if (res == 1)
        {
            int res2 = presente(vetorIntersecao, iIntersecao, vetor2 [i]);

                if (res2 == 0)
                {
                    vetorIntersecao[iIntersecao] = vetor2 [i];
                    iIntersecao++;
                }

        }

        i++;
    }
     imprimeVetor(vetorIntersecao, iIntersecao);
}


void main()
{
    int tam;
    printf("insira o tamanho do vetor: \n");
    scanf("%d", &tam);

    int vetor1[tam];
    int vetor2[tam];

    incializaVetor(vetor1, tam);
    imprimeVetor(vetor1, tam);

    incializaVetor(vetor2, tam);
    imprimeVetor(vetor2, tam);

    imprimeIntersecao(vetor1, vetor2, tam);

}
