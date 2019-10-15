#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=0,opcion=0,flagA=0,flagB=0,flagC=0;

    while(opcion!=5){
        printf("=====================MENU===============\n1. Ingresar 1er operando A=%d\n2. Ingresar 2do operando B=%d\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\n Ingrese opcion :",x,y);
        scanf("%d",&opcion);
        switch (opcion){
            case 1:
                printf("introdusca el primer operando :");
                scanf("%d",&x);
                flagA=1;

                system("cls");
                break;
            case 2:
                printf("introdusca el segundo operando :");
                scanf("%d",&y);
                flagB=1;
                system("cls");
                break;
            case 3:
                if(flagA==1&&flagB==1){
                flagC=1;
                }else{
                printf("Los calculos Requieren operandos A y B\n Ingrese opcion :");
                scanf("%d",&opcion);
                }
                system("cls");
                break;
            case 4:
                if(flagA==1&&flagB==1&&flagC==1){
                        printf("resultados");
                flagA=0,flagB=0,x=0,y=0;
                }else{
                printf("Los calculos Requieren operandos A y B\n Ingrese opcion :");
                scanf("%d",&opcion);
                }
                system("cls");
                break;
        }
    }
    return 0;
}
