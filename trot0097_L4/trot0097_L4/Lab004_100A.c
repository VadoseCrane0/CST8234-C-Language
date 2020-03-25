#include <stdio.h>
#define SIZE 100
#define EXIT_SUCCESS 1
int toggle_door(char[]);
int doors_state(char[]);
/*main method initiates array and calls toggle_door and doors_states*/
int main(){
	char array[SIZE];
	int i;
	for (i=0;i<SIZE;i++){
		array[i] = 'C';
	}
	toggle_door(array);
	doors_state(array);
return EXIT_SUCCESS;
}
/*toggles the doors to open and close*/
int toggle_door(char a[]){
	int i,j;
	for(i=1;i<=SIZE;i++){
		for(j=i-1; j<SIZE;j+=i){
			if(a[j]=='C'){
				a[j]='O';
			}else{
				a[j]='C';
			}
		}
	}
	return 0;
}
/* prints the state of the doors*/
int doors_state( char a[]){
	int i;
	printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n-----------------------------------\n ",0,1,2,3,4,5,6,7,8,9,10);
	for(i=0;i<SIZE;i+=10){
		printf("%d  %c  %c  %c  %c  %c  %c  %c  %c  %c  %c\n",i,a[i],a[i+1],a[i+2],a[i+3],a[i+4],a[i+5],a[i+6],a[i+7],a[i+8], a[i+9]);
	}
	return 0;
}