#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[3],cont;

    vetor[0] = 5;
    vetor[1] = 15;
    vetor[2] = 45;

    printf("POSI��O 0 : %d",vetor[0]);
    printf("\n");
    printf("POSI��O 1 : %d",vetor[1]);
    printf("\n");
    printf("POSI��O 2 : %d",vetor[2]);
    printf("\n");
    printf("\n");

    for(cont = 0;cont < 3;cont++){
        printf("POSI��O %d:%d \n",cont,vetor[cont]);
    }

    system("pause");

    }
