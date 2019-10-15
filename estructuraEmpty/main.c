#include <stdio.h>
#include <stdlib.h>
#include "juegos.h"
#define MAX 3

int main()
{
int opcion=0;
eJue cart[MAX];
inizisEmpty(cart,MAX);
while(opcion!=6){
printf("1)Alta de juego\n2)mostar\n3)Baja\n4)Modificacion\n6)Salir\n")

    switch (opcion){

    carga(cart,MAX);

    mostarTodo(cart,MAX);

    }
}

    return 0;
}
