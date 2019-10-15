#include <stdio.h>
#include <stdlib.h>
#include "juegos.h"

void carga(eJue cart[], int m )
{
    int i;
    for(i=0; i<m; i++)
    {
        //if(cart[i].isEmpty==1){
         printf("nombre JUEGO : ");
         fflush(stdin);
         scanf("%s", cart[i].nomJue);

         printf("\nIDjuego: ");
         scanf("%d", &cart[i].idJue);
         cart[i].isEmpty=0;

         printf("\nPrecio: ");
         scanf("%f", &cart[i].precioJue);

         cart[i].isEmpty=0;
            //break;}
    }
}
   void mostarTodo(eJue cart[],int m)   {
    int i;
    for(i=0;i<m;i++){
    mostrarUno(cart[i]);
    }}

void mostrarUno(eJue cart){
    printf("\n%s\t%d\t%.2f",cart.nomJue,cart.idJue,cart.precioJue);
    }

void inizisEmpty(eJue cart[],int m){
    int i;
        for(i=0;i<m;i++){
    cart[i].isEmpty=1;
    }
}
