#include <stdio.h>
#include <string.h>


/** Declaring The Structure  **/
struct Globe{
	char Country[50];
	char President[30];
	int CountryCode;
};

/** Function Declaratin **/
void printStructureData(struct Globe localStructure);



int main(){

	/** Creating A Structure **/
	struct Globe Global;
	strcpy(Global.Country, "America");
	strcpy(Global.President, "Donald Trumph");
	int CountryCode = 9867;

	/** passing the structure to function as argument **/
	printStructureData(Global);

	return 0;

}


void printStructureData(struct Globe LocalStructure){
	printf("Country name :: %s \n", LocalStructure.Country);
	printf("President Name :: %s \n", LocalStructure.President);
	printf("Country Code :: %d \n", LocalStructure.CountryCode);
	
	return;
}





