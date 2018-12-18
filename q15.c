#include <stdio.h>

int main(void) {
	int c,m,n; 

   scanf("%d%d",&m,&n);

    for(c = m; c <=n; c++) {  
        /* Even numbers are divisible by 2 */ 
        if(c%2 == 0) { 
            /* counter is even, print it */
            printf("%d ", c);  
        }  
    }  

	return 0;
}
