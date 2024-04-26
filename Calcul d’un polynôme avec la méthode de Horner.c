#include <stdio.h>
/**Calculez pour une valeur X donnée du type float la valeur numérique d'un polynôme de degré n : P(X) = AnXn + An-1Xn-1+ ... + A1X + A0
La valeur de n, des coefficients An, ... , A0 et de X seront entrées au clavier.
    Utilisez le schéma de Horner qui évite les opérations d'exponentiation lors du calcul :**/

int main()
{   int n, i ;
    float PX, X, coeff ;

       printf("\tSaisi du polynome\n");
       printf("Donnez le degre du polynome\n");
       scanf("%d",&n);
       printf("Donnez la valeur de X");
       scanf("%f",&X);

       for(i=n;i>=0;i--){
        printf("Donnez des coefficients\n");
        scanf("%f",&coeff);
        PX*=coeff+X;
       }
       printf("Le resultat est %f",PX);


    return 0;
}
