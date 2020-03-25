#include <stdio.h>

int main(){
	
	char phone[7];
	int done = 0;
	int i;
	do {
		printf("enter phone number: ");
		scanf("%s", phone);
		if (phone[0] == '1' || (phone[0] == '0' && phone[1] != '\0')){
			printf("invalid number: %s\n", phone);
		}else if (phone[0]=='0' && phone[1] == '\0'){
			done = 1;
		}else if ((phone[0] > '0' && phone[0] <= '9') && (phone[1] >= '0' && phone[1] <= '9') && (phone[2] >= '0' && phone[2] <= '9') && (phone[3] >= '0' && phone[3] <= '9') && (phone[4] >= '0' && phone[4] <= '9') && (phone[5] >= '0' && phone[5] <= '9') && (phone[6] >= '0' && phone[6] <= '9')){
			printf("%c%c%c-%c%c%c%c\n",phone[0],phone[1],phone[2], phone[3],phone[4],phone[5], phone[6]);
		}else{
			printf("not a phone number: %s\n", phone);
		}
		for(i=0;i<7;i++){
			phone[i] = '\0';
		}
	
	}while(done !=1);
	
	
	
	
	return 0;
}