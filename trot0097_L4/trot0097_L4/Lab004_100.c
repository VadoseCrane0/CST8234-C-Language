#include <stdio.h>
#define SIZE 100
#define EXIT_SUCCESS 1
int toggle_door(char[]);
int doors_state(char[]);

int main(){
	char array[SIZE];
	int i;
	for (i=0;i<SIZE;i++){
		array[i] = '0';
	}
	toggle_door(array);
	doors_state(array);
	printf("test1");
	/*
	printf("test1");
	toggle_door(array);
	printf("test2");
	doors_state(array);
	printf("test3");
	
	
	return EXIT_SUCCESS;
}
*/
return 0;
}
int toggle_door(char a[]){
	int i,j;
	for(i=1;i<=SIZE;i++){
		for(j=i-1; j<SIZE;j+=i){
			if(a[j]=='0'){
				a[j]='1';
			}else{
				a[j]='0';
			}
		}
	}
	return 0;
}

int doors_state( char a[]){
	int i;
	for(i=0;i<SIZE;i++){
		printf(" %c",a[i]);
	}
	return 0;
}