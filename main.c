#include <stdio.h>
#include <stdlib.h>

int main() /**Ecrire un programme qui affiche un triangle rectangle isoc�le form� d��toiles de N lignes.**/
{
   unsigned int N, i, j ;
    printf("Tracage d'un triangle isocele\n");
    printf("Donnez le nombre de ligne\n");
    scanf("%u",&N);

    for(i=1;i<=N;i++){
            for(j=1;j<=i+1-1;j++)
                printf("* ");
                printf("\n");

    }
          return 0;
}
