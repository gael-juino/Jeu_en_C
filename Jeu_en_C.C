#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
int allumette = 20;
int choixJ = 0;
int choixIA;
int tour = 100;
int i=0, n=1;

printf("|============================================================================|\n");
printf("| Vous commencez avec 20 alumettes le but est de ne pas prendre la derniere. |\n");
printf("| Vous allez joue chacun votre tour et enlever des alumettes 1, 2 ou 3.      |\n");
printf("| Mais vous etes obliger de retirer au moins une allumette à chaque tour.    |\n");
printf("| Maintenant le jeu vas pouvoir commencer, bonne chance a vous.              |\n");
printf("| (meme si je pense que vous ne nous batrez jamais...).                      |\n");
printf("|============================================================================|\n");

printf("Allumettes restant(s) : %d\n",allumette);
while( allumette >= 0 ){
	
	
	printf("Combien d'allumette(s) voulez vous enlever 1 , 2 ou 3\n");
	scanf("%d",&choixJ);

	       if (choixJ == 3){	       	

	         			allumette-=choixJ;
	         			printf("Vous avez enlever 3 allumettes\n");
	         			printf("Allumettes restant(s) : %d\n",allumette);
	        }
	       if (choixJ == 2){

	         			allumette-=choixJ;
	         			printf("Vous avez enlever 2 allumettes\n");
	         			printf("Allumettes restant(s) : %d\n",allumette);
	        }
	        if (choixJ == 1){

	         			allumette-=choixJ;
	         			printf("Vous avez enlever 1 allumette\n");
	         			printf("Allumettes restant(s) : %d\n",allumette);
	        }

	for( choixIA = i ; choixIA < n ; choixIA++ ){
        printf("%d\n", rand() % 4);


	}

	        if (choixIA == 3){	       	

	         			allumette-=choixIA;
	         			printf("Nous avons enlever 3 allumettes\n");
	         			printf("Allumettes restant(s) : %d\n",allumette);
	        }
	       if (choixIA == 2){

	         			allumette-=choixIA;
	         			printf("Nous avons enlever 2 allumettes\n");
	         			printf("Allumettes restant(s) : %d\n",allumette);
	        }
	        if (choixIA == 1){

	         			allumette-=choixIA;
	         			printf("Nous avons enlever  1 allumette\n");
	         			printf("Allumettes restant(s) : %d\n",allumette);
	        }


			if (allumette==20)
			{
				printf("| | | | | | | | | | | | | | | | | | | |\n");
			}
			if (allumette==19)
			{
				printf("| | | | | | | | | | | | | | | | | | | \n");
			}
			if (allumette==18)
			{
				printf("| | | | | | | | | | | | | | | | | | \n");
			}
			if (allumette==17)
			{
				printf("| | | | | | | | | | | | | | | | | \n");
			}
			if (allumette==16)
			{
				printf("| | | | | | | | | | | | | | | |\n");
			}
			if (allumette==15)
			{
				printf("| | | | | | | | | | | | | | |\n");
			}
			if (allumette==14)
			{
				printf("| | | | | | | | | | | | | |\n");
			}
			if (allumette==13)
			{
				printf("| | | | | | | | | | | | |\n");
			}
			if (allumette==12)
			{
				printf("| | | | | | | | | | | |\n");
			}
			if (allumette==11)
			{
				printf("| | | | | | | | | | |\n");
			}
			if (allumette==10)
			{
				printf("| | | | | | | | | |\n");
			}
			if (allumette==9)
			{
				printf("| | | | | | | | | \n");
			}
			if (allumette==8)
			{
				printf("| | | | | | | | \n");
			}
			if (allumette==7)
			{
				printf("| | | | | | | \n");
			}
			if (allumette==6)
			{
				printf("| | | | | |\n");
			}
			if (allumette==5)
			{
				printf("| | | | |\n");
			}
			if (allumette==4)
			{
				printf("| | | |\n");
			}
			if (allumette==3)
			{
				printf("| | |\n");
			}
			if (allumette==2){
				
				printf("| |\n");

				//CHOIX JOUEUR//
				if (choixJ==3){
					printf("Vous ne pouvez pas enlever 3 allumettes\n");
					printf("Allumettes restant(s) : %d\n",allumette);
					printf("%d\n", allumette);
					scanf("%d",&choixJ);
				}


				//CHOIX IA//
				if (choixIA==3){
					scanf("%d",&choixIA);
				}
			}

			if (allumette==1){
				
				printf("|\n");

				//CHOIX JOUEUR//
				if (choixJ==3){
					printf("Vous ne pouvez pas enlever 3 allumettes\n");
					printf("Allumettes restant(s) : %d\n",allumette);
					printf("%d\n", allumette);
					scanf("%d",&choixJ);
				}
				if (choixJ==2){
					printf("Vous ne pouvez pas enlever 2 allumettes\n");
					printf("Allumettes restant(s) : %d\n",allumette);
					printf("%d\n", allumette);
					scanf("%d",&choixJ);
				}
				if (choixJ==1){
					printf("Vous avez perdu, je me disez bien qu'elle etais imbatable.\n");
					printf("Toujours pareil avec c'est humain. \n");
				}


				//CHOIX IA//
				if (choixIA==3){
					scanf("%d",&choixIA);
					
				}
				if (choixIA==2){
					scanf("%d",&choixIA);
				}
				if (choixIA==1){
					printf("Vous avez gagner, c'etais pas si dur si ?\n");
					printf("Qui a dit que les IA etais imbatable ?\n");
				}
				
			}
			if (allumette==0){
			    printf("|=========================|\n");
				printf("|      Partie terminer    |\n");
				printf("|=========================|\n");
				return 1;
			}
	}
	return 0;     
}