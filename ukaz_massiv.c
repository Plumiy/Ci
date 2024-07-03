#include <stdio.h>
 
int main(void) {
// {
//     int array[] = {1, 2, 3, 4, 5};
//     printf("array[0] = %d\n", *array);    // array[0] = 1
//     printf("array[1] = %d\n", *(array+1)); // Получаем второй элемент  array[1] = 2
//         for (int i=0; i<5; i++)
//             {
//                 printf("array[%d", i);
//                 printf("] = %d\t", i[array]); // Можно было написать *(array+i)
//                 void* address = array + i;  // получаем адрес i-го элемента массива
//                 int value = *(array + i);   // получаем значение i-го элемента массива
//                 printf("address=\t%p\n", address);            
//             }
//     return 0;
// }

// Перебор массива с помощью указателя
// int array[5] = {1, 2, 3, 4, 5};
 
// for(int *ptr=array; ptr<=&array[4]; ptr++)
// {
//     printf("address=%p \t value=%d \n", (void*)ptr, *ptr);
// }

// Перебор многомерного массива
int array[3][4] = { {1, 2, 3, 4} , {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = sizeof(array)/sizeof(array[0]);         // число строк
    int m = sizeof(array[0])/sizeof(array[0][0]);   // число столбцов
     
    int *final = array[0] + n * m - 1;  // указатель на самый последний элемент
    for(int *ptr=array[0], i = 1; ptr <= final; ptr++, i++)
    {
        printf("%d \t", *ptr);
        // если остаток от целочисленного деления равен 0,
        // переходим на новую строку
        if(i%m==0)
        {
            printf("\n");
        }
    }   
    return 0;


}

