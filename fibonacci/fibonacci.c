#include <stdio.h>
#include <time.h>

#define ELEMENTS 50

void fib_user (int m, int a0, int a1);
void fib_m (int m);
void fib_arr (int m);
void fib_long (int m);

int main(){
	clock_t start, end;
	double normal, user, array, long_int;
	int a0, a1;
	
	
	start = clock();
	fib_m(ELEMENTS);
	end = clock();
	normal = (double) (end - start) / CLOCKS_PER_SEC;
	
	printf("\nPlease enter a0: ");
	scanf(" %d", &a0);
	printf("\nPlease enter a1: ");
	scanf(" %d", &a1);
	
	start = clock();
	fib_user(ELEMENTS, a0, a1);
	end = clock();
	user = (double) (end - start) / CLOCKS_PER_SEC;
	
	start = clock();
	fib_arr(ELEMENTS);
	end = clock();
	array = (double) (end - start) / CLOCKS_PER_SEC;
	
	start = clock();
	fib_long(ELEMENTS);
	end = clock();
	long_int = (double) (end - start) / CLOCKS_PER_SEC;
	
	printf("\nTime passed in seconds: \n");
	printf("normal: %f\n", normal);
	printf("user: %f\n", user);
	printf("array: %f\n", array);
	printf("long int: %f\n", long_int);
}

void fib_m(int m){
	int i;
	int a0 = 1;
	int a1 = 1;
	int an = a0 + a1;
	for (i; i < m; i++){
		a0 = a1;
		a1 = an;
		an = a0 + a1;
	}
}

void fib_user(int m, int a0, int a1){
	int i;
	int an = a0 + a1;
	for (i = 0; i < m; i++){
		a0 = a1;
		a1 = an;
		an = a0 + a1;
	}
}

void fib_arr(int m){
	int arr[m];
	int i;
	arr[0] = 1;
	arr[1] = 1;
	for (i = 2; i < m; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
}

void fib_long(int m){
	unsigned long int an, a0, a1;
	a0 = 1;
	a1 = 1;
	int i;
	an = a1 + a0;
	for (i = 0; i < m; i++){
		a0 = a1;
		a1 = an;
		an = a0 + a1;
	}
}
