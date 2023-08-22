#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area, PI=3.1415, circunferencia, raio, diametro;
    printf("\n Digite o raio:");
    scanf("%f", &raio);
    diametro = raio*2;
    circunferencia = diametro * PI;
    area = PI * (raio*raio);
    printf("\n O diametro eh: %.2f", diametro);
    printf("\n A circuferencia eh: %.2f", circunferencia);
    printf("\n A area eh: %.2f", area);
}
