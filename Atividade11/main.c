#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, altura, volume, PI=3.1415;

    printf("\n Digite o raio da lata: ");
    scanf("%f", &raio);

    printf("\n Digite a altura da lata: ");
    scanf("%f", &altura);

    volume = PI * (raio*raio)*altura;

    printf("\n O volume da lata eh: %.2f", volume);
}
