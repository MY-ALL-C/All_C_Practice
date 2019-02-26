#include <stdio.h>

/** Function Declaration **/
int max(int, int);


/** main() function **/

int main(){
	//Comparision Of Two Numbers & decideing the greatest among them
	int FirstNumber = 10;
	int SecondNumber = 20;
	int GreatestNumber = 0; //its a good practice to initialise a number intended for the future use

	GreatestNumber = max(FirstNumber, SecondNumber);
	printf("The Greatest number Is %d",GreatestNumber);

	return 0;
}

int max(int FirstNo, int SecondNo){
	if(FirstNo < SecondNo){
		return SecondNo;
	}
	else if(FirstNo > SecondNo){
		return FirstNo;
	}
	else if (FirstNo == SecondNo){
		return FirstNo | SecondNo;
	}
}




