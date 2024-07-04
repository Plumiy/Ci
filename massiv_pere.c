#include <stdio.h>

int main (void)
{

int array[3][5]={{2,3,4,5,6},{7,8,9,10,11},{13,14,15,16,17}};    
int n = sizeof(array)/sizeof(array[0]);
int m = sizeof(array[0])/sizeof(array[0][0]);

// printf("razmer %d\t%lu\t%lu\t%d\t%d\n", array[1][4], sizeof(array), sizeof(array[0]), n, m); //строк столбцов
int *final = array[0] + n*m - 1;
for (int i = 1, *j= &array[0]; j <= final; j++, i++)
{
    printf("%p\n",  *array);
}

return 0;

}

