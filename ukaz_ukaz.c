#include <stdio.h>
// Указатель на адрес указателя
int main(void)
{
int x = 22;
int *u= &x;
int **u2 = &u;

printf("%p\t%p\t%d\n", u, u2, x);


    return 0;
}