#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

  struct DadosPesos{
  float abaixo_do_peso; 
  float peso_ideal;
  float altura;
  float altura_ao_quadrado;
  float IMC_abaixo;
  float IMC_ideal;
  char nome[50];
                    };
struct DadosPesos pessoa;

  printf("\n---------- Descubra sua faixa de peso de acordo com sua altura -----------\n\n\n");
  
  printf("Seu nome: ......: ");
  fflush(stdin);
  fgets(pessoa.nome, 40, stdin);

  printf("Digite o valor da altura: ");
  scanf("%f", &pessoa.altura);

  printf("Digite o valor do IMC do peso abaixo do ideal: ");
  scanf("%f", &pessoa.IMC_abaixo);

  printf("Digite o valor do IMC do peso ideal máximo: ");
  scanf("%f", &pessoa.IMC_ideal);

  pessoa.altura_ao_quadrado = pow(pessoa.altura,2);

  pessoa.abaixo_do_peso = pessoa.altura_ao_quadrado*pessoa.IMC_abaixo;

  pessoa.peso_ideal = pessoa.altura_ao_quadrado*pessoa.IMC_ideal;

  printf("%s Sua faixa de peso é: abaixo do peso: %.1f peso ideal: %.1f",pessoa.nome,pessoa.abaixo_do_peso,pessoa.peso_ideal);
  
  return 0;
}


  

