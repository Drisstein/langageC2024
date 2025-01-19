#include <stdio.h>

void trouverMinEtMax(int arr[], int taille, int *min, int *max) {
    // Initialiser min et max aux premiers éléments du tableau
    *min = arr[0];
    *max = arr[0];

    // Parcourir le tableau pour trouver min et max
    for (int i = 1; i < taille; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int taille;

    printf("Entrez le nombre d'éléments dans le tableau : ");
    scanf("%d", &taille);

    int tableau[taille];

    // Demander à l'utilisateur d'entrer les valeurs
    printf("Entrez les valeurs du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Valeur %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    int min, max;
    trouverMinEtMax(tableau, taille, &min, &max);

    printf("Le minimum est : %d\n", min);
    printf("Le maximum est : %d\n", max);

    return 0;
}
