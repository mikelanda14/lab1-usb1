#include <stdio.h>
#include <stdlib.h>
#define NUM 3

int main()
{
    int edad[NUM],legajo[NUM],i,suma=0,prom;
    float sueldo[NUM];
    for(i=0;i<NUM;i++){
            legajo[i]=i+1;
        printf("introdusca la edad para numero de legajo:[%d]",legajo[i]);
        scanf("%d",&edad[i]);
        printf("introdusca el sueldo para numero de legajo:[%d]",legajo[i]);
        scanf("%d",&sueldo[i]);

    }
    for(i=0;i<NUM;i++){
        suma=suma+sueldo[i];
    }
    prom=suma/NUM;
    printf("El sueldo promedio es %.d\n",prom);
     printf("LEGAJO\t\tEDAD\t\tSUELDO\n");
    for(i=0;i<NUM;i++){

        printf("%d\t\t%d\t\t%.2f\n",legajo[i],edad[i],sueldo[i]);
    }

    return 0;
}
