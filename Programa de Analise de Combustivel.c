#include <stdio.h>
#include <stdlib.h>

//Funcao de calculo e comparacao

int Calculo(float vGas, float vEta)
{ 
  //Preco Gasolina * 0.7 = Preco Max Etanol
if ((vGas * 0.7) < vEta)
  {
    //Compensa abastecer com gasolina
    return 0;
  }
else if((vGas * 0.7) > vEta)
  {
    //Compensa abastecer com etanol
    return 1;
  }
else {
    // Valores equivalentes

    return 2;

  }
system("pause");
}
int main()
{
printf("##### EcoCar ##### \n");

float precoGasolina, precoEtanol;

printf("Qual o preco da gasolina? \n");
scanf("%f", &precoGasolina);

printf("Qual o preco do Etanol? \n");
scanf("%f", &precoEtanol);

int resultado = Calculo(precoGasolina, precoEtanol);
if (resultado == 0){
  printf("Compensa abastecer com Gasolina\n");
}
else if(resultado == 1){
  printf("Compensa abastecer com Etanol\n");
}
else if (resultado ==2){
  printf("Tanto faz");
}
return 0;
}

