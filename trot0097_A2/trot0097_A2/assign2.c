#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assign2.h"

int main(){
	Area* aHead = NULL;
	PhEntry* pHead = NULL;
	char choice;
	int count=0;
	float count2=0;
	
	

	while(choice != 'q') {
		printf("\nChoose one of the following options: \n");
		printf("Press [1] to Enter Area information: \n");
		printf("Press [2] to Enter PhoneBook Entry: \n");
		printf("Press [3] to Modify an existing PhoneBook Entry: \n");
		printf("Press [4] to Delete an existing PhoneBook Entry: \n");
		printf("Press [5] to Delete an unused Area using doubly link list:\nPress [q] to quit: \n");
		scanf(" %s", &choice);
		
		if(choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != 'q'){	
			choice = getchar();
			printf("not a valid choice please input 1,2,3,4,5 or q\n ");
			printf("press enter to continue:\n");
			while(getchar() != '\n')
				;
		}
		switch(choice){
			
			/*
			If you choose option 1 you will have to enter 3 digit area code
			+ area description. Insert each area node at the end of the 
			area link list and print as detailed above.
			*/
			case '1' :
				count++;
				if(count == 1){
					aHead = malloc(sizeof(Area));
					printf("Enter areaCode: ");
					scanf(" %d",&aHead->areaCode);
					printf("Enter areaName: ");
					scanf(" %s",aHead->areaName);
					aHead->nextArea=NULL;
					printArea(aHead);
				}else{
					addArea(aHead);
					printArea(aHead);
				}
				break;
			/*
			If you choose option 2 you have to enter 3 digit area
			code +7 digit phone number and last name and first 
			name of the person. Insert each PhEntry node at the 
			beginning of the PhEntry link list and print as detailed above.
			*/
			case '2' :
				count2++;
				printf("%f", count2);
				if(count2 == 1){
					pHead = malloc(sizeof(PhEntry));
					printf("Enter areaCode: ");
					scanf(" %d",&pHead->areaCode);
					printf("Enter phoneNumber: ");
					scanf(" %d",&pHead->phoneNumber);
					printf("Enter lastName: ");
					scanf(" %s",pHead->lastName);
					printf("Enter firstName: ");
					scanf(" %s",pHead->firstName);
					pHead->nextPhEntry=NULL;
					printPh(pHead);
				}else{
					addPhEntry(pHead);
					printPh(pHead);
				}
				break;
			/*
			If you choose option 3 you will be able to modify an existing
			phone book entry based on:
			a. 3 digit area code +7 digit phone number or
			b. last name of the person
			*/
			case '3' :
				modPh(pHead);
				printPh(pHead);
				break;
			/*
			If you choose option 4 you will be able to delete
			an existing phone book entry based on:
			a. 3 digit area code +7 digit phone number or
			b. last name of the person
			*/
			case '4' :
				delPh(pHead);
				printf("\nEntry deleted\n");
				break;
				
			/*
			If you choose option 5, you will be asked to provide
			a. an existing area code or
			
			b. an Area Description.
			
			c. If the area code exists in any of person’s Phone 
			book entry then you will be informed: this area is
			use and cannot be deleted. Otherwise, you may delete that.
			
			d. If the area description uses multiple area code 
			(Toronto has more than one area code), you have to
			inform that and ask for which area code
			
			e. You have to implement this using doubly link list and
			
			
			f. This a bonus option worth 5 marks
			*/
			case '5' :
				printf("you pressed 5 this function doesnt work right now. Thank you.");
				break;
		}
	}
	
	return 1;
}