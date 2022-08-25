//Victor Silva Camargo , Vinícius Silva Camargo
//Ciência da Computação 2ºPeríodo Manhã
#include <stdio.h>

int main(){
  printf("Exercício1 \n \n");
  int a,b,c,d;
  printf("Digite o primeiro termo:");
  scanf("%d",&a);
  printf("Digite a razão: ");
  scanf("%d",&b);
  printf("Digite a quantidade de números: ");
  scanf("%d",&c);
  d=a+(c-1)*b;
  printf("O n-ésimi termo é: %d \n \n",d);
  
printf("Exercício 2 \n \n");

  int e;
  printf("Digite a placa do veículo: ");
  scanf("%1d", &e);
  printf("O estado do seu veículo é: %d \n",e);
  scanf("%1d", &e);
  printf("A cidade do seu veículo é: %d \n",e);
  scanf("%2d", &e);
  printf("Número do veículo em sua cidade é: %d", e);

return 0;
}