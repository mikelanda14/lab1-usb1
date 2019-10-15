#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
ePersona inizi{
int i;
for(i=0;i<CANT;i++){
    ePersona.isEmpty[i]=0;
}
}
void alta(ePersona per[],int CANT)
{
    for(i=0;i<CANT;i++){
    printf("Apellido:\n");
    fflush(stdin);
    scanf("%s", per.apellido);

    printf("Nombre:\n");
    fflush(stdin);
    scanf("%s", per.nombre);

    printf("Edad:\n");
    scanf("%d", &per.edad);

    per.isEmpty = 0;
    }

}

void mostrarUNO(ePersona per[],int CANT){

    printf("%s\t%s\t%d\t%d\n", per.apellido, per.nombre, per.edad, per.isEmpty);
    }
}
int mostratTodos{
for(i=0;i<CANT;i++){
    mostrarUno(int i);
}
}
