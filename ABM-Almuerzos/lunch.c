#include <stdio.h>
#include <stdlib.h>
#include "lunch.h"

void menu (eMenu me[]) {
 int opcion=0,i;
 do{
 printf("\n1)Opcion1\n2)Opcion\n3)Opcion\n5)Opcion\n6)Salir\n");

        scanf("%d",&opcion);
        system("cls");
 switch (opcion){

    case 1:
        alta();
    break;
    case 2:
    break;
    case 3:
        for(i=0;i<5;i++){
printf("\n%i\t%s\t%i", eMenu me[i].menuId, eMenu me[i].descrip, eMenu me[i].importe);
}
        //listas(eEmpleado personal[],eMenu menuR[],eSector sector[]);
    break;
}
}while(opcion!=6);

}
void alta(){
printf("\nfunciona\n");
}
void listas(eEmpleado personal[],eMenu menuR[],eSector sector[]){
int i;
for(i=0;i<5;i++){
printf("\n%d\t%s",personal[i].legajo,personal[i].apellido);
}
}
