#include <stdio.h>
int main(){
	int i;
	for(i = 'a'; i <= 'z'; i++) {
		printf("Lowercase Letters from a-z are: %d %c", i, i);
		printf("\n");
	}
	for(i = 'A'; i <= 'Z'; i++) {
		printf("Uppercase Letters from A-Z are: %d %c", i, i);	
		printf("\n");		
	}
}
