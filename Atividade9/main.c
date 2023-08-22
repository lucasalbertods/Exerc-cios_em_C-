#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float media;

    printf("\n Digite o numero 1: ");
    scanf("%d", &num1);

    printf("\n Digite o numero 2: ");
    scanf("%d", &num2);

    media = (float)(num1 + num2)/2;

    printf("\n A media eh: %.2f" , media);

}
