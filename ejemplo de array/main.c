#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 6

void iniArray(int array[], int cantidad);
void mostrarArray(int array[], int cantidad);
int calcularMax(int array[]);
void cargaSecuencialDeArray(int array[], int cantidad, char mensaje[]);
float calcularPromedio(int array[], int cantidad);
void ordenBurbuja(int array[], int cantidad);

int mayor;
float total = 0;
float promedio;

int main()
{

    int listadoDeEdades[6];

    iniArray(listadoDeEdades, 6);
    // cargaSecuencialDeArray(listadoDeEdades, 10, "Ingrese su edad");
    listadoDeEdades[0] = 33;
    listadoDeEdades[1] = 11;
    listadoDeEdades[2] = 44;
    listadoDeEdades[3] = 55;
    listadoDeEdades[4] = 01;
    listadoDeEdades[5] = -2;
    mayor = calcularMax(listadoDeEdades);
    promedio = calcularPromedio(listadoDeEdades, 6);
    mostrarArray(listadoDeEdades, 6);
    ordenBurbuja(listadoDeEdades, 6);
    mostrarArray(listadoDeEdades, 6);



    return 0;
}

void mostrarArray(int array[], int cantidad)
{
    int i = 0;

    for (i = 0; i < cantidad; i++)
    {
        printf("%d \n", array[i]);
    }

    printf("\n El máximo es: %d", mayor);
    printf("\n El promedio es: %f\n", promedio);
}

int calcularMax(int array[])
{
    int i = 0;

    for (i = 0; i < CANTIDAD; i++)
    {
        if (i == 0 || array[i] > mayor)
        {
           mayor = array[i];
        }
    }
    return mayor;
}

void iniArray(int array[], int cantidad)
{
    int i = 0;

    for (i = 0; i < cantidad; i++)
    {
        array[i] = i;
    }
}

void cargaSecuencialDeArray(int array[], int cantidad, char mensaje[])
{
    int i = 0;

    for (i = 0;i < cantidad; i++)
    {
        printf("%s", mensaje);
        scanf("%d", &array[i]);
    }
}

float calcularPromedio(int array[], int cantidad)
{
    int i = 0;

    for (i = 0; i < cantidad; i++)
    {
        total += array[i];
    }
    promedio = total / cantidad;
    return promedio;
}


void ordenBurbuja(int array[], int cantidad)
{
    int i = 0;
    int j = 0;

    int aux;
    for (i = 0; i < cantidad; i++)
    {
        for (j = i + 1; j < cantidad; j++)
        {
            if (array[i] > array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}
