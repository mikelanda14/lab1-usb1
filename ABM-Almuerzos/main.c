#include <stdio.h>
#include <stdlib.h>
#include "lunch.h"
int main()
{
eEmpleado personal[5]={
    { 1 , "Perez" , "Jose" , "M" , 25000 , 5 , 5 , 1987 , 1 , 0 },
    { 2 , "Garcia" , "Maria" , "F" , 35000 , 6 , 12 , 2005 , 4 , 0 },
    { 3 , "Lopez" , "Carlos" , "M" , 60000  , 3 , 4 , 2008 , 2 , 0 },
    { 4  , "Gomez" , "Luz" , "F" , 70000 , 8 , 9 , 2011 , 3 , 0 },
    { 5 , "Luther" , "King" , "M" , 100000 , 28 , 2 , 2014 , 5 , 0 }};

    eSector sector[5]={
        { 1 , "Administracio" },
        { 2 , "Produccion" },
        { 3 , "RRHH" },
        { 4 , "Investigacion" },
        { 5 , "Seguridad" },
          };

eMenu menuR[5]={
    { 1 , "Hamburgesa" , 100 },
    { 2 , "Ensalada" , 100 },
    { 3 , "Frustas", 100 },
    { 4 , "Sushi" , 100 } ,
    { 5 , "Pizza" , 100 }
    };

    menu(menuR);
    return 0;
}
