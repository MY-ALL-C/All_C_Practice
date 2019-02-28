#include <stdio.h>

int main(){
	/** Declaring, Initialising & acessing single dimensional array */
	int SingleDimensionalArray[5] = {1, 2, 3, 4, 5};

	//How to know the length of array in c ??
	for (int i=0; i<5; ++i){
		printf("The Value Of Array @ Location ::%d:: valoue as ==> %d ", i,SingleDimensionalArray[i]);
		printf("\n");
	}

	double MultiDimensionalArray[3][3][3] = {
							{1, 2, 3.0},
							{4, 5, 6.1},
							{7, 8, 9.2},
						};
	//Acessing Multidimensional array
	printf("The Value Of The 3X3 Multidimensional Array As Follows :: \n");
	printf("---------------------------------------\n");
	for (int i=0; i<3; ++i){
		for (int j=0; j<3; ++j){
			for (int k = 0; k<3; ++k){
				printf("%f", MultiDimensionalArray[i][j][k]);
				printf("\t");
			}
			printf("\n");
		}
		printf("\n\n");
	}
	printf("---------------------------------------\n");


	return 0;
}


