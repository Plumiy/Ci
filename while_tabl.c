#include <stdio.h>
int main(void)
{
int i = 1, j = 1;
while (i <= 10)
    { 
        while (j <= 10)
        {
            printf("%d %d %d \n", i, j, j * i);
            j++;
        }
    i++;
    j = 1;
    }
    
return 0;
}

