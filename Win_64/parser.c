#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
int p;
//int* aux;
//Employee *employeeNew;
char var[4][100];

    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n", var[0],var[1],var[2],var[3]);
    do
    {
    p = fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n", var[0],var[1],var[2],var[3]);
    if(p==4){
            //aux=()malloc(sizeof(Employee));
            Employee* newEmployee = (Employee*)malloc(sizeof(Employee));

            ll_add(pArrayListEmployee,newEmployee);
    if(newEmployee!=NULL)
    {
        //newEmployee->horasTrabajadas= 0;
        //newEmployee->sueldo= 0;
        //newEmployee->id= 0;
        //strcpy(newEmployee->nombre,"");
    }

    if(newEmployee!=NULL){
          // employeeNew =&aux;
          newEmployee->id=atoi(var[0]);
          strcpy(newEmployee->nombre,var[1]);
          newEmployee->horasTrabajadas=atoi(var[2]);
          newEmployee->sueldo=atoi(var[3]);

        printf("Lei %d,%s,%d,%d\n",newEmployee->id,newEmployee->nombre,newEmployee->horasTrabajadas,newEmployee->sueldo);
    }
    //printf("Lei %s,%s,%s,%s\n",var[0],var[1],var[2],var[3]);
    }
   else{
    break;
        }}
    while(!feof(pFile));

    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
