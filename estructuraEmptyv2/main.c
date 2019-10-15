#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "juegos.h"
#define MAX 8

int main()
{

eJue cart[MAX];//={{"xaxon" , 1 , 166.99 , 1983 ,4 , 22 ,0},{"zenna",3,99.98,1992 , 5 , 11, 0},{"tron" , 1 , 143.99 , 1985 , 9 ,1, 0},{"stwars" , 1 , 350.60 , 1982 , 6 , 15 , 0},{"Spaders" , 1 , 95.99 , 1976 , 3 , 9, 0}};
    inizisEmpty(cart,MAX);

    menu(cart,MAX);
    //
    return 0;
}
