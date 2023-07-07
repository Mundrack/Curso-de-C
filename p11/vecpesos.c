#include <stdio.h>

int main (int argc, char *argv[]) {
    float pesos[5];
    float suma=0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Introduce un peso para almacenarlo \n");
        scanf("%f", &pesos[i]);
        suma = suma + pesos[i];
    }
    float promedio = suma/ 5;
    int cont_mayor_igual =0;
    int cont_menos=0;
    for (int  i = 0; i < 5; i++)
    {
        if (pesos[i] >= promedio)
        {
            cont_mayor_igual ++;
        }
        else{
            cont_menos++;
        }
        
    }
    printf("El promedio de pesos es: %.2f", promedio);
    printf("Numero pesos mayores o iguales al promedio: %d, numero de pesos menores que el promedio: %d", cont_mayor_igual, cont_menos);  
    return 0;
}