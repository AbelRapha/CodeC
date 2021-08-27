#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[20];
  int idade;
  printf("Escreva o seu nome: \n");
  scanf("%s", &nome);
  printf("Quantos anos tem? \n");
  scanf("%i",&idade);
  printf("Prazer %s. Voce tem %i anos \n", nome, idade);

  return 0;
}