#include <stdio.h>
  
int main(void)
{   
    int array[] = {1, 2, 3, 4};
    int *p[] = { &array[1], &array[2], &array[0] };
 
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", *p[i]);
    }
    return 0;
}
