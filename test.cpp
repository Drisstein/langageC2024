/*
 Exercice 1
 Ecrire un algoritme permettant de remplir un tableau de réels et– 
 d’afficher la somme de ses éléments;
 – d’afficher le plus grand élément;
 – d’afficher l’index d’un élément si cet élément appartient au tableau et 
 d’afficher-1 si cet élément n’appartient pas au tableau
*/
#include <stdio.h>

int main () {
	int N;
	printf("Entrer la taille du Tableau:");
	scanf("%d",&N);
	
	int tab[N];
	int somme=0; 
	int max=tab[0];
	int min=tab[0];
	for (int i=0;i<N;i++) {
		printf("Entrer T[%d]:",i+1);
		scanf("%d",&tab[i]);
		somme+=tab[i];
			max=tab[i];
		if (tab[i]<min) 
			min=tab[i];
	};
	
	
	printf("Tableau initial: ");
	for (int i=0;i<N;i++) {
		printf("%d", tab[i]);
		printf(" ");
	}
	printf("\nLa somme total est : %d\n",somme);
	printf("Le plus grand element est :%d\n",max);
	printf("Le plus petit element est :%d\n",min);
	
	return 0;
}