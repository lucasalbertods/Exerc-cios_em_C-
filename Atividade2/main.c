#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A, B, AUX;
   printf("\n Informe A: ");
   scanf("%d", &A);

   printf("\n Informe B: ");
   scanf("%d", &B);

   AUX = A;
   A=B;
   B=AUX;

   printf("\n\n Agora A tem %d e B tem %d", A, B);
}
