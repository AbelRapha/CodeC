#include <stdlib.h>
#include <stdio.h>

int main(){
  int n1, n2, elementos, fibonnaci, i;
  printf("Informe a quantidade de elementos..:\n");
  scanf("%d", &elementos);

  n1 = 0;
  n2 = 1;

  //Laço de repetição
  for (i = 1; i<= elementos; i++){
    if (i == 1){
      printf(" %d",n1);
      
    } else if (i==2){
      printf("- %d", n2);

    } else{
      fibonnaci = n1+n2;
      n1 = n2; // Atualiza os valores das variaveis de inicio
      n2 = fibonnaci;
      printf("- %d",fibonnaci);
      if (i == elementos){
        printf("- %d\n", fibonnaci);
      }

    }

  }  
  return 0;
}