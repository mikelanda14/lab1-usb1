#include <stdio.h>
#include <stdlib.h>
#define CANT 5
int main()
{
        int i,edad[CANT],legajo[CANT],isEmpty[CANT];
        float sueldo[CANT];
    for (i=0;i<CANT;i++){
         isEmpty[i]=1
    }
    for(i=0; i<CANT; i++)
    {
        edad[i]=0;
        sueldo[i]=0;
    }


    do
    {
         for(i=0;i<CANT;i++){
             if(isEmpty[i]==1){
        printf("Ingrese Edad");
        scanf("%d",&edad[leg-1]);
        printf("Ingrese el sueldo");
        scanf("%f",&aux);

        sueldo[cont]=aux;
        isEmpty[i]=0;
        break;
    }

        printf("Desea ingresar otro dato S/N?");
        fflush(stdin);
        scanf("%c",&seguir);
    cont++;
    }
    while(seguir=='s');
    for(i=0; i<MAX; i++){
        suma=suma+sueldo[i];}
        prom=suma/MAX;
    printf("El sueldo promedio es %.2f",prom);
}
}
