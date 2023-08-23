#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diagonal_maior, diagonal_menor, area;

    printf("\n Digite o valor da diagonal menor: ");
    scanf("%f", &diagonal_menor);

    printf("\n Digite o valor da diagonal maior: ");
    scanf("%f", &diagonal_maior);

    area = (diagonal_menor * diagonal_maior)/2;

    printf("\n A diagonal menor digitada eh: %.2f", diagonal_menor);

    printf("\n A diagonal maior digitada eh: %.2f", diagonal_maior);

    printf("\n A area calculada eh: %.2f", area);

}
