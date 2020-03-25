#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab7.h"

int main(){
	int i;
	int j;
	int temp = 0;
	int test = 0;
	int done=0;
	struct Student student[20];
	struct Course course[20];
	char choice;
	do {
		printf("Choose one of the five following options:\n ");
		printf("press [1] to enter the details of a student \n ");
		printf("press [2] to enter the details of a course \n ");
		printf("press [3] to Register a student to a course: \n ");
		printf("press [4] to Modify registration of a student \n ");
		printf("press [5] to Edit a student record \n ");
		printf("press [6] to Edit a course record \n ");
		printf("press [7] to Display student record by \n ");
		printf("press [8] to Display course record by: \n ");
		printf("press [q] to quit: \n ");
		scanf(" %s", &choice);
		
		if(choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' && choice != '7' && choice != '8' && choice != 'q'){	
		choice = getchar();
		printf("not a valid choice please input 1,2,3,4,5,6,7,8 or q\n ");
		printf("press enter to continue:\n");
		while(getchar() != '\n')
			;
		}
		
		if (choice == '1'){
			if (temp < 20){
				firstOption(student, temp);
				temp++;
			}else{
				printf("Cannot add another student.");
			}
		}
		else if(choice == '2'){
			if (test < 20){
				secondOption(course, test);
				test++;
			}else{
				printf("Cannot add another student.");
			}
		}
		else if(choice == '3'){
			char tempstudentID[8];
			char tempcoursecode[20];
			printf("Enter a studentID: ");
			scanf(" %s", tempstudentID);
			for(i=0;i<20;i++){
				if (strcmp(student[i].studentID , tempstudentID)==0){
					printf("Enter a course code\n");
					scanf(" %s", tempcoursecode);
					for(j=0;j<20;j++){
						if (course[j].courseID == tempcoursecode){
							student[i].courses = course[j];
							course[j].courseTotal++;
						}
					}
				}
			}
			while(getchar() != '\n')
				;
		}
		else if(choice == '4'){
			char tempstudentID[8];
			char tempcoursecode[20];
			printf("Enter a studentID\n");
			scanf(" %s", tempstudentID);
			for(i=0;i<20;i++){
				if (strcmp(student[i].studentID , tempstudentID)==0){
					printf("Enter a course code\n");
					scanf(" %s", tempcoursecode);
					for(j=0;j<20;j++){
						if (course[j].courseID == tempcoursecode){
							student[i].courses = course[j];
							course[j].courseTotal++;
						}
					}
				}
			}
			choice = getchar();
			printf("press enter to continue:\n");
			while(getchar() != '\n')
				;
		}else if(choice == '5'){
			char tempstudentID[8];
			printf("Enter a studentID\n");
			scanf(" %s", tempstudentID);
			for(i=0;i<20;i++){
				if (strcmp(student[i].studentID, tempstudentID)==0){
					while (!done){
					printf(" Enter student course marks: ");
					scanf(" %s",student[temp].courseMarks);
					if ((student[temp].courseMarks[0] >= '0' && student[temp].courseMarks[0] <= '9') && (student[temp].courseMarks[1] >= '0' && student[temp].courseMarks[1] <= '9')){
						done=1;
					}else{
						printf("\n please enter a number");
					}
					choice = getchar();
					printf("press enter to continue:\n");
					while(getchar() != '\n')
						;
				}
				}
			}
			
			
		}else if(choice == '6'){
			char tempcoursecode[20];
			printf(" Enter course ID: ");
			scanf(" %s",tempcoursecode);
			for(i=0;i<20;i++){
				if (strcmp(course[i].courseID, tempcoursecode)==0){
					printf(" Enter course title: ");
					scanf(" %s",course[temp].courseTitle);
					choice = getchar();
					printf("press enter to continue:\n");
					while(getchar() != '\n')
						;
				}
			}
			
		}else if(choice == '7'){
			printf("%s\n", student[0].courses.courseID);
			char tempstring[8];
			char nulls[] = "null";
			printf("Enter a student id, name, or type null to print all students: ");
			scanf(" %s",tempstring);
			for(i=0;i<temp;i++){
				if (strcmp(tempstring, student[i].studentID)==0){
					printf("StudentID: %s\n",student[i].studentID );
					printf("firstname: %s\n",student[i].firstname );
					printf("lastname: %s\n",student[i].lastname );
					printf("course marks: %s\n",student[i].courseMarks );
				}else if(strcmp(tempstring,student[i].firstname)==0){
					printf("StudentID: %s\n",student[i].studentID );
					printf("firstname: %s\n",student[i].firstname );
					printf("lastname: %s\n",student[i].lastname );
					printf("course marks: %s\n",student[i].courseMarks );
				}else if(strcmp(tempstring,student[i].lastname)==0){
					printf("StudentID: %s\n",student[i].studentID );
					printf("firstname: %s\n",student[i].firstname );
					printf("lastname: %s\n",student[i].lastname );
					printf("course marks: %s\n",student[i].courseMarks );
				}else if(strcmp(tempstring, nulls)==0){
					printf("StudentID: %s\n",student[i].studentID );
					printf("firstname: %s\n",student[i].firstname );
					printf("lastname: %s\n",student[i].lastname );
					printf("course marks: %s\n",student[i].courseMarks );
				}else{
					printf("something went wrong %s %s \n",student[i].studentID,tempstring );
				}
				
			}
		}else if(choice == '8'){
			char tempstring[8];
			char nulls[] = "null";
			printf("Enter a course id, name, or type null to print courses without students: ");
			scanf(" %s",tempstring);
			for(i=0;i<temp;i++){
				if (strcmp(tempstring, course[i].courseID)==0){
					printf("StudentID: %s\n",course[i].courseID );
					printf("firstname: %s\n",course[i].courseTitle );
				}else if(strcmp(tempstring,nulls)==0){
					for(j=0;j<20;j++){
						if(course[i].courseTotal>0){
							printf("StudentID: %s\n",course[i].courseID );
							printf("firstname: %s\n",course[i].courseTitle );
						}
					}
				}else{
					printf("something went wrong %s %s \n",student[i].studentID,tempstring );
				}
				
			}
			
			
			
		}
		/*
		Enter 'q' to quit you're program
		*/
	}while(choice != 'q');
return 1;
}