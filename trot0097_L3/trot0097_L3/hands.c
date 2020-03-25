#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "lab3.h"

int playGame(int numCards, int players){
	int i,j;
	int k=0;
	int deck[52] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52};
	Shuffle(deck, 52);
	
	for(i=1;i<=players;i++){
		printf("\nplayer %d\n",i);
		for(j=1;j<=numCards;j++){
			
			switch(deck[k]){
				case 1 :
					printf("AH ");
					break;
				case 2 :
					printf("2H ");
					break;
				case 3 :
					printf("3H ");
					break;
				case 4 :
					printf("4H ");
					break;
				case 5 :
					printf("5H ");
					break;	
				case 6 :
					printf("6H ");
					break;
				case 7 :
					printf("7H ");
					break;
				case 8 :
					printf("8H ");
					break;
				case 9:
					printf("9H ");
					break;
				case 10 :
					printf("10H ");
					break;
				case 11 :
					printf("JH ");
					break;
				case 12 :
					printf("QH ");
					break;
				case 13 :
					printf("KH ");
					break;
				case 14 :
					printf("AD ");
					break;
				case 15 :
					printf("2D ");
					break;
				case 16 :
					printf("3D ");
					break;
				case 17 :
					printf("4D ");
					break;
				case 18 :
					printf("5D ");
					break;	
				case 19 :
					printf("6D ");
					break;
				case 20 :
					printf("7D ");
					break;
				case 21 :
					printf("8D ");
					break;
				case 22 :
					printf("9D ");
					break;
				case 23 :
					printf("10D ");
					break;
				case 24 :
					printf("JD ");
					break;
				case 25 :
					printf("QD ");
					break;
				case 26 :
					printf("KD ");
					break;
				case 27 :
					printf("AC ");
					break;
				case 28 :
					printf("2C ");
					break;
				case 29 :
					printf("3C ");
					break;
				case 30 :
					printf("4C ");
					break;
				case 31 :
					printf("5C ");
					break;	
				case 32 :
					printf("6C ");
					break;
				case 33 :
					printf("7C ");
					break;
				case 34 :
					printf("8C ");
					break;
				case 35 :
					printf("9C ");
					break;
				case 36 :
					printf("10C ");
					break;
				case 37 :
					printf("JC ");
					break;
				case 38 :
					printf("QC ");
					break;
				case 39 :
					printf("KC ");
					break;
				case 40 :
					printf("AS ");
					break;
				case 41 :
					printf("2S ");
					break;
				case 42 :
					printf("3S ");
					break;
				case 43 :
					printf("4S ");
					break;
				case 44 :
					printf("5S ");
					break;	
				case 45 :
					printf("6S ");
					break;
				case 46 :
					printf("7S ");
					break;
				case 47 :
					printf("8S ");
					break;
				case 48 :
					printf("9S ");
					break;
				case 49 :
					printf("10S ");
					break;
				case 50 :
					printf("JS ");
					break;
				case 51 :
					printf("QS ");
					break;
				case 52 :
					printf("KS ");
					break;
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
			}
			k++;
		}
	}
	return 1;
}
void Shuffle(int *array, int n){
	srand(time(0));
	int i,j,tmp;
	for (i=n-1;i>0;i--){
		j = rand() % (i+1);
		tmp = array[j];
		array[j] = array[i];
		array[i] = tmp;
	}	
}