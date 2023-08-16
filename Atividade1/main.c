#include <stdio.h>
#include <stdlib.h>

int main()
{
   float valor_final, valor, taxa;
   int tempo; // em dias

   printf("Informe o valor da prestacao: ");
   scanf("%f", &valor);

   printf("Informe o taxa de juros:");
   scanf("%f", &taxa);

   printf("Informe o tempo em dias");
   scanf("%d", &tempo);

   valor_final = valor + (valor * (taxa/100) * tempo);

   printf("\n\n\n A prestacao a ser paga é: %f", valor_final);

}

