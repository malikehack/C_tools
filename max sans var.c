#include <stdio.h>
#include <stdlib.h>

int main()
{ int A,B,C;
    printf("Donnez A\n");
    scanf("%d",&A);
    printf("Donnez B\n");
    scanf("%d",&B);
    printf("Donnez C\n");
    scanf("%d",&C);

    if (A>B)
    { if (B>C)
        printf("Le max est %d",A);
    }else
        if (B>A)
        { if (A>C)
            printf("Le max est %d",B);
        }else
        if (C>A)
        { if (A>B)
            printf("Le max est %d",C);
        }


                return 0;
}
