#include <stdio.h>
#include <stdlib.h>

typedef struct{

char nombre[31];
int nota;
}eAlumno;

int main()
{
    int i;
    eAlumno alu,alus[3];
    eAlumno *ptrAlus;
    eAlumno *ptrAlu;
    ptrAlu=&alu;
    ptrAlus=alus;//tambien  puede ser ptrAlus=&alus[0];
    /*
printf("introdusca nombre del alumno");
scanf("%s", alu.nombre);
printf("introdusca nota del alumno");
scanf("%d", &alu.nota);
printf("%s : %d\n",alu.nombre , alu.nota);

printf("introdusca nombre del alumno");
scanf("%s", &(*ptrAlu).nombre);
printf("introdusca nota del alumno");
scanf("%d", &ptrAlu->nota);
printf("%s : %d\n", ptrAlu->nombre , (*ptrAlu).nota);
*/
for (i=0;i<3;i++){
    printf("introdusca nombre del alumno");
scanf("%s", alus[i].nombre);
printf("introdusca nota del alumno");
scanf("%d", &alus[i].nota);

}
for (i=0;i<3;i++){
    printf("\nalumno %s  nota  %d\n",alus[i].nombre,alus[i].nota);
}
for (i=0;i<3;i++){
    printf("\nalumno %s  nota  %d\n",(ptrAlus+i)->nombre,(*(ptrAlus+i)).nota);
}
    return 0;
}
