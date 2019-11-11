#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{

FILE *pFile;
int r=0;

pFile = fopen(path,"r");
    if(pFile != NULL)
    {
parser_EmployeeFromText(pFile ,pArrayListEmployee);
    fclose(pFile);
    r=1;
    }
    else{
            printf("El archivo no existe");

    r=-1;
    }

return r;
}


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{
    FILE *pFile;
int r=0;

pFile = fopen(path,"rb");
    if(pFile != NULL)
    {
        parser_EmployeeFromBinary(pFile ,pArrayListEmployee);

    fclose(pFile);
    r=1;
    }
    else{
            printf("El archivo no existe");

    r=-1;
    }return r;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    Employee* addNewEmployee=employee_new();
    int idAuto=ll_len(pArrayListEmployee)+1;
    char nombre[62];
    int salarioEmpleado;
    int horasTrabajadas;
    miFgets(nombre,62,"\nnombre del empleado : ");
    salarioEmpleado=getInt("\nel Sueldo del empleado : ");
    horasTrabajadas=getInt("\nCantidad de horas trabajadas : ");
    addNewEmployee->id=idAuto;
    addNewEmployee->sueldo=salarioEmpleado;
    addNewEmployee->horasTrabajadas=horasTrabajadas;
    strcpy(addNewEmployee->nombre,nombre);
    ll_add(pArrayListEmployee,addNewEmployee);
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    int i,r,eliminar;
    int employeeID;
    char employeeNombre[62];
    int employeeHoras;
    int employeeSueldo;
    int idRemove;
    int len;

    Employee* employeeBaja=employee_new();
    idRemove=getInt("\nintrodusca el Id del empleado a dar de baja");
    len=ll_len(pArrayListEmployee);

    for(i=0;i<len;i++){
     employeeBaja=ll_get(pArrayListEmployee,i);
     employeeID=employeeBaja->id;
        if(employeeID==idRemove){
        printf("\nEl empleado a dar de baja es: %d %s %d %d\n\n",employeeBaja->id,employeeBaja->nombre,employeeBaja->horasTrabajadas,employeeBaja->sueldo);
        eliminar=getInt("\npresione 1 eliminar\n0 para cancelar");
            if(eliminar==1){
                r=ll_remove(pArrayListEmployee,i);
                if(r==0){
                printf("\nBaja exitosa\n");
                break;
            }
        }
     }

    }
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{

    Employee* listEmployee;
    int len=ll_len(pArrayListEmployee);
    int employeeId;
    char employeeNombre[62];
    int employeeHoras;
    int employeeSueldo;
    int cont=0;
    int r=0;
    int i;


    for(i=0;i<len;i++){
        listEmployee=ll_get(pArrayListEmployee,i);
        employeeId=listEmployee->id;
        strcpy(employeeNombre,listEmployee->nombre);
        employeeHoras=listEmployee->horasTrabajadas;
        employeeSueldo=listEmployee->sueldo;
/*
        employee_getId(listEmployee,&employeeId);;
        employee_getHorasTrabajadas(listEmployee,&employeeHoras);
        employee_getNombre(listEmployee,&employeeNombre);
        employee_getSueldo(listEmployee,&employeeHoras);*/

        printf("\n%5d     %10s    %15d     %20d",employeeId,employeeNombre,employeeHoras,employeeSueldo);
        cont++;

    }
printf("\n===============>>>%d\n\n\n",cont);
    return r;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    int i,r=0;
    int employeeId,employeeHoras,employeeSueldo;
    char employeeNombre[62];
    Employee* listEmployee=employee_new();
    FILE* pFile;
    pFile = fopen(path,"w");
      if(pFile != NULL)
    {
        for(i=0;i<ll_len(pArrayListEmployee);i++){

        listEmployee=ll_get(pArrayListEmployee,i);
        employeeId=listEmployee->id;
        strcpy(employeeNombre,listEmployee->nombre);
        employeeHoras=listEmployee->horasTrabajadas;
        employeeSueldo=listEmployee->sueldo;

        fprintf(pFile,"\n%d,%s,%d,%d",employeeId,employeeNombre,employeeSueldo,employeeHoras);

    } fclose(pFile);
    r=1;
    }else{
            printf("El archivo no existe");

    r=-1;
    return r;
    }}



/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{

    FILE* pFile;
    pFile = fopen64(path,"wb");
    int i,r=0;
    Employee* employeeAux=employee_new();

      if(pFile != NULL)
    {
        for(i=0;i<ll_len(pArrayListEmployee);i++){

        employeeAux=ll_get(pArrayListEmployee,i);


         fwrite(employeeAux,sizeof(Employee),1,pFile); // escribo una struct al final

    } fclose(pFile);
    r=1;
    }else{
            printf("El archivo no existe");

    r=-1;

    }return r;
}

