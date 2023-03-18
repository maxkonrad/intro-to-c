#include <stdio.h>
#define PRECISION_CONSTANT 16

float power(float a, int n);
long int factorial(int n);
float sinfu(float rad);

int main(){
	float a, rad;
	int pow_n, fact_n;
	
	printf("\nPlease insert the values to be used in power function [float a, integer n]");
	printf("\ninsert a:");
	scanf(" %f", &a);
	printf("\ninsert n: ");
	scanf(" %d", &pow_n);
	printf("\nPower function returned: %f", power(a, pow_n));
	
	printf("\n\nPlease insert the value to be used in factorial function [integer n]");
	printf("\ninsert n: ");
	scanf(" %d", &fact_n);
	printf("\nFactorial function returned: %d", factorial(fact_n));
	
	printf("\n\nPlease insert the value to be used in sin function in radians [float rad]");
	printf("\ninsert rad: ");
	scanf(" %f", &rad);
	printf("\nSin function returned: %f", sinfu(rad));
}


float power(float a, int n){
	float const_a = a;
	if(n == 0) return 1;
	if (a == -1 || a == 1) return a;
	for(n; n - 1 > 0; n--){
		a = const_a * a;
	}
	return a;
}

long int factorial(n){
	long int result = 1;
	for(n; n > 1; n--){
		result *= n;
	}
	return result;
}

float sinfu(float rad){
	int n = 0;
	float result = 0;
	for (n; n <= PRECISION_CONSTANT; n++){
		result += power(-1, n) * power(rad, 2 * n + 1) / factorial(2 * n + 1);
	}
	return result;
}

