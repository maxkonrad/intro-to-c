#include <stdio.h>
#define ARRLEN 5

float * errCalc(float arr[], float errArr[], float realVal);
float absf(float a);
void stringCopier(float from[], float to[]);
float worstCalc(float errArr[]);
float * valDeleter(float errArr[], float deletedArr[], float worstVal);
float * arrReverser(float arr[]);

int main(){
	int i;
	
	float arr[ARRLEN] = {20.50, 19.73, 21.04, 18.57, 19.11};
	float realVal = 20.0;
	float errArr[ARRLEN] = {0};
	float worstVal;
	float deletedArr[ARRLEN] = {0};
	float reversedArr[ARRLEN - 1] = {0};
	
	stringCopier(errCalc(arr, errArr, realVal), errArr);
	
	printf("\nTemperature errors(%%) = \n");
	printf("[ ");
	for (i = 0; i < ARRLEN; i++){
		printf("%.2f ", errArr[i]);
	}
	printf("]");
	
	worstVal = worstCalc(errArr);
	printf("\nThe worst one error is %.2f", worstVal);
	
	stringCopier(valDeleter(errArr, deletedArr, worstVal), deletedArr);
	
	printf("\nTemperature without worst one(%%) =");
	printf("\n[ ");
	for (i = 0; i < ARRLEN - 1; i++){
		printf("%.2f ", deletedArr[i]);
	}
	printf("]");
	
	stringCopier(arrReverser(deletedArr), reversedArr);
	
	printf("\nReversed temperature errors without worst one(%%) =");
	printf("\n[ ");
	for (i = 0; i < ARRLEN - 1; i++){
		printf("%.2f ", reversedArr[i]);
	}
	printf("]");
}

float absf(float a){
	return a >= 0 ? a : -a;
}

void stringCopier(float from[], float to[]){
	int i = 0;
	for(i = 0; i < ARRLEN; i++){
		to[i] = from[i];
	}
		
}

float * errCalc(float arr[], float errArr[], float realVal){
	int i;
	for(i = 0; i < ARRLEN; i++){
		errArr[i] = absf(realVal - arr[i]) * 100 / absf(realVal);
	}
	return errArr;
}

float worstCalc(float errArr[]){
	float max = errArr[0];
	int i;
	for (i = 1; i < ARRLEN; i++){
		if(errArr[i] > max) max = errArr[i];
	}
	return max;
}

float * valDeleter(float errArr[], float deletedArr[], float worstVal){
	int valIndex, i;
	for(i = 0; i < ARRLEN; i++){
		if(errArr[i] == worstVal) valIndex = i;
	}
	for(i = 0; i < ARRLEN; i++){
		deletedArr[i] = errArr[i];
	}
	for(i = valIndex; i < ARRLEN - 1; i++){
		deletedArr[i] = errArr[i + 1];
	}
	deletedArr[ARRLEN -1 ] = 0.0;
	return deletedArr;
}

float * arrReverser(float arr[]){
	float temp;
	int i;
	for(i = 0; i < (ARRLEN - 1) / 2; i++){
		temp = arr[i];
		arr[i] = arr[ARRLEN - i - 2];
		arr[ARRLEN - i - 2] = temp;
	}
	return arr;
}
