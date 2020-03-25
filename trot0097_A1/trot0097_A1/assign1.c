#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assignment1.h"

int main(){
	/*Declare array of users*/
	struct users user[10];
	
	/*populate users*/
	user[0].area=613;
	user[0].number=6972640;
	strcpy(user[0].fname, "Joseph");
	strcpy(user[0].lname, "Trottier");
	strcpy(user[0].city, "Ottawa");
	
	user[1].area=416;
	user[1].number=2223333;
	strcpy(user[1].fname, "Bob");
	strcpy(user[1].lname, "Bobby");
	strcpy(user[1].city, "Toronto");
	
	user[2].area=647;
	user[2].number=6666666;
	strcpy(user[2].fname, "Gabab");
	strcpy(user[2].lname, "Tabby");
	strcpy(user[2].city, "Toronto");
	
	user[3].area=519;
	user[3].number=6676666;
	strcpy(user[3].fname, "Henry");
	strcpy(user[3].lname, "Sentry");
	strcpy(user[3].city, "Windsor");
	
	user[4].area=905;
	user[4].number=6677777;
	strcpy(user[4].fname, "Mike");
	strcpy(user[4].lname, "Hieght");
	strcpy(user[4].city, "Niagra");
	
	user[5].area=613;
	user[5].number=4568921;
	strcpy(user[5].fname, "Pat");
	strcpy(user[5].lname, "Star");
	strcpy(user[5].city, "Ottawa");
	
	user[6].area=416;
	user[6].number=2223443;
	strcpy(user[6].fname, "bobbette");
	strcpy(user[6].lname, "Bobby");
	strcpy(user[6].city, "Toronto");
	
	user[7].area=647;
	user[7].number=6666667;
	strcpy(user[7].fname, "Simmons");
	strcpy(user[7].lname, "Tom");
	strcpy(user[7].city, "Toronto");
	
	user[8].area=519;
	user[8].number=6676676;
	strcpy(user[8].fname, "Blight");
	strcpy(user[8].lname, "Ganon");
	strcpy(user[8].city, "Windsor");
	
	user[9].area=905;
	user[9].number=6677447;
	strcpy(user[9].fname, "Might");
	strcpy(user[9].lname, "Guy");
	strcpy(user[9].city, "Niagra");
	char choice;
	do {
		printf("Choose one of the five following options:\n ");
		printf("press [1] to get information based on phone number: \n ");
		printf("press [2] to get information based on Area Code: \n ");
		printf("press [3] to get information based on Last Name: \n ");
		printf("press [4] to print all area-code information: \n ");
		printf("press [q] to quit: \n ");
		scanf(" %s", &choice);
		if(choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != 'q'){	
		choice = getchar();
		printf("not a valid choice please input 1,2,3,4 or q\n ");
		printf("press enter to continue:\n");
		while(getchar() != '\n')
			;
		}
		if (choice == '1'){
			/*
			If you choose option 1 you
			will have to enter 3 digit area code
			+7 digit phone number to get
			the details of that student
			*/
			firstOption(user);
			choice = getchar();
			printf("press enter to continue:\n");
			while(getchar() != '\n')
				;
			
		}
		else if(choice == '2'){
			/*
			If you choose option 2 you
			will have to enter 3 digit
			area code to get the details
			of all the students who have
			phone numbers with that area code
			*/
			secondOption(user);
			choice = getchar();
			printf("press enter to continue:\n");
			while(getchar() != '\n')
				;
		}
		else if(choice == '3'){
			/*
			If you choose option 3 you
			will have to enter last name
			of the student to get the
			details of that student.
			*/
			thirdOption(user);
			choice = getchar();
			printf("press enter to continue:\n");
			while(getchar() != '\n')
				;
		}
		else if(choice == '4'){
			/*
			If you choose option 4 you
			will get the details of all
			the listed area codes.
			*/
			fourthOption();
			choice = getchar();
			printf("press enter to continue:\n");
			while(getchar() != '\n')
				;
		}
		/*
		Enter 'q' to quit you're program
		*/
	}while(choice != 'q');
return 1;
}