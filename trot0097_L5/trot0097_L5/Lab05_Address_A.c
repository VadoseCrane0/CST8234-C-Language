#include <stdio.h>

int main(){
	int x,y;
	int * p;
	printf("---------------------------------------\nSTEP 1:  Printing Sizes\nSizeof( int ) = %lu\nSizeof( memory address ) = %lu\n---------------------------------------",sizeof( x ),sizeof( p ) );
	printf("\nSTEP 2:  Variables -- Before initialization\n");
	printf("x:  &x = %p  x = %d \ny:  &y = %p  y = %d\n",(void*) &x, x,(void*) &y, y);
	printf("p: &p = %p  p =  %p  *p = Segmentation fault (core dumped)",(void*) &p,(void*) p);
	x=25;
	y=1986;
	p=&x;
	printf("\n---------------------------------------\nSTEP 3:  Variables -- After initialization\n");
	printf("x:  &x = %p  x = %d \ny:  &y = %p  y = %d\n",(void*) &x, x,(void*) &y, y);
	printf("p: &p = %p  p =  %p  *p = %d ",(void*) &p,(void*) p, *p);
	x=55;
	printf("\n---------------------------------------\nSTEP 4:  Pointer content with new value\n");
	printf("x:  &x = %p  x = %d \ny:  &y = %p  y = %d\n",(void*) &x, x,(void*) &y, y);
	printf("p: &p = %p  p =  %p  *p = %d ",(void*) &p,(void*) p, *p);
	/*x=p generates error*/
	x=p;
	printf("\n---------------------------------------\nSTEP 5:  Variable assignation to pointer\n");
	printf("x:  &x = %p  x = %d \ny:  &y = %p  y = %d\n",(void*) &x, x,(void*) &y, y);
	printf("p: &p = %p  p =  %p  *p = %d ",(void*) &p,(void*) p, *p);
return 1;
}