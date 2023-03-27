#include <stdio.h>

int guess_the_number();

int main(){
	printf("\nThis program guesses the number you have asked.");
	
	int i = 1, num;
	while (i){
		printf("\nPlease pick a number from 1 to 100 excluded in your mind.");
		num = guess_the_number();
		printf("\nIs %d your number?", num);
		printf("\nPlease enter 1 to play again and 0 to terminate the game: ");
		scanf(" %d", &i);
	}
	
}


int guess_the_number(){
	int arr[100] = {0};
	int i, low = 0, mid, high = 99, sign;
	mid = (low + high) / 2;
	
	for(i = 0; i < 100; i++){
		arr[i] = i + 1;
	}
	
	while ((high - low) != 1){
		printf("\nIf your number is greater than or equal to %d prompt 1 else enter 0: ", arr[mid]);
		scanf(" %d", &sign);
		if(sign) low = mid;
		else high = mid;
		mid = (high + low) / 2;
	}
	return arr[mid];
}	
