

#include <stdio.h>
#include <stdlib.h>


typedef struct {

int jour;
int mois;
int annee;

}Date;
typedef struct {

char  nom[100];
char prenom[100];
Date date_naissance;
float  note_s3[6];
int cne ;


}Etudiant;

int main()
{
    Etudiant E2={"anas ","rttttttt", {12,1,1999},{1,2,3,4,5,7.1},12345678};

printf(" E2");

         printf("prenom and nom:%s %s \n",E2.prenom,E2.nom);
        printf("date est %d/%d/%d \n",E2.date_naissance.jour,E2.date_naissance.mois,E2.date_naissance.annee);

         printf("cne : %d\n",E2.cne);

         int i;

    for (i=0;i<6;i++){
                printf("les notes est des modume %d: %0.2f \n",i+1,E2.note_s3[i]);

    }

    Etudiant E3=E2;
    printf(" E3");
      printf("prenom and nom:%s %s \n",E3.prenom,E3.nom);
        printf("date est %d/%d/%d \n",E3.date_naissance.jour,E3.date_naissance.mois,E3.date_naissance.annee);

         printf("cne : %d\n",E3.cne);


    for (i=0;i<6;i++){
                printf("les notes est des modume %d: %0.2f \n",i+1,E3.note_s3[i]);

    }


    return 0;
}
