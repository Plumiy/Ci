#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(void)
{ int a, b, c;
  double x1; 
  double x2;
  char *locale = setlocale(LC_ALL, "");
    
int sqrtx( int a, int b, int c )
    {
        double d = b*b-4*a*c;
        if (d > 0) 
            { 
            double sd = sqrt (d);               
            double x1=(-1*b + sd)/(2*a);
            double x2=(-1*b - sd)/(2*a);          
            printf("2 korny\na=%d\nb=%d\nc=%d\nsqr=%f\nx1=%f\nx2=%f\n", a, b, c, sd, x1, x2);
            }
                                  
        else if ( d = 0)
            { double x1 =-1*b /(2*a);
                printf("1 koern\na=%d\nb=%d\nc=%d\nx1=%f", a, b, c, x1);}
        else
            {printf("0 korney");}    
    }
    printf("Vvedite a, b, c co znakon\n");
    scanf("%d%d%d", &a, &b, &c);
    sqrtx(a, b, c);
    
return 0;
}