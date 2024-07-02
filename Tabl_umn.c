#include <stdio.h>
int main(void)
{
    for (int i=0; i <= 10; i++)
    {    
        for (int j=1; j <= 10; j++)
        {
            printf("%d * %d = %d \t", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
