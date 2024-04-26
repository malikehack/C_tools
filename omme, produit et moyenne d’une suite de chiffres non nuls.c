#include <stdio.h>
#include <stdlib.h>

int main() /**Calculez la somme, le produit et la moyenne d'une suite de chiffres non nuls entrés au clavier, sachant que la suite est terminée par zéro.
         Retenez seulement les chiffres (0, 1 ... 9) lors de l'entrée des données et effectuez un signal sonore si les données sortent de ce domaine.**/
{
    int chiffre,i ;
    float S, P, M ;
    P = 1;
    S = 0;
    M = 0;
    i=0;//ici i nous permettra de sovoir le nombre de valeur saisi
    do{
        printf("Donnez un chiffre\n");
        scanf("%d",&chiffre);

        S+=chiffre;
        P*=chiffre;
        i++;//apres chaque chiffre saisi i augmente de 1

    }while(chiffre>0&&chiffre<10&&chiffre!=0);

    M = S/(i-1);//-1 a cause du 0 a la fin qu'on ne prendra pas en compte

      printf("La somme est %f\n",S);
      printf("Le produit est %f\n",P);
      printf("La moyenne est %f\n",M);







   return 0;
}
