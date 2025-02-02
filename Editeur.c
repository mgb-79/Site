#include <stdio.h>

void creerFichier(char nom[]) {
    FILE * fichier;
    fichier = fopen(nom,"a");
    fclose(fichier);
    printf("Le fichier a été créé avec succès.\n");
}

void modifierFichier(char nom[],char contenu[]) {
    FILE * fichier;
    fichier = fopen(nom,"w");
    fprintf(fichier,contenu);
    fclose(fichier);
    printf("Contenu ajouté !\n");
}
    
 int main() {
    char nom[100],contenu[10000];
    printf("Bienvenue dans cet éditeur de texte. Pour commencez veuillez choisir un nom :\n");
    scanf("%s",nom);
    creerFichier(nom);
    printf("A présent, veuillez saisir le contenu désiré de votre fichier :\n");
    scanf("%s",contenu);
    modifierFichier(nom,contenu);
    printf("Au revoir.\n")
    return 0;
}