#include <stdio.h>
#include <math.h>

int sqrtx( int a, int b, int c )
    {
        float x1=(-b + sqrt(b*b-4*a*c))/2*a;
        float x2=(-b - sqrt(b*b-4*a*c))/2*a;
    
    }

int main(void)
{ int a, b, c, x1, x2;
    scanf("%d%d%d", &a, &b, &c);
    sqrtx(a, b, c);
    printf("x1, x2 = %d\n %d\n", x1, x2 );
return 0;
}