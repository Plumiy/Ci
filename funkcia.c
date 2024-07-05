#include <stdio.h>

// char hello(char *pr, char *kr)
//     {printf("%s\n%s\n", pr, kr);}

//  char main(void)
// {   
// hello("word", "peace");
// }

// void message(char send_mes[])
// {
// printf("%s\n", send_mes);
// }

// int main(void)
// {
//     message("privet,");
//     message("my frende");
//     message("how a you?");
// }

// 
void increase(int x)
{
    x = 2 * x;
    printf("Increase func: x = %d \n", x);
}
 
int main(void)
{
    int a = 25;
    increase(a);
    printf("Main func: a = %d \n", a);
}