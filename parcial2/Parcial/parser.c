#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "dominio.h"
#include <string.h>

/** \brief Parsea los datos los datos de los Dominios desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListeDominio LinkedList*
 * \return int
 *
 */
int parser_DominioFromText(FILE* pFile , LinkedList* pArrayListeDominio)
{
int p;
eDominio* newDominio=dominio_new();
char var[3][62];

    fscanf(pFile,"%[^,],%[^,],%[^\n]\n", var[0],var[1],var[2]);
    do
    {
    p = fscanf(pFile,"%[^,],%[^,],%[^\n]\n", var[0],var[1],var[2]);
    if(p==3){


if(newDominio!=NULL){



            newDominio=dominio_newParametros(var[0],var[1],var[2]);
             ll_add(pArrayListeDominio,newDominio);
}
}
   else{
    break;
        }

        }
    while(!feof(pFile));

    return 1;
}


