/*
 * Este programa fue hecho para mostrar los elementos unicos de un string
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/15/2018
 *
 */
#include <stdio.h>

int main(void) {
    int size;
    int i;
    int j;
    int count;

//Obteniendo la cantidad de numeros que el usuario va a usar
    printf ("How many numbers do you want to input? \n");
    scanf ("%i", &size);

    int arr [size];
    int arr2 [size];
//Obteniendo los numeros del usuario
    for ( i=0; i < size; i++) {
        printf ("Element %i:", i+1);
        scanf ("%i", &arr[i]);
        arr2 [i]= -1;
    }
//Estableciendo cuales son los numeros que no se repiten
    for (i=0; i<size; i++)
    {
        count = 1;
        for (j=i+1; j<size; j++)
        {
            if (arr[i] == arr[j])
            {
                count ++;
                arr2 [j] = 0;
            }
        }
        if (arr2[i]!=0)
        {
            arr2 [i] = count;
        }
    }
    //Mostrando los elementos que no se repiten
    printf ("Unique elements in the array are: \n");
    for (i=0; i<size; i++)
    {
        if (arr2 [i]==1)
        {
            printf ("%i \n",arr[i]);
        }
    }
    return 0;
}