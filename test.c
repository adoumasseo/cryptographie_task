#include <stdio.h>

int main() {
    char maChaine[100];  // Déclaration d'un tableau de caractères pour stocker la chaîne

    printf("Entrez une chaîne de caractères : ");
    
    // Utilisation de fgets pour récupérer la chaîne
    fgets(maChaine, sizeof(maChaine), stdin);

    // Affichage de la chaîne
    printf("Vous avez saisi : %s", maChaine);

    return 0;
}
