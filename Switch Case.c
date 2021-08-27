#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num;

 printf("Digite um dia da semana: \n");
 scanf("%d", &num);

 switch(num){ //utilizado para economizar os if, else if e else
   case 1:
    printf("Domingo");
    break;
   case 2:
    printf("Segunda");
    break;
   case 3:
    printf("Terca");
    break;
   case 4:
    printf("Quarta");
    break;
   case 5:
    printf("quinta");
    break;
   case 6:
    printf("Sexta");
    break;
   case 7:
    printf("Sabado");
    break;
   default:
    printf("Numero invalido");
    break;
 }
  return 0;
}