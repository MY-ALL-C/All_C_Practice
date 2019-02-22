#include <stdio.h>



//Declaring the variable
int a,b;
double c; //extern :: use of extern, generating error
//using the extern keyword and using the float insted of double

/**
 * Test the type casting as well
 */



int main(){
    a = 10;
    b = 20;
    
    c = 0.0;

    a += b;
    printf("The Addition value of a & b is :: %f \n", c);

    c = 70.00/3;
    printf("The Floaat value of c is :: %f \n", c);

    return 0;






}





