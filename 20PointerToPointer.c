#include <stdio.h>

/** Example Of pointer To Pointer **/

int main(){

	//Declaring a Variable
	int MyVar = 5;

	int *Pointer;
	int **PointerToPointer;

	Pointer = &MyVar;
	PointerToPointer = &Pointer;

	printf("Pointer Is : %d \n", *Pointer);
	printf("Pointer To Pointer Is : %d \n\n", **PointerToPointer);

	return 0;

}



































