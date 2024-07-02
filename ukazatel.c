#include <stdio.h>

int main(void)
{
int x = 10;
int *p = &x;
*p = 25
printf(" x= %d\np = %p\n *p=%d", x, p, *p);
return 0;
}


// #include <stdio.h>
// Присвоение указателю другого указателя 
// int main(void)
// {
//     int a = 10;
//     int b = 2;
     
//     int *pa = &a;
//     int *pb = &b;
     
//     printf("Variable a: address=%p \t value=%d \n", (void*)pa, *pa);
//     printf("Variable b: address=%p \t value=%d \n", (void*)pb, *pb);
     
//     pa = pb;    // теперь указатель pa хранит адрес переменной b
//     printf("Variable b: address=%p \t value=%d \n", (void*)pa, *pa);
     
//     return 0;
// }

// int main(void) // разыменования казателя
// {
//     int a = 10;
     
//     int *pa = &a;
//     int *pb = pa;
     
//     *pa = 25;
     
//     printf("Value on pointer pa: %d \n", *pa);  // 25
//     printf("Value on pointer pb: %d \n", *pb);  // 25
//     printf("Value of variable a: %d \n", a);    // 25
     
//     return 0;
// }

// int main(void) // указательна void
// {
//     int x = 123;
//     int *ip = &x;       // указатель хранит адрес объекта int
//     void *vp; 
//     vp = ip;            // void-указатель получает адрес из указателя ip
//     printf("Value: %d\n", *((int *)vp));    // Value: 123
 
//     return 0;
// }