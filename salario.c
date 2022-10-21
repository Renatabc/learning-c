#include <stdio.h>

//código para aumento de salário em 10%

main(){
  float salario;
  float newSalario;

  printf("Digite seu salário atual:");
  scanf("%f", &salario);

  newSalario = salario * 1.1;

  printf("Seu salário passa a ser %f", newSalario);
}