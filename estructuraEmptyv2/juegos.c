#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "juegos.h"

void menu(eJue cart[],int MAX){
int opcion=0;
   while(opcion!=6){
        printf("\n1)Alta juego nuevo\n2)BAJA\n3)Modificacion\n4)Lista de juegos\n6)Salir");
        scanf("%d",&opcion);
        system("cls");
    switch (opcion){
case 1:
    carga(cart,MAX);
    break;
case 2:
    baja(cart,MAX);
    break;
case 3:
    modifi(cart,MAX);
    break;
case 4:
    //ordenAnio(cart,MAX);
    ordenNombre(cart, MAX);
    mostarTodo(cart,MAX);
    break;

    }

   }
}



void carga(eJue cart[], int m )
{
    int i;
   for(i=0; i<m; i++)
    {

        if(cart[i].isEmpty==1){
         printf("nombre JUEGO : ");
         fflush(stdin);
         scanf("%s", cart[i].nomJue);


        cart[i].idJue=generarId(cart,m);

         printf("\nAnio de Release: ");
         scanf("%d", &cart[i].fechaRe.anio);

         printf("\nMES de Release: ");
         scanf("%d", &cart[i].fechaRe.mes);

         printf("\nAnio de Release: ");
         scanf("%d", &cart[i].fechaRe.dia);

         printf("\nPrecio: ");
         scanf("%f", &cart[i].precioJue);

         cart[i].isEmpty=0;
         system("cls");
            break;}
    }
}
   void mostarTodo(eJue cart[],int m)   {
    int i;
    for(i=0;i<m;i++){
            if(cart[i].isEmpty==0){
    mostrarUno(cart[i]);
    }}}

void mostrarUno(eJue cart){
    printf("\n%s\t%d\t%.2f\t\t%d\t%d\t%d\t%d",cart.nomJue,cart.idJue,cart.precioJue,cart.fechaRe.anio,cart.fechaRe.mes,cart.fechaRe.dia,cart.isEmpty);
    }

void inizisEmpty(eJue cart[],int m){
    int i;
        for(i=0;i<m;i++){


    cart[i].isEmpty=1;

    }
}
void baja(eJue cart[],int m){
        int i,auxBaja;
        char check;
        printf("introdusca La Id del juego a dar de baja");
        scanf("%d",&auxBaja);
        for(i=0;i<m;i++){
            if(auxBaja==cart[i].idJue){
                    printf("esta seguro que desea eliminar el registro \'s\' para continuar");
                    fflush(stdin);
                    scanf("%c",&check);
                    if(check=='s'||check=='S'){
                cart[i].isEmpty=1;
                printf("baja exitosa");
                break;}
            }
        }
}
void modifi(eJue rt[],int m){
    int i,auxMod,opcioMod=0,flag=0;
    printf("intrudsca el id del juego a modificar");
    scanf("%d",&auxMod);
    for(i=0;i<m;i++){
        if(auxMod==rt[i].idJue){
            flag=1;
            while(opcioMod!=4){
                    printf("que desea modificar\n1)IdJuego\n2)Nombre del Juego\n3)importe del juego\n4)Salir");
            scanf("%d",&opcioMod);
                switch (opcioMod){
            case 1:
                printf("ID actual %d introduscal el nuevo valor ID :",rt[i].idJue);
                scanf("%d",&rt[i].idJue);
                break;
            case 2:
                printf("nombre actual %s introduscal el nuevo valor nombre  :",rt[i].nomJue);
                scanf("%s",rt[i].nomJue);
                break;
            case 3:
                printf("inporte actual %f introduscal el nuevo valor IMPORTE",rt[i].precioJue);
                scanf("%f",&rt[i].precioJue);
            break;
            default:
                printf("FUERA DE RANGO");
                break;

                }
            }
        }
    }
    if(flag==0){
        printf("\nno en contro el ID solicitado");
    }
}
void ordenAnio(eJue cart[],int MAX){
             eJue aux;
             int i,j;

             for(i=0;i<MAX-1;i++){
                for(j=i+1;j<MAX;j++){
                    if(cart[i].fechaRe.anio>cart[j].fechaRe.anio){
                            aux=cart[i];
                            cart[i]=cart[j];
                            cart[j]=aux;
                        }
                }
             }


}
int generarId(eJue cart[],int m){
    int marcador,i;
        marcador=0;

    for(i=0;i<m;i++){

        if((marcador<cart[i].idJue) && (cart[i].isEmpty==0)){
            marcador=cart[i].idJue;

        }
    }
return marcador+1;
}

void ordenNombre(eJue cart[],int MAX){
             int i,j;
             eJue aux;
             for(i=0;i<MAX-1;i++){
                for(j=i+1;j<MAX;j++){
                    if(strcmp(cart[i].nomJue,cart[j].nomJue)>0){
                            aux=cart[i];
                            cart[i]=cart[j];
                            cart[j]=aux;
                        }
                }
             }


}

