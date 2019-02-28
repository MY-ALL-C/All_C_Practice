#include <stdio.h>

int main(){
	int MyArray[3] = {100, 200, 300};
	int *MyPointer;

	MyPointer = MyArray; //putting & :: the error was
	/**
	 * 16PointerToArray.c:9:12: warning: assignment from incompatible pointer type [-Wincompatible-pointer-types]
	 *  MyPointer = &MyArray;
     *      ^
	 */
	for (int i=0; i<3; i++){
		printf("The Values Are : %d \n", *(MyPointer+i));
	}
	return 0;



	
}











