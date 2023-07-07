#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, contapro=0, contsus=0;
    float nota; 
    printf("Introduce el numero de alumnos");
    scanf("%d", &n); 
    for (int i = 1; i < n; i++)
    {
        printf("Introduce la nota del alumno %d \n", i);
        scanf("%f", &nota);

        if (nota >=5){
            contapro++; 
        }
        else{
            contsus++;
        }
    }
    printf("El numero de aprobados es %2.d y el numero de desaprobados es %2.d", contapro, contsus);

    return 0;
}