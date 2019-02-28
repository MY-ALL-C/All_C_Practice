#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Function Declaration
int *getRandom();


//Array can't be returned - either return a pointer O/R return a stativc value !!!
int main(){
	//declaring a variable
	int *p;

	//calling the return function
	p = getRandom();
	
	for (int i=0; i<10; i++){
		printf("The values are %d \n", *(p+i));
	}

	return 0;
}



int * getRandom(){
	static int MyArray[10]; //function returns address of local variable [-Wreturn-local-addr]
	int i;

	for ( i = 0; i < 10; ++i) {
		MyArray[i] = rand();
		printf( "r[%d] = %d\n", i, MyArray[i]);
	}
	return MyArray; //may be here we are returning the  reference only
}

