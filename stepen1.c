
#include <stdio.h>
int step(int res, int b)
{int x=0; 
   for (x=0; x <b; x++)
    {
        res *=res;
        x++;
    }

   return res;
}
int main(void) {
int b, res;
scanf("%d%d", &b, &res);
printf("%d\n%d\n%d", b, res, step(b, res));
return 0;
}



