#include <stdio.h>
#include<string.h>
int main(void)              /*Ecrivez un programme qui lit un entier et affiche en lettre, le reste de sa division par un nombre inférieur à 10
                        en utilisant la structure conditionnelle switch.*/
{
        int valeur,diviseur,rest ;

        printf("Donnez un entier\n");
            scanf("%d",&valeur);
            printf(" Donnez un diviseur inferieur a 10\n");
                scanf("%d",&diviseur);
                rest=valeur%diviseur;
            switch (rest)
            {
                case 0 :  printf("Le modulo: zero");
                        break;
                case 1 :  printf("Le modulo est: Un");
                        break;
                case 2 :  printf("Le modulo est: Deux");
                        break;
                case 3 :{
                        printf("Le modulo est: Trois");
                        break;}
                case 4 :  printf("Le modulo est: Quatre");
                        break;
                case 5 :{
                        printf("Le modulo est: Cinq");
                        break;}
                case 6 :  printf("Le modulo est: Six");
                        break;
                case 7 :{
                        printf("Le modulo est: Sept");
                        break;}
                case 8 :{
                        printf("Le modulo de est: Huit");
                        break;}
        }

            return 0;
}
