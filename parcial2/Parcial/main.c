#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "LinkedList.h"
#include "Controller.h"
#include "dominio.h"
int main()
{
    LinkedList* listaVehiculos=ll_newLinkedList();
    LinkedList* listaAutos=ll_newLinkedList();
    LinkedList* listaMotos=ll_newLinkedList();


    int opcion;
    char nombreArchivo[31];
    while(opcion!=5){
   menu();
   getInt(&opcion,"\nDigite la opcion deseada : ","\nOpcion No valida",1,5);
    switch(opcion){
case 1:
    if(ll_len(listaVehiculos)==0){
        getString(nombreArchivo,"\nintrodusca el nombre del archivo con su devida extencion ejemplo:\' archivo.csv\' :","\nfuera de rango",5,31);
                if(controller_loadFromText(nombreArchivo,listaVehiculos)==1){
                        controller_printList(listaVehiculos);
                    printf("\ncarga de Dominios exitosa \n\n");
                    printf("%d",ll_len(listaVehiculos));
                    }
                    else{
                        printf("\nError en carga\n\n");
                    }}else{printf("\n\nArchivo previamete cargado\n");

                        }
    break;
case 2:
     if(ll_len(listaVehiculos)!=0){
     controller_mapDominio(listaVehiculos);
     controller_printList(listaVehiculos);
     }else{printf("\nDeve cargar el archivo antes.\n");
     printf("\n\n\n");
        system("pause");
        system("cls");}
    break;
case 3:
   if(ll_len(listaVehiculos)!=0){
        listaAutos=ll_filter(listaVehiculos,dominio_filtrarAutos);
        listaMotos=ll_filter(listaVehiculos,dominio_filtrarMotos);
     controller_printList(listaAutos);
     controller_printList(listaMotos);
     }else{printf("\nDeve cargar el archivo antes.\n");
     printf("\n\n\n");
        system("pause");
        system("cls");

     }
    break;
case 4:
   if(ll_len(listaVehiculos)!=0){
       if(controller_saveAsText("auto.csv" , listaAutos) && controller_saveAsText("moto.csv" , listaMotos)){
        printf("\nauto.csv y moto.csv Guardados Exitosamente\n");
        printf("\n\n\n");
        system("pause");
        system("cls");
       }

     }else{printf("\nDeve cargar el archivo antes.\n");
     printf("\n\n\n");
        system("pause");
        system("cls");

     }
    break;


    }


   }
    return 0;
}
