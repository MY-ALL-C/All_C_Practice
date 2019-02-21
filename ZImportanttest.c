#include <stdio.h>
/**Add The Other Helpfull Debug Constant required such as FUNCTION, LINE, FILE, CLASS, OBJECT*/

//Declaring a function
void testfunc();


int main(){
    //calling to another function..
    testfunc();
}

void testfunc(){
    //the function is called here.. and we are trying to use the c predefined __LINE__ & __FILE__ Constants
    printf("The File Is : %s \n", __FILE__);

}


