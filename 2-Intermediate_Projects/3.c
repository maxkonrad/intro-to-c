#include <stdio.h>

float power(float a, int x);

int main(){
	int deg, i;
	float result, x;
	
	printf("Enter the value of x: ");
	scanf(" %f", &x);
	printf("\nEnter the degree of the polynomial: ");
	scanf(" %d", &deg);
	
	if(deg < 0){
		printf("\nPlease enter a correct degree.");
		return 0;
	}
	
	for(i = deg; i >= 0; i--){
		float c;
		printf("\nPlease enter the coefficient for the element %d: ", i);
		scanf(" %f", &c);
		result += power(x, i) * c;
	}
	printf("\nResult: %f", result);
	
}

float power(float a, int x){
	float const_a = a;
	int i;
	if (a == 1 || x == 0 || (a == -1 && x % 2 == 0)) return 1;
	if (a == -1 && x % 2 == 1) return -1;
	for (i = 1; i < x; i++){
		a *= const_a;
	}
	return a;
}
