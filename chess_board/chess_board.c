//This program might need additional software to work in Linux terminal. It works fine in windows machines.
#include <stdio.h>

void chess_board(int n);
void chess_status(int n);

int main(){
	int n;
	printf("Please enter the n: ");
	scanf(" %d", &n);
	
	chess_board(n);
}

void chess_board(int n){
	int i, j;
	for(i = 1; i <= n; i++){
		printf("\n");
		if(i%2) {
			for(j = 1; j <= n; j++){
				if(j%2) printf("%c", 177);
				else printf("%c", 178);
			}
		}
		else{
			for(j = 1; j <= n; j++){
				if(j%2) printf("%c", 178);
				else printf("%c", 177);
			}
		}
	}
}

void chess_status(int n){
	int i, j, status;
	status = 0;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			if(status){
				printf("#");
				status = 1;
			}
			else{
				printf(" ");
				status = 0;
			}
		}
		printf("\n");
	}
}
