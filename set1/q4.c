#include <stdio.h>

int main()
{
    char checkvar;
    scanf("%c",&checkvar);
   if(isalpha(checkvar)) 
    printf("is a Alphabet");
    else 
    printf("is Not an alphabet");
    return 0;
    }
