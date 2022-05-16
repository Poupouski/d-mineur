#include<stdio.h>
#define TAILLE 10

char pion(int p){
	if(p==0){
		return ' ';
	}
	if(p==1){
		return 'X';
	}
	if(p==2){
		return '_';
	}
	if(p==3){
		return 'O';
	}
	else{
		printf("Erreur");
		return 'E';
	}
}

void placer_bateau(int plateau[TAILLE][TAILLE]){
	char col;
	int lig;
	printf("Emplacement du bateau: ");
	printf("\nLettre: ");
	scanf("%c";&col);
	printf("\nNombre: ");
	scanf("%d";&lig);
	
}
	
	



void affiche_plateau(int plateau [TAILLE] [TAILLE]){
	char c;
	int i,j;
	printf("    ");
	for(c='A';c<'K';c++){
		printf("%c ",c);
	}
	printf("\n");
	printf("    ");
	for(i=0;i<TAILLE;i++){
		printf("_ ");
	}
	
	
	
	
	printf("\n");
	for(i=0;i<TAILLE;i++){
		if(i==TAILLE-1){
			printf("\n%d|",i+1);
		
		}
		else{
			printf("\n%d |",i+1);
		}
		for(j=0;j<TAILLE;j++){
			printf(" %c",pion(plateau[i][j]));
		}
	
	}
	printf("\n");

}

	

int main(){
	int plateau_joueur[TAILLE][TAILLE]={0};
	int plateau_adversaire[TAILLE][TAILLE]={0};
	
	affiche_plateau(plateau_joueur);
	printf("%c",pion(3));
	





	return 0;
}















#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char JEU[10][10];
char mine[10][10];
int i,j;


void GRILLEdeb(){
    printf("   A B C D E F G H I J\n");
    for(i=0;i<10;i++){
        printf("%d |",i);
        for(j=0;j<10;j++){
            printf("%c|",JEU[i][j]);
        }
        printf("\n");
    }
}











int main(){
    int c=10;
    int i,j;
    srand(time(NULL));
    
    for(i=0;i<10;i++){
        for(int j=0;j<10;j++){
            JEU[i][j]='~';
            mine[i][j]='0';
        }
    }
    
    for(i=0;i<c;i++){
        i=rand()%10;
        j=rand()%10;
        if(mine[i][j]=='0'){
            mine[i][j]='M';
        }
        else{
            c++;
        }
   }
   
    
    GRILLEdeb();
    printf("\n\n");
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf(" %c",mine[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}




