#include <stdlib.h>
#include <stdio.h>

 #include <stdio.h>
int main()
{
    int vetor[100],i,n,valor,indice;

        printf("Digite um valor para ser encontrado no vetor: ");
        scanf("%d", &valor);

        for(indice=0 ; indice <= 5 ; indice++)
        {
            printf("Entre com o numero %d: ", indice+1);
            scanf("%d", &vetor[indice]);
        }
 
        for(indice=0 ; indice <= 5 ; indice++){ 
          if (vetor[indice] == valor){ 
               i = 1;}}
        if (i ==1){ 
          printf(" O elemento %d pertence ao conjunto",valor);}
        else{ 
          printf(" O elemento %d nao pertence ao conjunto",valor);}
        }