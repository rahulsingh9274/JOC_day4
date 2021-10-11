#include <stdio.h>
int main()
{
    char c[10]={'M','T','W','T','F','S'};

    int M_int[]={560,660,590,760,480,960};
    float M_float[]={97.50,66.0,79.25,76.55,98.45,96.40};
    int i,j,max_float,max_int;

    max_int=M_int[0];max_float=M_float[0];
    for(i=1;i<6;i++)
    {
        if(M_int[i] > max_int)
            max_int=M_int[i];
        if(M_float[i] > max_float)
            max_float=M_float[i];
    }
    int pos_int,pos_float;
    for(i=0;i<6;i++)
    {
        if(M_int[i]==max_int);
        pos_int=i;
        break;
    }
    for(j=0;j<6;j++)
    {
        if(M_float[i]==max_float);
        pos_float=j;
        break;
    }

    printf("Mr.int party on %c and Mr.float party on %c",c[pos_int],c[pos_float]);
    return 0;
}