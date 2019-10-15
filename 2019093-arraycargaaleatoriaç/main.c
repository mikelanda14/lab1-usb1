#include <stdio.h>
#define MAX 3

void main(void){
    int edad[MAX],i,leg,suma=0,cont=0;
    float sueldo[MAX],prom,aux;
    char seguir;
    for(i=0; i<MAX; i++)
    {
        edad[i]=0;
        sueldo[i]=0;
    }
    do
    {
        printf("Ingrese Legajo");
        scanf("%d",&leg);
        printf("Ingrese Edad");
        scanf("%d",&edad[leg-1]);
        printf("Ingrese el sueldo");
        scanf("%f",&aux);

        sueldo[cont]=aux;
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
