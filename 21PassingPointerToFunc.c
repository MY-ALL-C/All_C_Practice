#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *curTime);



int main(){
	unsigned long sec;
	getSeconds(&sec);

	printf("Total No Of Secomds : %ld \n", sec);

	return 0;
}



void getSeconds(unsigned long *CurTime){
	*CurTime = time( NULL );
	return;
}




