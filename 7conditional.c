#include <stdio.h>


int main(){
/** Demo of all Conditional statements of C programming language **/
	int Counter = 5;

	if (Counter){
	printf("The Value Of Counter Is %d \n", Counter);
	}
	else if(Counter) {
	//Don't forget to take a note of the difference between [else if] && [elseif] << But the [elseif] is not working in C <<:)
	printf("This Value Has Shoud Not Be Get Printed !!! This Is A Mistke The System Is Acting Now--");
	}
	else{
	printf("This Is A Mistke.. Check The Source Code !!!");
	}

	//Sample Nested If
	if (Counter == 5){
	printf("The First if value is get executed !!!\n");
		if (Counter > 4){
		printf("This Line Is From Neste If Block \n");
		}
	}


	//Switch case Example Sample
	switch (Counter){
		case 6 :
			printf("The Case Value is printed");
			break;
		case 5 :
			printf("This Line Is From Switch Case Block");
			break;
			//However a nested switch case also possible here
		default:
			printf("I Am From Default Block");
			break;
	}
}
