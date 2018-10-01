#include<stdio.h>
#include<stdlib.h>
#include "conio.c"
#include <time.h>

void Terrain(int taille1)
{	
	// PARTIE AFFICHAGE [ PA ]

    int i, j;
    
    // PARTIE ALLOCATION MEMOIRE [ PM ]
    
    // [ PM ]
    
    int tab[9][9];
    
    int *tableau = & tab[9][9];
   
	tableau = (int*)malloc(sizeof(int) * taille1);
    /*
	for( i = 0 ; i < taille1 ; i++)
	{
	    tableau[i] = (int*)malloc(sizeof(int) * taille1);
	}
    */
	// [ PA ]
    
    for ( i = 0 ; i <= taille1 ; i++ ) // Remplissage du tableau
    {
        for ( j = 0 ; j <= taille1 ; j++ )
        {
    		tab[i][j]=0;
        }
    }
    
    for ( i = 0 ; i <= taille1 ; i++ )
    {
			tab[i][0] = i;
			tab[0][i] = i;
	}
    
    for ( i = 0 ; i <= taille1 ; i++ ) // Écriture du tableau sur la console
    {
        for ( j = 0 ; j <= taille1 ; j++ )
        {
    		printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
    
}

void Bateaux(int tab[9][9], int bateau1x, int bateau1y, int bateau11x, int bateau11y, int bateau2x, int bateau2y, int bateau22x, int bateau22y, int bateau3x, int bateau3y, int bateau33x, int bateau33y)
{
	
	printf("Donner la position de la tete du bateau 1 ( 2 cases ) : ");
	scanf("%d,%d", & tab[bateau1x][bateau1y]);
    printf("Donner la position de la fin du bateau 1 ( 2 cases ) : ");
    scanf("%d,%d", & tab[bateau11x][bateau11y]);
    
    printf("Donner la position de la tete du bateau 2 ( 3 cases ) : ");
	scanf("%d,%d", & tab[bateau2x][bateau2y]);
    printf("Donner la position de la fin du bateau 2 ( 3 cases ) : ");
    scanf("%d,%d", & tab[bateau22x][bateau22y]);
    
    printf("Donner la position de la tete du bateau 3 ( 4 cases ) : ");
	scanf("%d,%d", & tab[bateau3x][bateau3y]);
    printf("Donner la position de la fin du bateau 3 ( 4 cases ) : ");
    scanf("%d,%d", & tab[bateau33x][bateau33y]);
    
    system("cls");
    printf("La partie peut commencée !");
    system("cls");
}

void Bateaux_ennemis(bateau_e1, bateau_e11, bateau_e2, bateau_e22, bateau_e3, bateau_e33)
{
	printf("Chargement de l'ordinateur' .");
    Sleep(300);
    system("cls");
    printf("Chargement de l'ordinateur' ..");
    Sleep(300);
    system("cls");
    printf("Chargement de l'ordinateur' ...");
    Sleep(300);
	
	bateau_e1 = 	2;
    bateau_e11 = 	(int)(rand()%8);
    bateau_e2 = 	4;
    bateau_e22 = 	(int)(rand()%8);
    bateau_e3 = 	7;
    bateau_e33 = 	(int)(rand()%8);
}

int main()
{
 int taille1;
 
 int bateau1, bateau11, bateau2, bateau22, bateau3, bateau33, bateau_e1, bateau_e11, bateau_e2, bateau_e22, bateau_e3, bateau_e33;
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
                
                int taille1 = 8;
                
                Bateaux(tab[9][9], bateau1x, bateau1y, bateau11x, bateau11y, bateau2x, bateau2y, bateau22x, bateau22y, bateau3x, bateau3y, bateau33x, bateau33y);
                
                Terrain(taille1);
                
                
            break; 
                
        }
    }while(choix != 0);
    //system( "CLS" );
	
return 0;
}

/*
for( i = 0 ; i < taille1 ; i++ )
    {
        free(tableau[i]);
    }
    free(tableau);
*/

