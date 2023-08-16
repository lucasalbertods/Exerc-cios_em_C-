#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;
    printf("\n Digite a Nota 1: ");
    scanf("%f", &n1);

     printf("\n Digite a Nota 2: ");
    scanf("%f", &n2);

     printf("\n Digite a Nota 3: ");
    scanf("%f", &n3);

     printf("\n Digite a Nota 4: ");
    scanf("%f", &n4);

    media = ((n1*1)+(n2*2)+(n3*3)+(n4*4))/10;

    printf("\n A media ponderada e: %.1f", media);

}
