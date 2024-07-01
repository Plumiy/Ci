#include <stdio.h>

int main(void)
{
char message[] = "Hello";
size_t length = sizeof(message)/sizeof(char);   // 6 символов
for(size_t i=0; i<length; i++)
{
    printf("%d ", message[i]);
}
return 0;
}