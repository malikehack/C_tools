                                                                #include <stdio.h>
                                                                #include <math.h>

int main()
{
    int A,B ;       /*Ecrivez un programme qui lit deux valeurs entières (A et B) au clavier et qui affiche le signe de la somme de A et B sans faire l'addition.
                       Utilisez la fonction abs (valeur absolue) de la bibliothèque <math>.*/

    printf(" Signe de la somme de deux reels\n");
    printf(" Donnez un reel\n");
    scanf("%d",&A);
    printf(" Donnez un autre reel\n");
    scanf("%d",&B);
        if ( A+B >= abs(A+B))
            printf("Le signe est : +\n");
        else
            printf("Le signe est : -");

return 0;
}
