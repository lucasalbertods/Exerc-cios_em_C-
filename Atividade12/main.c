#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    float  altura, peso, densidade;

    printf("\n Digite o seu nome: ");
    scanf("%s", &nome);

    printf("\n Informe sua altura em metros: ");
    scanf("%f", &altura);

    printf("\n informe seu peso em KG: ");
    scanf("%f", &peso);

    densidade = peso /(altura*altura);

    printf("\n %s a sua densidade corporal eh %.1f ", nome, densidade);

}
