#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int * p;
	int * q;
	x=5;
	p = &x;
	printf("---------------------------------------\nFUNCTION main( ):\n");
	printf("x:  &x = %p  x = %d \n",(void*) &x, x);
	printf("p:  &p = %p  p =  %p  *p = %d",(void*) &p,(void*) p, *p);
	
	q= malloc(sizeof(50));
	printf("\nq:  &q = %p  q =  %p  *q = %d",(void*) &q,(void*) q, *q);	
return 1;
}