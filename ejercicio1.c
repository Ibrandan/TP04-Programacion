#include <stdio.h>

int main(void){
    char oracion;
    int cantVocales, contA, contE, contO;
    cantVocales = 0;
    contA = 0;
    contE = 0;
    contO = 0;    

    puts("Ingrese una oracion terminada en un punto");
    scanf("%c", &oracion);
    while(oracion != '.')
    {
        switch (oracion)
        {
            case 'A':
                cantVocales++;
                contA++;
                break;
            case 'a':
                cantVocales++;
                contA++;
                break;
            case 'E':
                cantVocales++;
                contE++;
                break;
            case 'e':
                cantVocales++;
                contE++;
                break;
            case 'O':
                cantVocales++;
                contO++;
                break;
            case 'o':
                cantVocales++;
                contO++;
                break;
        }
        scanf("%c", &oracion);
    }
    printf("Hay %d vocales abiertas \n", cantVocales);
    printf("Hay %d A \n", contA);
    printf("Hay %d E \n", contE);
    printf("Hay %d O", contO);
    return 0;
}