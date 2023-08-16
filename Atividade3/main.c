#include <stdio.h>
#include <stdlib.h>

int main()
{
   float valor_final, valor_da_conta;

   printf("Informe o valor da conta");
   scanf("%f", &valor_da_conta);

   valor_final = (valor_da_conta*1.10);

   printf("\n\n\n O valor da conta final e: %.2f", valor_final);

}
