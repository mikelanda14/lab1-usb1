#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char nombre[41];
    printf("%s",mensaje);
    fgets(nombre,41,stdin);

    for(i=0;i<41;i++){
        while(nombre[i]==' '&&nombre[i+1]==' '){
                for(j=i;j<41;j++){
            nombre[j]=nombre[j+1];
                }
        }
    }


    return 0;
}
