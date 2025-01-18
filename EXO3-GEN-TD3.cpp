#include <stdio.h>

int main() {
    int N;
    printf("Entrer la taille du Tableau : ");
    scanf("%d", &N);

    float tab[N];
    float somme = 0;
    float max;
    int index;

    // Remplir le tableau et calculer la somme
    for (int i = 0; i < N; i++) {
        printf("Entrer T[%d] : ", i + 1);
        scanf("%f", &tab[i]);
        somme += tab[i];
        if (i == 0) {
            max = tab[i];
        } else {
            if (tab[i] > max) {
                max = tab[i];
            }
        }
    }

    printf("Tableau initial : ");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", tab[i]);
    }
    printf("\nLa somme totale est : %.2f\n", somme);
    printf("Le plus grand élément est : %.2f\n", max);

    // Rechercher l'index d'un élément donné
    float element;
    printf("Entrer l'élément à rechercher : ");
    scanf("%f", &element);

    index = -1;
    for (int i = 0; i < N; i++) {
        if (tab[i] == element) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("L'élément %.2f se trouve à l'index %d\n", element, index);
    } else {
        printf("L'élément %.2f n'appartient pas au tableau\n", element);
    }

    return 0;
}
