#include <stdio.h>

#define LENGTH 5
const int WIDTH=10;
#define NEWLINE '\n'

int main(){
        int area;

        area = LENGTH * WIDTH;
        printf("The Area\tIs %d %c", area, NEWLINE);
}




/**
 * #define Doesn't require either a = sign for assignment nor a semicolon for statement termination nor require a type setting
 * 
 * Where as the [const] keyword requires all the three
 * A type definition
 * = sign for assignment\
 * and a ; for statement termination
 * 
 */

