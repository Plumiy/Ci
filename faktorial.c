#include <stdio.h>
int fakt (int x)
    { int a, b=1;
        for (a=1; a<x+1; a++){
            b *= a;
            }
    return b;
    }
int main(void)
    {   int x;
        scanf("%d", &x);
        printf(" factotial %d\t= %d", x , fakt(x));
        return 0;
    }
