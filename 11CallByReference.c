#include <stdio.h>

/** Call By Reference **/

//defining a swap function
void swap(int *First, int *Second);


int main(){
	int X = 10;
	int Y = 20;

	printf("The Value Before Swap : of(X) --> %d \n", X);
	printf("The Value Before Swap : of(Y) --> %d \n", Y);

	//calling the swap function
	swap(&X, &Y);

	printf("The Value After Swap : of(X) --> %d \n", X);
	printf("The value After Swap : of(Y) --> %d \n", Y);

	return 0;
}

void swap(int *First, int *Second){
	int XYZ = 0;
	XYZ = *First;
	*First = *Second; //changing the value @ the address lavel
	*Second = XYZ; //changing the value @ the address level - rather than explicitely changing the value

	printf("\n\n");
	printf("Swap Was Sucessful  \n\n");
}


