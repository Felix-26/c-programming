/*Write a function that removes duplicate elements from an integer 
array using pointers.*/

#include<stdio.h>
#include<stdlib.h>

int* removedups(int *arr,int n) {
	int *temp=NULL,*newtemp;
	int e,i,j,m=0;
	for(i=0;i<n;i++) {
		e=0;
		for(j=0;j<m;j++) {
			if(arr[i] == temp[j]) {
				e=1;
				break;
			}
			/*if(temp==NULL){
				temp = (int*)malloc(sizeof(int));
				*temp = *arr;
				m++;
			} else if(*(temp+j)!=*(arr+i)) {		//checking if element in arr in temp
				temp = realloc(temp, (m + 1) * sizeof(int));
				*(temp+m) = *(arr+i);
				m++;
			}*/
		}
		if(!e) {
			newtemp = realloc(temp,(m+1)*sizeof(int));
			temp=newtemp;
			temp[m]=arr[i];
			m++;
		}
	}
	return temp;
}

int main() {
	int i,*arr,n;
	printf("enter the size of the array :");
	scanf("%d",&n);
	arr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	arr = removedups(arr,n);
	for(i=0;i<n;i++) {
        printf("%p		%d\n",&arr[i],arr[i]);
    }
}
