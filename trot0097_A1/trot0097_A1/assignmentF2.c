#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assignment1.h"
/*initializes array*/

void firstOption(struct users *user){
	int tempA;
	int tempN;
	int i;
	printf("you pressed: 1\n");
			printf("Enter Area Code: ");
			scanf(" %d", &tempA);
			printf("Enter 7 digit number: ");
			scanf(" %d", &tempN);
			printf("your 10-digit phone number was: %d-%d\n",tempA, tempN);
			for(i=0;i<10;i++){
				if (user[i].area == tempA && user[i].number==tempN){
					printf("Phone number: %d-%d belongs to the Student %s, %s and his number is from %s \n",tempA,tempN,user[i].fname,user[i].lname,user[i].city);
				}
			}
}
void secondOption(struct users *user){
	int tempA;
	int i;
	printf("you pressed: 2\n");
			printf("Enter Area Code: ");
			scanf(" %d", &tempA);
			for(i=0;i<10;i++){
				if (user[i].area == tempA){
					printf("Phone number: %d-%d belongs to the Student %s, %s and his number is from %s \n",tempA,user[i].number,user[i].fname,user[i].lname,user[i].city);
				}
			}
}