#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "LinkedList.h"
int main()
{
    LinkedList* listaVehiculos;
    listaVehiculos=ll_newLinkedList();

    int opcion;
    while(opcion!=5){
   menu();
   getInt(&opcion,"\nDigite la opcion deseada : ","\nOpcion No valida",1,5);
    switch(opcion){
case 1:

    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;


    }


   }
    return 0;
}
