#include <stdio.h>
#include <string.h>


/**
 * Pointer To Structure
 *
 * sending the address to the function argument
 *
 */

/** Declaring Structure **/
struct Book{
	char Title[50];
	char Author[40];
	int ISBN;
};

void structPoint(struct Book *StructureAddress);


int main(){
	struct Book Book1;

	strcpy(Book1.Title, "Swimming Guide");
	strcpy(Book1.Author, "Anonymous Author Name");
	Book1.ISBN = 123;

	structPoint(&Book1);

	return 0;

}


void structPoint(struct Book *StructureAddress){
	printf("Printing The Structure Values .. : \n");

	printf("Book Title : %s \n", StructureAddress->Title);
	printf("Book Author : %s \n", StructureAddress->Author);
	printf("Book ISBN : %d \n", StructureAddress->ISBN);

}

















