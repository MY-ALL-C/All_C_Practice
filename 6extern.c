#include <stdio.h>


extern void outerFunction();


int main(){
    //
    printf("I am from the main function i.e. first file \n");
    outerFunction();
}




