#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct {
    char nome[20];
    char code[20];
    int quantete;
    float prix;
} produit;

 void ajoute(produit prd[], int *N) {
    int i;
    printf("Combien de produits voulez-vous ajouter? ");
    scanf("%d", N);

    for (i = 0; i < *N; i++) {
        printf("Veuillez entrer le nom du produit: ");
        scanf("%s", prd[i].nome);
        printf("Veuillez entrer le code du produit: ");
        scanf("%s", prd[i].code);
        printf("Veuillez entrer la quantité du produit: ");
        scanf("%d", &prd[i].quantete);
        printf("Veuillez entrer le prix du produit: ");
        scanf("%f", &prd[i].prix);
    }
}

 void Menu_Principal() {
    int choix;
    produit prd[50];
    int N = 0;  //

    do {
        printf("\n--- Menu Principal ---\n");
        printf("1. Ajouter un nouveau produit\n");
        printf("2. Rechercher un produit (pas encore implémenté)\n");
        printf("3. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajoute(prd, &N);
                break;
            case 2:

                printf("La recherche de produit n'est pas encore implémentée.\n");
                break;
            case 3:
                printf("Quitter le programme...\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 3);
}

int main() {
    Menu_Principal();
    return 0;
}
