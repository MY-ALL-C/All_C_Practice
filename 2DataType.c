#include <stdio.h>
#include <float.h>
#include <limits.h>

//any declaration goes here..

int main(){
    /**
     * The program will print the data type size specification
     */
    printf("The Size of variable and their specification \n\n");

    //but argument 2 has type ‘long unsigned int’ [-Wformat=]
    printf("The Size of int in this machine is : %ld  \n", sizeof(int));
    printf("The Size of float in this machine is : %ld \n", sizeof(float));
    printf("The Size of Double for this machine is : %ld \n", sizeof(double));

    printf("The Specification of Float Goes Here \n");
    //format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘double’ [-Wformat=]
    printf("The Minimum size of the FLOAT for this machine is : %f \n", FLT_MIN);
    printf("The Maximum size of the Float for this machine is : %f \n", FLT_MAX);
    printf("The Precission Value of the Float is : %d \n", FLT_DIG);

    //Don't forgret to return zero
    return 0;
}




