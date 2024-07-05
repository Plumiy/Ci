#include <stdio.h>

int calculator(int a, int b, char oper[10])
{
    if (oper=="+")
        {return a + b;}
    else if (oper=="-")
        {return a - b;}
    else if (oper=="*")
        {return a * b;}
}

int main(void)
{
int chislo1; 
int chislo2;
char operator[10];
  
    printf("enter chislo1\t\nak\n");    
    scanf("%d %d", &chislo1, &chislo2);
    scanf("%10s", operator);
    printf("argument = %d%s%d\n", chislo1, operator, chislo2);
    //printf("argument = %s\n", operator);
    //calculator(chislo1, chislo2, operator);
    printf("resultat = %d\n", calculator(chislo1, chislo2, operator));
return 0;
}