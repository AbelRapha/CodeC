#include <stdlib.h>
#include <stdio.h>

 #include <stdio.h>
int main()
{
    int vetor[100],vetor2[100],i,n,valor,indice, auxiliar;

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

        /// Copiando os valores do vetor para o vetor2
        for(indice = 0; indice<=5; indice++){
          printf("\n Entre com os numeros do primeiro vetor %d: ", indice+1);
          scanf("%d", &vetor2[indice]);
        }  
        for(int x = 0; x<=5; x++){
          for(int y = x; y<=5;y++ ){
            if(vetor2[x] > vetor2[y]){
              auxiliar = vetor2[x];
              vetor2[x] =  vetor2[y];
              vetor2[y] = auxiliar;
            }
          }
        }
        printf("Ordenando os elementos do vetor 2 em ordem crescente fica: \n");
        for(int i=0; i<= 5; i++){
          printf("numero %d é: %d \n", i+1, vetor2[i]);
        }
}