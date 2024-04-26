#include <stdio.h>
#include <stdlib.h>

int factoriel(int n)
{
    if (n==0){
         return 1;
    }

    return n*factoriel(n-1);
}
