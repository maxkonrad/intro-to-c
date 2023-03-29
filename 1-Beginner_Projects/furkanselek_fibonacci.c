#include <stdio.h>

void fibf(int m);
int fibonacci(int n);

int main(){
	int m;
	
	printf("This program prints first 'm' elements of fibonacci series.\n");
	printf("Please enter the m: ");
	scanf(" %d", &m);
	
	fibf(m);
}

void fibf(int m){
	int n;
	for (n = 0; n < m; n++){
		printf("\nThe %d. element of fibonacci series is %d", n, fibonacci(n));
	}
}

int fibonacci(int n){
	if(n == 0 || n == 1) return n;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}
