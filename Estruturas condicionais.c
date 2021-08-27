#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b;

  
  printf("Insira o valor de A \n");
  scanf("%d", &a);
  printf("Insira um valor para b \n");
  scanf("%d", &b);
  
  if(a<b){
    printf("%d e maior que %d",b,a);
  }
  else {
    printf("%d e menor que %d", b,a);
  }
  return 0;
}