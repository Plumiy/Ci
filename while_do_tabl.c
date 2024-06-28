// Таблица умножения

#include <stdio.h>
int main()
{ int i = 1;
do
    {
    int j=1;    
    do  
        {  
        printf("%d %d = %d\t \n", i, j,  i * j);
        j++;  
        }
    while (j <= 10);
    printf("********** \n");
    i++;
    }
while (i <= 10);
return 0;
}