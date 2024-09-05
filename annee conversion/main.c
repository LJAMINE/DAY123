#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resultat, annee ;
    int choix;

     printf("Hello this is programme for years conversion \n");
     printf("1, pourconvertir en mois  \n");
     printf("2, pourconvertir en jours  \n");
     printf("3, pourconvertir en heures  \n");
     printf("4, pourconvertir en minutes  \n");
     printf("5, pourconvertir en seconde  \n");
          printf("choix doit etre entre 1 et 5\n");
          scanf("%d",&choix);

          printf("Entrez le nombre annee: ");
    scanf("%f", &annee);


          switch(choix){

      case 1:
          //mois
        resultat=annee*12;
          printf("l'annes %f = %f en mois ",annee,resultat);
          break;

          case 2:
              //jours
        resultat=annee*365;
          printf("l'annes %f = %f en jours ",annee,resultat);
          break;
          case 3:
              //heures
        resultat=annee*365*24;
          printf("l'annes %f = %f en heures ",annee,resultat);
          break;
          case 4:
              //minute
        resultat=annee*365*24*60;
          printf("l'annes %f = %f en minute ",annee,resultat);
          break;
          case 5:
              //seconde
        resultat=annee*365*60*60;
          printf("l'annes %f = %f en seconde ",annee,resultat);
          break;

          default:
            printf("error");
          }




    return 0;
}
