#include <stdio.h>

int main(void) {

 int num,m,n;
scanf("%d%d",&m,&n);
for (num = m; num <= n; num++)
        {
               if (num % 2 == 1)
                  printf ("%d ", num);
         }

	return 0;
}
