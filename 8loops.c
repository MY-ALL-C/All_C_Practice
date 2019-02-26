#include <stdio.h>


int main(){
/** This File Consists of Statements Related To Loops **/

	int Counter = 8;
	int i; //Uninitialised value -- defaults to "0"

	//for loop
	for (;i<8;++i){
		printf("The Value Of i Is %d", i);
		printf("\n");
	}

	//resetting the value of i
	i = 0;
	//do while loop
	do {
		printf("The Value Of i Is : %d \n", i);
		++i;
	}while(i<Counter);


	//Example of GOTO Statement [label]
	i = 0;
	LABELLOOP:do {
		if (i == 2 | i == 4){
			printf("This loop is skipped \n \n");
			//Don't forget increment the counter --!!Infinite Loop!!--
			++i;
			goto LABELLOOP;
		}
	printf("The Value Of i in the labeled statement is =>  %d \n", i);
	++i;
	} while(i < Counter);




	/** Use Of Continue && Break Statement **/
	//NESTED LOOP
	i = 0;
	for(; i<=Counter; ++i){

		if (i==2){
		printf ("The Value Of i is--- %d----- so the iteration is skipped \n ",i);
		continue;
		}

		if (i>=4){
			LABELDO:do{
				printf("I am Inside The Nested Do Loop and The Value Of I Here is --->> %d \n",i);
				if (i>4){
					printf("The Value Of i is now > 4 and hence the loop is exited here \n");
					++i;
					break;
				}
			printf("I am from inside the nested loop \n\t\t & \n The Value OF i is %d \n ",i);
			++i;
			}while(i < Counter);
		}
	printf("The Value Of i is now %d \n", i);
	}

return 0;
}


