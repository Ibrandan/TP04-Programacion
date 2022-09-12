#include <stdio.h>

int main(void){
    int num1, num2, rango = 0, pares = 0, suma = 0, mayor, menor; 

    puts("Ingrese dos numeros enteros separados por espacio en blanco");
    scanf("%d %d", num1,num2);
    
    if(num1>num2){
        mayor = num1;
        menor = num2;
    }

    else{
        mayor = num1;
        menor = num2;
    }

    if(menor != mayor) {
        for (int i = menor; i <= mayor; i++)
        {
            rango++;
            if (menor % 2 == 0)
            {
                pares++;            
            }
            else {
                suma = suma + menor;
            }
        }
        printf("El rango entre los numeros es de %d \n", rango);
        printf("Hay %d pares \n", pares);
        printf("La suma de los impares es: %d", suma);
    }
    else {
        puts("Los numeros son iguales");
    }

    return 0;
}