#include <stdio.h>
#include <string.h>




/** Declaration Structure **/
struct Books{
	char Title[50];
	char Author[40];
	int ISBN;
};


int main(){
	
	/** Creating A Type Of Structure Variable **/
	struct Books Book1;
	struct Books Book2;

	/** Book1 Specification **/
	strcpy(Book1.Title, "Programming With C");
	strcpy(Book1.Author, "Anonymous Author");
	Book1.ISBN = 1234;

	/** Book2  Specification **/
	strcpy(Book2.Title, "Java Programming");
	strcpy(Book2.Author, "James ..");
	Book2.ISBN = 6789;


	/** Printing the Structure Results **/
	printf("Printing The Book1 Structure \n");
	printf("Book one name is = %s  \n",Book1.Title );
	printf("Book One Author Is = %s \n",Book1.Author);
	printf("Book One ISBN Is = %d \n",Book1.ISBN);

	printf("\n\n\n");

	printf("Printing Book2 Structure \n");
	printf("Book Two Name is = %s \n", Book2.Title);
	printf("Book Two Author is = %s \n", Book2.Author);
	printf("Book Two ISBN Is = %d \n", Book2.ISBN);

	printf("|| End Of Printing The Result ||\n");

	return 0;


}
























