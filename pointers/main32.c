/*Create a function that allocates a 2D array using int ** (double pointers), 
fills it with user input, and then frees the memory.*/



#include<stdio.h>
#include<stdlib.h>


int **createMatrix(int rows,int cols) {
	int **arr = (int **)malloc(rows*sizeof(int*));
	if(!arr) {
		printf("memory allocation failed!");
		exit(1);
	}

	for(int i=0;i<rows;i++) {
		arr[i] = (int *)malloc(cols*sizeof(int));
		if(!arr[i]) {
			printf("memory allocation failed!");
			exit(1);
		}
	}

	printf("enter %d elements to the matrix :\n",rows*cols);
	for(int i=0;i<rows;i++) {
		for(int j=0;j<cols;j++) {
			scanf("%d",&arr[i][j]);
		}
	}

	return arr;
}

void freeMatrix(int **arr,int rows) {
	for(int i=0;i<rows;i++) {
		free(arr[i]);
	}
	free(arr);
}

int main() {
	int rows,cols;
	printf("enter the number of rows and coloums : \n");
	scanf("%d%d",&rows,&cols);

	int **matrix = createMatrix(rows,cols);

	for(int i=0;i<rows;i++) {
		printf("\n");
		for(int j=0;j<cols;j++) {
			printf("%3d",matrix[i][j]);
		}
	}

	freeMatrix(matrix,rows);
	return 0;
}
