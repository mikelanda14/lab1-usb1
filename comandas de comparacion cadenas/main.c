#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombreA[41];
    char nombreB[41];
    char nombreC[82];
    char aux[41];
    int valor;
    printf("nombre 1:");
    fflush(stdin);
    fgets(nombreA,41,stdin);
    printf("\nnombre 2:");
    fflush(stdin);
    fgets(nombreB,41,stdin);
    valor=strcmp(nombreA,nombreB);
   // printf("\n%d\n",valor);
   // printf("\nnombre A : %s\nnombre B:%s",nombreA,nombreB);
    //strcpy(aux,nombreA);
    //strcpy(nombreA,nombreB);
    //strcpy(nombreB,aux);
    strlwr(nombreA);
    nombreA[0]=toupper(nombreA[0]);
    strlwr(nombreB);
    nombreB[0]=toupper(nombreB[0]);
    strcpy(nombreC,nombreA);
    strcat(nombreC," ");
    strcat(nombreC,nombreB);
   // printf("\nnombre A : %s\nnombre B:%s",nombreA,nombreB);
    printf("\nnombre C:%s",nombreC);


    return 0;
}
