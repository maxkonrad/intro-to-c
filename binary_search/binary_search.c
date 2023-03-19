#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void bubble_sort(int arr[], int size);
int binary_search(int arr[], int size, int num);
int main(){
	int range, n, i, num;
	
	printf("\nPlease enter the range: ");
	scanf("%d", &range);
	printf("\nPlease enter the n (less than 100): ");
	scanf("%d", &n);
	
	int arr[100] = {0};
	
	srand(time(NULL));
	
	for(i = 0; i < n; i++){
		arr[i] = 1 + (rand() % range);
	}
	for(i = 0; i < n; i++){
		printf("arr[%d] = %d\n", i + 1, arr[i]);
	}
	
	printf("\nSorted array: ");
	bubble_sort(arr, n);
	for(i = 0; i < n; i++){
		printf("arr[%d] = %d\n", i + 1, arr[i]);
	}
	
	printf("\nEnter the number you want the index to be found: ");
	scanf("%d", &num);
	
	int a = binary_search(arr, n, num);
	
	printf("\nFound result in %d steps", a);
	
}

void bubble_sort(int arr[], int size){
	int i, j, temp;
	for(i = 0; i < size - 2; i++){
		for(j = i + 1; j < size; j++){
			if(arr[j] > arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int binary_search(int arr[], int size, int n){
	int left = 0;
	int i = 0;
	int right = size;
	int mid = (left + right) / 2;
	while (arr[mid] != n){
		i++;
		mid = (left + right);
		if(arr[mid] > n) {
			left = mid;
			mid = (left + right) / 2;
		}
		else{
			right = mid;
			mid = (left + right) / 2;
		}
	}
	return i;
}
