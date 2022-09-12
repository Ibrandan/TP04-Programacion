#include <stdio.h>

int main(void){
    char oracion, anterior;
    int espacios = 0, palabrasVocal = 0, numeros = 0;

    puts("Ingrese una oracion terminada en un punto");
    scanf("%c", &oracion);
    while(oracion != '.')
    {
        if(oracion == 32)
        {
            espacios++;
        }
        if (anterior == 32 && (oracion == 'A' || oracion == 'E' || oracion == 'I' || oracion == 'O' || oracion == 'U'))
        {
            palabrasVocal++;
        }
        if(oracion > 47 && oracion < 58)
        {
            numeros++;
        }
        anterior = oracion;
        scanf("%c", &oracion);
    }
    printf("Hay %d espacios en blanco \n", espacios);
    printf("Palabras que comienzan en vocal %d \n", palabrasVocal);
    printf("Hay %d numeros \n", numeros);

    return 0;
}