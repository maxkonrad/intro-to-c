#include <stdio.h>

void pascalf(int n);
int factorial(int n);
int combination(int n, int r);

main(){
	int n;
	
	printf("Please enter the n: ");
	scanf(" %d", &n);
	
	pascalf(n);
}

void pascalf(n){
	int i, j;
	for (i = 0; i <= n; i++){
		for(j = 0; j <=i ; j++){
			printf("%d", combination(i, j));
		}
		printf("\n");
	}
}

int combination(int n, int r){
	if(n < r) return -1;
	else return factorial(n) / (factorial(n-r) * factorial(r));
}

int factorial(n){
	int i, result;
	result = 1;
	if(n < 0) return -1;
	if (n == 0) return 1;
	for (i = 1; i <= n; i ++){
		result *= i;
	}
	return result;
}

