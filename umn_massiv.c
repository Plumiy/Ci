#include <stdio.h>
  
int main(void)
{
    const int r1 = 3, c1r2=2, c2=1;
    int matrix1[3][2] = {{1, 2},{3, 4},{5, 6}};
    int matrix2[2][1] = {{10},{20}};
    int matmult[r1][c2];
 
    
    for(int i=0;i<r1;i++) 
    {
        for(int j=0;j<c2;j++)
        {
            matmult[i][j]=0;
        }
    }
 
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1r2;k++)
            {
                matmult[i][j] = matmult[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
 
    printf("Result \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",matmult[i][j]);
        }
        printf("\n");
    }
}