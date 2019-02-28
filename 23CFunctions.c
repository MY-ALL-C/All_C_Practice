#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/** Working with C Core Functions **/

int main(){
	/** Declaring Two Character Array **/

	char FirstVar[] = "Hello C !!";
	char SecondVar[] = "Okay Cool .. Calm Down -- //";
	char Result[50];

	printf("Working With C Built in functions \n\n ");

	strcpy(Result, SecondVar);
	printf("The Copied Result Is %s \n", Result);

	strcat(Result, SecondVar);
	printf("The Concatenated Result String is : %s \n", Result);

	printf("The Length Of The Final String Is %ld \n", strlen(Result));
	printf("\n\n");


	return 0;
}

























