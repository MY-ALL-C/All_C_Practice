#include <stdio.h>

void func(void);
static int j = 5;

int main(){
    //calling a function and storing a static value there
    while(j){
        /* code */
        func();
        j--;
    }    
}


void func(void){
    static int i = 0;
    printf("The Value Now Is :: %d \n", i);
    ++i;
}

