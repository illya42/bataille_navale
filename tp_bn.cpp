#include<stdio.h>
#include<stdlib.h>
#include "conio.c"
#include <time.h>

void Terrain(int taille1)
{
	int **tableau;
	
	tableau = (int**)malloc(sizeof(int*) * taille1);
    
    int(i);
	    for(i=0 ; i<taille1 ; i++)
	    {
	        tableau[i] = (int*)malloc(sizeof(int) * taille1);
	    }
     
    for(i=0 ; i<taille1 ; i++)
    {
        free(tableau[i]);
    }
    free(tableau);
}

/* AFFICHER LE TERRAIN
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[10][10]; // Initialisation du tableau
    int i, j;
    
    
    for (i=0; i<10; i++) // Remplissage du tableau
    {
        for (j=0; j<10; j++)
        {
            tableau[i][j]=0;
        }
    }
    
    
    for (i=0; i<10; i++) // Écriture du tableau sur la console
    {
        for (j=0; j<10; j++)
        {
            printf("%d\t", tableau[i][j]);
        }
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
*/


int main()
{
 int taille1;
//MENU
	
	printf("\n\t\t Bienvenue dans la bataille navale !");
    printf("\n\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t ________________________Regle du jeu :_________________________");
    printf("\n\t\t|                                                               |");
    printf("\n\t\t| - 3 bateaux par joueur                                        |");
    printf("\n\t\t| - Un point pour un coup toucher                               |");
    printf("\n\t\t| - Le joueur qui coule les 3 bateaux de son adversaire gagne ! |");
    printf("\n\t\t|_______________________________________________________________|");
    printf("\n\t\t\t\t\t\t\t\t\t GLHF!");
    int choix;
    do{
        printf("\n\t\t 1- Jouer ! \n");
        printf("\n\t\t 0- Quitter \n");
        printf("\n\t\t Votre choix ?\t");
        scanf("%d",&choix);
        switch(choix)
        {
            case 1:
                system("cls");
                printf("Chargement du niveau .");
                Sleep(300);
                system("cls");
                printf("Chargement du niveau ..");
                Sleep(300);
                system("cls");
                printf("Chargement du niveau ...");
                Sleep(300);
                system("cls");
                
                int taille1 = 9;
                
                Terrain(taille1);
            break; 
                
        }
    }while(choix != 0);
    //system( "CLS" );
	
return 0;
}


