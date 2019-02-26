#include <stdio.h>

/** This Function Demonstrates the uses of various variable scope such as GLOBAL,LOCAL,FORMAL **/

//Function Declaration
void myFunc(int, int);


//Global Variable Declaration & Initialisation
int A = 0;

int main(){

	//Local Variable
	int X = 5;
	int Y = 6;

	A = X + Y;
	printf("The Addition Of X & Y = %d \n\n", A);
	printf("Calling The Function \n");
	myFunc(X, Y);
	printf("The updated Value Of A is = %d \n\n", A);

	return 0;
}


/** Formal Parameter **/
void myFunc(int C, int Cpp){
	A = C + Cpp + Cpp;
}





