#include <stdio.h>

void square_draw(int n);
void square_draw_2(int n);
int check_valid(int n);

main(){
	int n;
	printf("Enter a number between 3 and 20: ");
	scanf(" %d", &n);
	if(check_valid(n)) {
		printf("\n\n first function: \n");
		square_draw(n);
		printf("\n\n second function: \n");
		square_draw_2(n);
	}
	else return;
}

int check_valid(n){
	if(n <= 20 && n >= 3) return 1;
	else {
		printf("\n\nINVALID INTERVAL TERMINATING PROGRAM");
		return 0;
	}
}

void square_draw(n){
	int i, j;
	for(i = 1; i <= n; i++){
		if(i == 1 || i == n){
			for(j = 1; j <= n; j++){
				printf("*");
				printf(" ");
			}
		}
		else{
			printf("*");
			for(j = 1; j < 2 * n - 2; j++){
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}

void square_draw_2(n){
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			if(i == 1 || j == 1 || i == n || j == n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
}
