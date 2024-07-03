#include <stdio.h>
// Перемещение указателя

// int main(void)
// {
// int a = 10;
// int *pn = &a;
// *pn++; // перемещаем указатель вперед на значения int (1 * 4 = 4 байт)
// printf("ukaz %p %d", (void*)pn, *pn);
// return 0;
// }

 
// int main(void)
// {
//     double d = 10.6;
//     double *pd = &d;
//     printf("Pointer pd: address=%p \n", (void*)pd);
//     pd = pd + 2;    // перемещаем указатель вперед на 2 значения double (2 * 8 = 16 байт)
//     printf("Pointer pd: address=%p \n", (void*)pd);
     
     
//     char c = 'N';
//     char *pc = &c;
//     printf("Pointer pc: address=%p \n", (void*)pc);
//     pc = pc - 3;        // перемещаем указатель назад на 3 значения char (3 * 1 = 3 байта)
//     printf("Pointer pc: address=%p \n", (void*)pc);
     
//     return 0;
// }


// int main(void)
// {
//     int a = 10;
//     int b = 23;
//     int *pa = &a;
//     int *pb = &b;
//     ptrdiff_t c = pa - pb;  // разница между адресами
     
//     printf("pa=%p \n", (void*)pa);
//     printf("pb=%p \n", (void*)pb);
//     printf("c=%lld \n", c);
     
//     return 0;
// }


// Растояние между элементами массива  
// Чтобы получить расстояние в байтах, соответственно надо умножить расстояние на размер типа указателя.
int main(void)
{
    int arr[64];
    int* ptr1 = &arr[10];
    int* ptr2 = &arr[40];
    ptrdiff_t dist = ptr2 - ptr1; // 30
      
    printf("dist=%lld \n", dist);
      
    return 0;
}