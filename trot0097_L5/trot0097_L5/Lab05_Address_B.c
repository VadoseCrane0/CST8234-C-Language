#include <stdio.h>

int mod_var(int y,int * p);
int main(){
	int x,y;
	int * p; 
	x=5;
	y=10;
	p = &x;
	printf("---------------------------------------\nFUNCTION main( ):\n");
	printf("x:  &x = %p  x = %d \ny:  &y = %p  y = %d\n",(void*) &x, x,(void*) &y, y);
	printf("p:  &p = %p  p =  %p  *p = %d",(void*) &p,(void*) p, *p);
	mod_var(y,p);
	printf("\n---------------------------------------\nFUNCTION main( ):\n");
	printf("x:  &x = %p  x = %d \ny:  &y = %p  y = %d\n",(void*) &x, x,(void*) &y, y);
	printf("p:  &p = %p  p =  %p  *p = %d",(void*) &p,(void*) p, *p);
return 1;
}

int mod_var(int y,int * p){
	printf("\n---------------------------------------\nFUNCTION mod_var(y, p) -- before modifications:\n");
	printf("a:  &a = %p  x = %d \n",(void*) &y, y);
	printf("p:  &p = %p  p =  %p  *p = %d",(void*) &p,(void*) p, *p);
	y=100;
	*p = 45;
	printf("\n---------------------------------------\nFUNCTION mod_var(y, p) -- after modifications:\n");
	printf("a:  &a = %p  x = %d \n",(void*) &y, y);
	printf("p:  &p = %p  p =  %p  *p = %d",(void*) &p,(void*) p, *p);
	return 1;
}