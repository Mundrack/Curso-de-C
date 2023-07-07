#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{
    char c1,c2,c3;
    printf("Ingrese 3 caracteres: \n");
    scanf("%c %c %c", &c1, &c2, &c3);
    /*-IMPRESIÓN-------*/

    printf("%c-%c-%c \n", c1,c2,c3);
    system("pause");
    return 0;
}