#include <stdio.h>
int main(void)
{
int i=1;
for ( ; ; )
    {   
    printf("%d %d %d %d \n", i, i, i*i, i%i);
    i++;
    if (i > 100) break;
    }
return 0;
}
