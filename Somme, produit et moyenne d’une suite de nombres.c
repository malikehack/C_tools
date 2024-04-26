#include <stdio.h>

int main() /**Ecrivez un programme qui lit N nombres entiers au clavier et qui affiche leur somme, leur produit et leur moyenne.
            Choisissez un type approprié pour les valeurs à afficher. Le nombre N est à entrer au clavier. La seule structure itérative autorisée est do … while.**/
{
    unsigned int N ;
    int nombre, i, S, P;
    float M ;//Moyenne,Somme,Produit respectivement

    printf("\tSomme,produit,moyenne\n");
    printf("Donnez un entier\n");
    scanf("%u",&N);

    i=1;
    S=0;
    P=1;
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
