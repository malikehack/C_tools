#include <stdio.h>
#include <stdlib.h>

int main(){  /**Complétez la variante la plus naturelle de l’Exercice 13 : en introduisant une condition sur N telle que sa valeur soit acceptée
    si elle est comprise entre MIN et MAX qui sont deux constantes préalablement définies. Vous avez la liberté d’utiliser n’importe quelle boucle.**/



    const unsigned int Min = 1, Max = 20 ;
    unsigned int N, i ;
    float M;
    int S, P, nombre ;

    printf("\tSomme,produit,moyenne\n");

    i=1;
    S=0;
    P=1;
    do{
            printf("Donnez un nombre comprise entre %u et %u svp\n",Min,Max);
            scanf("%u",&N);
    }while(N<Min || N>Max);
         do{
            printf("Donnez des entiers\n");
            scanf("%d",&nombre);
            i++;
            S += nombre ;
            P *= nombre ;

        }while(i <= N);

        M = (float)S/N ;
            printf("La somme est %d\n",S);
            printf("Le produit est %d\n",P);
            printf("La moyenne est %f\n",M);



    return 0;
}
