#include <stdio.h> //#include é responsável por incluir bibliotecas ao programa
//stdio.h é responsável pela saída de mensagens no monitor e entrada de dados

main(){

  float A;
  float B;
  float media;
  
  printf("Digite o valor de A:");
  scanf("%f", &A);

  printf("Digite o valor de B");
  scanf("%f", &B);

  media = (A + B) / 2;

  printf("A média final é %f", media);
}