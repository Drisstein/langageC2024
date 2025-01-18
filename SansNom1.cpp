#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int hauteur;

    printf("Entrer la hauteur : ");
    scanf("%d", &hauteur);

    // Premier rectangle
    for (int i = 1; i <= hauteur; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    // Triangle isocèle
    for (int k = 1; k <= hauteur; k++) {
        for (int k1 = 1; k1 <= hauteur - k; k1++) {
            printf(" ");
        }
        for (int k2 = 1; k2 <= (2 * k - 1); k2++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
