#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, antecessor, sucessor;

    printf("\n Digite um numero:");
    scanf("%d", &num);

    antecessor = num-1;

    sucessor = num+1;

    printf("\n O antecessor e: %d\n O sucessor e: %d\n\n", antecessor, sucessor);

    getch();

}
