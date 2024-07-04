#include <stdio.h>

int main(void)
{
    {int array[3][5]={ {1,2,3,4,5} , {7,8,9,10,11} , {13,14,15,16,17} };
    // printf("%d\n", array[0][0]);
    int nr = sizeof(array)/sizeof(array[0]);
    int nc = sizeof(array[0])/sizeof(array[0][0]);
    // printf("%d\t%d\t%d\n", nr, nc, array[0][0]);
    int i=0;
    int *final = &array[2][4];
    for ( int i=0, *j=&array[0][i]; j <= final; i++, j++)
        {if (i%nc==0) 
        printf("\n");
        printf("%d\t", *j);}
        
   
    return 0;
}
}