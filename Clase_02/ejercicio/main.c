/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un número tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los máximos y mínimos
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int maximo;
    int minimo;
    int promedio;
    int i;
    int numeros;

    printf("Ingrese un Numero: ");
    scanf("%d", &numeros);
    maximo=numeros;
    minimo=numeros;
    promedio=numeros;

    for(i=0;i<4;i++)
    {
        printf("Ingrese un Numero: ");
        scanf("%d", &numeros);
        promedio=promedio+numeros;

        if(numeros>maximo)
        {
            maximo=numeros;
        }else{
        if(numeros<minimo)
        {
            minimo=numeros;
        }
        }
    }

    printf("El maximo es: %d\n",maximo);
    printf("El minimo es: %d\n",minimo);
    printf("El promedio es: %f\n",((float)promedio/5));
    return 0;


}
