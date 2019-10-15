#include <stdio.h>
#include <stdlib.h>
#define FIL 5
int main()
{
    int vec[5]= {7,5,6,3,2};
    int flag=0,num,i,aux,j;
    for(i=0; i<FIL-1; i++)
    {
        for(j=i+1; j<FIL; j++)
        {
            if(vec[i]<vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
    for(i=0;i<FIL;i++){
    printf("%d\t",vec[i]);
        }

    return 0;
}
