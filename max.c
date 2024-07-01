#include <stdio.h>

int max( int a, int b, int c)
    { if (a>b && a>c) return a;
      else if (b>c) return b;
      else return c;  
    }

int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", max(a, b, c));
    return 0;
}