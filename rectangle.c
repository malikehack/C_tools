#include <stdio.h>

int main() /**Ecrire un programme qui affiche un rectangle formé des étoiles dont la longueur (comprise entre [2..79]) et la largeur (comprise entre [2..23])
              sont entrées au clavier.**/

{ const unsigned int Min = 2,MaxLarg=23,MaxLong=79 ;
   unsigned short int Long, Large,i, j ;

    do{
         printf("Donnez une longueur comprise en 2 et 79 svp\n");
    scanf("%hu",&Long);
    }while((Long<Min) || (Long>MaxLong));

    do{
         printf("Donnez une largeur comprise en 2 et 23 svp\n");
    scanf("%hu",&Large);
    }while((Large<Min) || (Large>MaxLarg));

    for(i=1;i<=Long;i++){
        for(j=1;j<=Large;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
