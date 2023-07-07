#include <stdio.h>

int main (int argc, char *argv[]) {
    int informacion [3][4]={{1,120,150,220}, {2,130,160,230},{3,100,120,200}};
    int sumatmpb=0, sumatmpm=0, sumatmpa=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (j==1)
            {
                sumatmpb=sumatmpb+informacion[i][j];
            }
            if (j==2)
            {
                sumatmpm=sumatmpm+informacion[i][j];
            }
            if (j==3)
            {
                sumatmpa=sumatmpa+informacion[i][j];
            }
            
        }
        
    }
    float promediotmpb=sumatmpb/3;
    float promediotmpm=sumatmpm/3;
    float promediotmpa=sumatmpa/3;
    printf("Promedio temporada baja: %.2f \n Promedio temporada media: %.2f \n Promedio temporada alta: %.2f", promediotmpb, promediotmpm, promediotmpa);
    
    return 0;
}