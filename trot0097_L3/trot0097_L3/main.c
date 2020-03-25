#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "lab3.h"
int main(){
	int players = setGame();
	int cards = setHand();
	playGame(cards, players);
	return 1;
	
}
/*void playGame( int hands[][13] ) {
*	
}*/