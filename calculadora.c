#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int a, b, c, resul, calc;
    //calculo inicial.
    printf("------Calculadora------\n");    
    printf("Digite os valores\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    //Menu da calculadora
    printf("1 Somar\n");
    printf("2 Subtrair\n");
    printf("3 Dividir\n");
    printf("4 Multiplicar\n");
    printf("\nEscolha a operação: ");
    scanf("%d", &calc);
    //Resposta do calculo.
  switch (calc)
  {
    case 1:
      printf("resultado %d\n", resul= a+b+c);
      break;
    case 2:
      printf("resultado %d\n", resul= a-b-c);
      break;
    case 3:
      printf("resultado %d\n", resul= a/b/c);
      break;
    case 4:
      printf("resultado %d\n", resul= a*b*c);
      break;
  //Opção invalida.
  default:
    printf("Opição invalida\n");
      break;
  }

    
 //Fim da operação.
    system("pause");
    system("cls");
}    
