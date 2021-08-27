#include <stdio.h>
#include <stdlib.h>

int main()
{
  int v1,v2,resultadoM;

  for (int i = 0; i<3; i++)
  { 
  printf("Digite o primeiro valor: \n");
  scanf("%d", &v1);
  printf("Digite o segundo valor: \n");
  scanf("%d", &v2);
  resultadoM = multiplicacao(v1,v2);
  printf("O resultado eh: %d \n",resultadoM);
  }
  return 0; 
}

int multiplicacao(int n1, int n2)
{
  int resultado;
  resultado = n1 * n2;
  return (resultado);
}