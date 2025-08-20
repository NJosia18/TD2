
#include<stdio.h>
#include<stdlib.h>
#define N 50


void get_taille(int *n);
void remplissage_tab(int T[], int n);
void affichage_tab(int T[], int n);
int somme_tab(int T[], int n);
void result(int T[], int n);


int main ()
{
	int n,s,T[N];
	get_taille(&n);
	remplissage_tab(T, n);
	affichage_tab(T, n);
	somme_tab(T, n);
	result(T, n);


	return 0;
}

// saisir la taille du tableau, avec la condition qu'il ne dépasse pas 50.
void get_taille(int *n)
{
	int i;
	do
	{
	   i=0;
	   i++;
	   if(i>3)
	   {
	     exit (0);
	   }
	   printf("Veuillez entrer la taille du tableau:\n");
	   scanf("%d", n);


	}
	while(*n<1 || *n>50);
}
/*********************************************************************************/
// remplir le tableau T.
void remplissage_tab(int T[], int n)
{
	printf("Veuillez remplir les élements du tableau suivant:\n");
	int i=0;
	for(i=0; i<n; i++)
	{
	   printf("T[%d]=", i);
	   scanf("%d", T+i);
	}
}
/*******************************************************************************/
//Affichage du tableau.
void affichage_tab(int T[], int n)
{
	printf("Les élements du tableau sont:\n");
	int i=0;
	for(i=0; i<n; i++)
	{
	   printf("%d\n", *(T+i));
	}
}
/*******************************************************************************/
//Calcul somme du tableau.
int somme_tab(int T[], int n)
{
	int i=0, s=0;
	for(i=0; i<n; i++)
	{
	   s=s+T[i];
	}
	return s;
}
/*********************************************************************************/
// Affichage de  somme des élements du tableau.
void result(int T[], int n)
{
	int X=somme_tab(T, n);
	printf("La somme des élements vaut %d\n", X);
}
