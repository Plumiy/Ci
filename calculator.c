#include <stdio.h>

// int calculator(int a, int b, char operator)
// {
//     if (operator=='+')
//         {return a + b;}
//     else if (operator=='-')
//         {return a - b;}
//     else if (operator=='*')
//         {return a * b;}
// }

int main(void)
{
int chislo1; 
int chislo2;
char operator[1];
  
    printf("enter x\t\n");    
    scanf("%d %d", &chislo1, &chislo2);
    scanf("%1s", operator);
    printf("argument = %d%d\n", chislo1, chislo2);
     printf("argument = %s\n", operator);
    // int res = calculator(x, y, '+');
    // printf("resultat = %d\n", res);
return 0;
}