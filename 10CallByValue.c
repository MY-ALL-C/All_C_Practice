#include <stdio.h>

//declaring the function
void swap(int, int);

int main(){

	/** Declaring Two Variables **/
	int X = 10;
	int Y = 20;

	printf("The Value Of X before Swap is : %d \n", X);
	printf("The Value of Y before swap is : %d \n", Y);
	
	//calling swap() function - & - trying to change the value by swapping [Here The Variable are local N not global]
	swap(X, Y);

	printf("The Value Of X After Swap is : %d \n", X );
	printf("The Value Of y After Swap %%d Is  : %d \n", Y); //Use of double %% will make the one silent..

	printf("The use of double  %% in the above sentence \n");
	printf("Use of tripple percentile generates an error -- an percentile have the cancellation effect of nother percentile \n");
	printf("The use of forward slash have the effect on the followed line even after the comment line \n");
	
	return 0;
}

//Defining The Swap Function
void swap (int A, int B){
	int temp;
	temp = A;
	A = B;
	B = temp;
	printf("\n\n");
	printf("Swap is Done !!! \n\n");
}

