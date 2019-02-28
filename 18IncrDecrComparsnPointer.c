#include <stdio.h>



int main(){
	int MyArray[3] = {3, 5, 7};
	int *MyPointer = NULL;
	MyPointer = MyArray;
	
	/** Incrementing Pointer **/
	for (int i = 0; i < 3; i++){
		printf("The Current Value Of The Pointer Is ==> %d \n", *MyPointer);
		++MyPointer;
	}

	int *OwnPointer = MyArray;
	OwnPointer = &MyArray[2]; //Getting The Address Of The Final Element and then decrementing the value
	/** Decrementing Pointer **/
	for (int j=0; j<3; j++){
		printf("The Decremented value of pointer is ==> %d \n", *OwnPointer);
		--OwnPointer;
	}


	printf("\n\n\n\n");

	int *ComparePointer = NULL;
	ComparePointer = MyArray;
	/** Comparision Of Pointer **/
	for (int k=0; k<3; ++k){
		if (ComparePointer == &MyArray[k]){
			printf("The Pointers are equal %d \n", *ComparePointer);
			++ComparePointer;
		}
	}

	return 0;
}





