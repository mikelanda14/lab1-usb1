#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    char nombre[41];
    char nombre[41];
    printf("Escriba nombre:");
    fflush(stdin);
    fgets(nombre,41,stdin);
    system("cls");
    length=strlen(nombre);
    printf("El nombre es :%s\n\n\nla longitud de la cadena es de %d",nombre,length);
    length=strlen(nombre);
    nombre[length-1]='\0';

    printf("\n\nEl nombre es :%s\n\n\nla longitud de la cadena es de %d",nombre,length);
    return 0;
}
