/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco n�meros e imprima por pantalla el
*    promedio, el m�ximo y el m�nimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un n�mero tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los m�ximos y m�nimos
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio D�vila
* Revisi�n: Ernesto Gigliotti
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
