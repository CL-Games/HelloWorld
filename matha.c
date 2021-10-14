#include<stdio.h>

int main(void){
	int x,y; 
	int bool_value;
	
	x = 3 ; y= 4; 
	
	bool_value = ( x > y );
	printf(" x > y ==> %d \n ",bool_value);
	bool_value = ( x < y );
	printf(" x < y ==> %d \n ",bool_value);	
	bool_value = (x < 5 && x < 10);	
	printf(" x < 5 &&  x < 10 ==> %d \n ",bool_value);		
}
