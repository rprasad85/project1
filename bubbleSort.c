#include <stdio.h>
void bubblesort(int *, int);
int main(){
	int a[] = {1,5,7,2,68,12,6,10,21};
	int i, size;
	size = (int) sizeof(a)/sizeof(int);
	bubblesort(a, size);
	for(i = 0; i < 9; i++){
		printf("%d, ",a[i]);
	}
	printf("\n");
	return 0;
}
void bubblesort(int* arr,int size){
	int swaped = 1;
	int i, j, temp;
	//int size = sizeof(arr)/sizeof(int);
	printf("size of array is %d\n",size);
	for(i =0; i <size ; i++){
		if(swaped){
			swaped = 0;
		}
		else{
			break;
		}
		for(j = 0; j < size-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swaped = 1; 
			}
		}
	}	
}
