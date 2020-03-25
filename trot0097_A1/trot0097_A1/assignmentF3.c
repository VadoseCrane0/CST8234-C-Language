#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assignment1.h"
void thirdOption(struct users *user){
	int i;
	char tempNa[20];
	printf("you pressed: 3\n");
			printf("Enter the last name of the student: ");
			scanf(" %s", tempNa);
			for(i=0;i<10;i++){
				if (strcmp(tempNa, user[i].lname) == 0){
					printf("Phone number: %d-%d belongs to the Student %s, %s and his number is from %s \n",user[i].area,user[i].number,user[i].fname,user[i].lname,user[i].city);
				}
			}
}
void fourthOption(){
	printf("you pressed: 4\n");
			printf("Ottawa has Area Code: 613\n");
			printf("Toronto has Area Code: 416 and 647\n");
			printf("Windsor has Area Code: 519\n");
			printf("Niagra has Area Code: 905\n");
}