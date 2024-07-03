#include <stdio.h>
 
int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    printf("array[0] = %d\n", *array);    // array[0] = 1
    printf("array[1] = %d\n", *(array+1)); // Получаем второй элемент  array[1] = 2
        for (int i=0; i<5; i++)
            {
                printf("array[%d", i);
                printf("] = %d\t", i[array]); // Можно было написать *(array+i)
                void* address = array + i;  // получаем адрес i-го элемента массива
                int value = *(array + i);   // получаем значение i-го элемента массива
                printf("address=\t%p\n", address);            
            }
    return 0;
}