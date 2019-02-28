#include <stdio.h>

int main(){
	//Declaring Pointers
	int *ArrayOfPointers[3];

	for (int i=0; i<3; i++){
		ArrayOfPointers[i] = &i; //Direct assignment of integer value not allowed
	}

	for (int i=0; i<3; i++){
		printf("The Value Is : %d \n", *ArrayOfPointers[i]);
	}

	char *names[] = {"Zara Ali","Hina Ali","Nuha Ali","Sara Ali"};
	int i = 0;
	for ( i = 0; i < 4; i++) {
		printf("Value of names[%d] = %s\n", i, names[i] );
	}

	/** Showing Error **/
	//int *intarray[] = {8};
	//printf("The Value Is : %d \n ", intarray[2]);
	return 0;
}


