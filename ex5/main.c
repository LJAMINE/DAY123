

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

void creeRtudiant(Etudiant *E1){
 printf("Donner le nom de l'etudiant: ");
    scanf("%s", &E1->nom); // fgets
	printf("Donner le prenom de l'etudiant: ");
	scanf("%s", &E1->prenom);
	printf("Donner la date de naissance de l'etudiant : \n");
    printf("\t Quel jour ? :") ;
	scanf("%d",&E1->date_naissance.jour) ;
  	printf("\t Quel mois ? :") ;
	scanf("%d",&E1->date_naissance.mois) ;
  	printf("\t Quelle annee ? :") ;
	scanf("%d",&E1->date_naissance.annee) ;
    printf("Donner le code de l'etudiant: ");
    scanf("%d",&E1->cne);
    printf("Donner les notes du S3 de l'etudiant: \n");
	int i;
	for(i=0 ; i<6 ; i++) {
 		printf("\t Notes_S3[%d]= ",i);
 		scanf("%f",&E1->note_s3[i]);
	}

}

int main()
{
Etudiant E ;
creeRtudiant(&E);

    }


    return 0;
}
