#include <stdio.h>

/** function Declaration **/
void formalSizedParameter(int FormalParam[4]);
void formalUnsizedParameter(int FormalParam[], int);
void passingReference(int *FormalParam);


int main(){
	int arrayvar[4] = {5, 6, 7, 8}; //Leaving one element
	
	int arrayvar1 = 6;
	formalSizedParameter(arrayvar);
	formalUnsizedParameter(arrayvar, 4);
	int *p = arrayvar; //Passing by reference genereated error
	passingReference(p); // Passing O/R Sending Reference, [-Without *-]

	printf("the size is : %ld \n\n", sizeof(arrayvar)); //devide it by the size of first element to get the required size

	printf("The Address is : %ls", &arrayvar1); //address is not printing currently
	printf("\n");
	return 0;
}


void formalSizedParameter(int FormalParam[4]){
	int Counter = 4;//sizeof(FormalParam);
	for (int i = 0; i < Counter; ++i){
		printf("The Parameters are : %d \n", FormalParam[i]);
	}
	printf("\n\n");
}

void formalUnsizedParameter(int FormalParam[], int Size){
	for (int i = 0; i<Size; ++i){
		printf("The Parameters are => %d \n", FormalParam[i]);
	}
	printf("\n\n");
}

void passingReference(int *FormalParam){ // FormalParam		is the address here
	printf("The Value is %d \n", *FormalParam);
	printf("\n");
	int Counter = 4;
	for (int i=0; i<Counter; ++i){
		printf("The Parameters are --> %d \n", FormalParam[i]); //address[i]
	}
	printf("\n\n");
}





