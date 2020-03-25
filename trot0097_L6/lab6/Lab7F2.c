#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab7.h"

void firstOption(struct Student student[], int temp){
	char choice;
	int done =0;
				while (!done){
					printf(" Enter student number:\n ");
					scanf("%s",student[temp].studentID);
					if ((student[temp].studentID[0] > '0' && student[temp].studentID[0] <= '9') && (student[temp].studentID[1] >= '0' && student[temp].studentID[1] <= '9') && (student[temp].studentID[2] >= '0' && student[temp].studentID[2] <= '9') && (student[temp].studentID[3] >= '0' && student[temp].studentID[3] <= '9') && (student[temp].studentID[4] >= '0' && student[temp].studentID[4] <= '9') && (student[temp].studentID[5] >= '0' && student[temp].studentID[5] <= '9') && (student[temp].studentID[6] >= '0' && student[temp].studentID[6] <= '9') && (student[temp].studentID[7] >= '0' && student[temp].studentID[7] <= '9')){
						done=1;
					}else{
						printf("not a valid student id: %s\n", student[0].studentID);
					}
					while(getchar() != '\n')
						;
				}
				printf("\n Enter student firstname:");
				scanf(" %s",student[temp].firstname);
				while(getchar() != '\n')
					;
				printf(" Enter student lastname: ");
				scanf(" %s",student[temp].lastname);
				while(getchar() != '\n')
					;
				done=0;
				while (!done){
					printf(" Enter student course marks: ");
					scanf(" %s",student[temp].courseMarks);
					if ((student[temp].courseMarks[0] >= '0' && student[temp].courseMarks[0] <= '9') && (student[temp].courseMarks[1] >= '0' && student[temp].courseMarks[1] <= '9')){
						done=1;
					}else{
						printf("\n please enter a number");
					}
					while(getchar() != '\n')
						;
				}
}

void secondOption(struct Course course[], int temp){
	char choice;
	printf(" Enter course ID: ");
	scanf(" %s",course[temp].courseID);
	choice = getchar();
	printf("press enter to continue:\n");
	while(getchar() != '\n')
		;
	printf(" Enter course title: ");
	scanf(" %s",course[temp].courseTitle);
	choice = getchar();
	printf("press enter to continue:\n");
	while(getchar() != '\n')
		;
}