#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assign2.h"

void addArea(Area* head){
	Area *newArea = malloc(sizeof(Area));
	
	if(newArea == NULL){
		printf("Something went wrong");
	}
	printf("Enter areaCode: ");
	scanf(" %d",&newArea->areaCode);
	printf("Enter areaName: ");
	scanf(" %s",newArea->areaName);
	newArea->nextArea=NULL;

	if(head->nextArea==NULL){
		head->nextArea=newArea;
	}else{
		Area *current = head;
		while(1==1){
			if(current->nextArea==NULL){
				current->nextArea = newArea;
                break;
			}
			current = current->nextArea;
		}
	}
}
void addPhEntry(PhEntry* head){
	PhEntry *newph = malloc(sizeof(PhEntry));
	
	if(newph == NULL){
		printf("Something went wrong");
	}
	printf("Enter areaCode: ");
	scanf(" %d",&newph->areaCode);
	printf("Enter phoneNumber: ");
	scanf(" %d",&newph->phoneNumber);
	printf("Enter lastName: ");
	scanf(" %s",newph->lastName);
	printf("Enter firstName: ");
	scanf(" %s",newph->firstName);
	newph->nextPhEntry=NULL;

	if(head->nextPhEntry==NULL){
		head->nextPhEntry=newph;
	}else{
		PhEntry *current = head;
		while(1==1){
			if(current->nextPhEntry==NULL){
				current->nextPhEntry = newph;
                break;
			}
			current = current->nextPhEntry;
		}
	}
}

void printArea(Area* head) {
	Area* current = head;
	int count;
	count=0;
	while (current != NULL) {
		count++;
		printf("\nArea#%d \n areaCode : %d\n areaName : %s\n", count, current->areaCode, current->areaName);
		current = current->nextArea;               
	} 
	printf("\nNumber of Area in the list %d: ", count);	
} 

void printPh(PhEntry* head) {
	PhEntry* current = head;
	int count2;
	count2=0;
	while (current != NULL) {
		count2++;
		printf("\nPhEntry#%d \n areaCode : %d\n phoneNumber : %d\n", count2, current->areaCode, current->phoneNumber);
		printf(" name(first + last) : %s %s\n",current->firstName, current->lastName);
		current = current->nextPhEntry;              
	} 
	printf("\nNumber of phonenumbers in the list %d: ", count2);	
}

void modPh(PhEntry* head) {
	int isin;
	int tempArea;
	int tempNum;
	char tempName[20];
	char choice = '0';
	PhEntry* current = head;
	isin=0;
	printf("press 1 to modify by phone number and 2 to modify by name(default by number): ");
	scanf(" %s",&choice);
	if (choice == '2'){
		printf("Search a lastName: ");
		scanf(" %s", tempName);
		while (current != NULL) {
			if(strcmp(current->lastName,tempName)==0){
				isin=1;
				printf("Edit lastName: ");
				scanf(" %s",current->lastName);
				printf("Edit firstName: ");
				scanf(" %s",current->firstName);
			}
			current = current->nextPhEntry;
		}
	}else{
		printf("Search areaCode: ");
		scanf(" %d",&tempArea);
		printf("Search phoneNumber: ");
		scanf(" %d",&tempNum);
		while (current != NULL) {
			if(current->areaCode == tempArea && current->phoneNumber==tempNum){
				isin=1;
				printf("Edit lastName: ");
				scanf(" %s",current->lastName);
				printf("Edit firstName: ");
				scanf(" %s",current->firstName);	
			}
		current = current->nextPhEntry;
		}
	}
	if(isin == 0){
		printf("No valid node");
	}

}
void delPh(PhEntry* head){
	PhEntry *current;
	int isin = 0;
	int tempArea;
	int tempNum;
	char choice;
	char tempName[20];
	current = head;
	printf("press 1 to modify by phone number and 2 to modify by name(default by number): ");
	scanf(" %s",&choice);
	if (choice == '2'){
		printf("Search a lastName: ");
		scanf(" %s", tempName);
		while (current->nextPhEntry != NULL) {
			if(strcmp(current->lastName,tempName)==0){
				isin=1;
				if(current == head){
					head=head->nextPhEntry;
				}else{
					current->nextPhEntry=current->nextPhEntry->nextPhEntry;
				}
			}
			current = current->nextPhEntry;
		}
	}else{
		printf("Search areaCode: ");
		scanf(" %d",&tempArea);
		printf("Search phoneNumber: ");
		scanf(" %d",&tempNum);
		while (current != NULL) {
			if(current->areaCode == tempArea && current->phoneNumber==tempNum){
				isin=1;
				if(current == head){
					head=head->nextPhEntry;
				}else{
					current->nextPhEntry=current->nextPhEntry->nextPhEntry;
				}
			}
			current = current->nextPhEntry;
		}
	}
	if(isin == 0){
		printf("No valid node");
	}

}

