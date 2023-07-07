#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    float base,altura, area;
    printf("Ingrese la medida de la base del rectangulo:\n");
    scanf("%f", &base);

    printf("Ingrese la medida de la altura del rectangulo:\n");
    scanf("%f", &altura);

    area=base*altura;
    printf("Con los siguientes datos de base: %2.f, y los siguientes de altura: %2.f, su area es de %2.f \n", base, altura, area);

    system("pause");    
    return 0;
}