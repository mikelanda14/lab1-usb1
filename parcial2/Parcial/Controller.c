#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "LinkedList.h"
#include "dominio.h"

#include "parser.h"



/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListeDominio)
{

FILE *pFile;
int r=0;

pFile = fopen(path,"r");
    if(pFile != NULL)
    {
   parser_DominioFromText(pFile ,pArrayListeDominio);
    fclose(pFile);
    r=1;
    }
    else{
            printf("El archivo no existe");

    r=-1;
    }

return r;
}
int controller_mapDominio(LinkedList* pArrayListeDominio)
{
    int retorno=1;

    if(pArrayListeDominio!=NULL)
    {

        if(ll_map(pArrayListeDominio,dominio_mapTipo))
        {
        retorno=1;

        }
        else
        {
            retorno=-1;
        }

    }
    else
    {
        retorno=-1;
    }
return retorno;
}
void controller_printList(LinkedList* listaVehiculos){
int i;
 for(i=0;i<ll_len(listaVehiculos);i++){
    eDominio* newlistado=dominio_new();

    newlistado=ll_get(listaVehiculos,i);
        printf("\n%5d %10s %10d %5c",newlistado->id,newlistado->dominio,newlistado->anio,newlistado->tipo);

}
printf("\n\n\n");
system("pause");
        system("cls");

}

int controller_saveAsText(char* path , LinkedList* pArrayListeDominio)
{
    int i,r=0;
    int Id,anio;
    char dominio[31];
    char tipo;
    eDominio* listDominio=dominio_new();
    FILE* pFile;
    pFile = fopen(path,"w");
      if(pFile != NULL)
    {
        for(i=0;i<ll_len(pArrayListeDominio);i++){

        listDominio=ll_get(pArrayListeDominio,i);
        Id=listDominio->id;
        strcpy(dominio,listDominio->dominio);
        anio=listDominio->anio;
        tipo=listDominio->tipo;

        fprintf(pFile,"\n%d,%s,%d,%c",Id,dominio,anio,tipo);

    } fclose(pFile);
    r=1;
    }/*else{
            printf("El archivo no existe");

    r=-1;

    }*/
    return r;
}
