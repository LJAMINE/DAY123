

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

afficherEtudiant(Etudiant E1){

    printf("prenom and nom :%s %s \n",E1.prenom,E1.nom);
        printf("date est %d/%d/%d \n",E1.date_naissance.jour,E1.date_naissance.mois,E1.date_naissance.annee);

         printf("cne : %d\n",E1.cne);


    for (int i=0;i<6;i++){
                printf("les notes est des modume %d: %0.2f \n",i+1,E1.note_s3[i]);

    }
}

float moyennNote(Etudiant E){
    float somme;
for (int i=0;i<6;i++){
    somme+=E.note_s3[i];

}
 return somme/6;
}

 void initEtudiant(Etudiant * t, int N){

 for(int i=0;i<N;i++){
    printf("creation d'etudiant  n: %d\n",i+1);
    creeRtudiant(t+i);
 }

 }

 void affichEtudian(Etudiant *tab_Etudiant , int taille ){

 for(int i=0;i<taille;i++){
            printf("affichage  d'etudiant  n: %d\n ",i+1);
    afficherEtudiant(tab_Etudiant[i]);
 }
 }

int main()
{
 int N ;
 printf("saisir N; ");
 scanf("%d",&N);
 Etudiant *t=malloc(N*sizeof(Etudiant));
 initEtudiant(t,N);
 affichEtudian(t,N);




    return 0;
}
