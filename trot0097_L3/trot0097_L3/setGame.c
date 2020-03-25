#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "lab3.h"

int setGame() {
	int players;
	/*int deal;*/
	do {
		printf("Enter the number of players: \n");
		if(scanf("%d", &players) == 2){
			printf("Enter a valid number\n");
		}
		
	}while(getchar() != '\n' || players <= 1 || players > 4);
	
	return players;
}
int setHand(){
	int cardspp;
	do {
		printf("Enter the number of cards per player: \n");
		if(scanf("%d", &cardspp) == 2){
			printf("Enter a valid number\n");
		}
		
	}while(getchar() != '\n' || cardspp <= 0 || cardspp > 13);
	
	return cardspp;
}