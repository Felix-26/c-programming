/*Given a 2D array, write a function to find its transpose using pointers.*/

#include<stdio.h>

void transpose(int *arr,int n) {
	int i,j,temp;
	for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i<j) {
	            temp = *(arr+i*n+j);
    	        *(arr+i*n+j) = *(arr+j*n+i);
        	    *(arr+j*n+i) = temp;
            }
        }
    }
}

int main() {
	int temp,n,m,i,j,arr[3][3];
	printf("Enter the no of rows and cols: \n");
	scanf("%d%d",&n,&m);
	printf("enter the elements : \n");
	for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
	if(n==m) {
		transpose((int *)arr,n);
	} else {
		return 0;
	}
	printf("transpose matrix :\n")
	for(i=0;i<n;i++) {
		printf("\n");
        for(j=0;j<m;j++) {
			printf("%d  ",arr[i][j]);
		}
	}
}
