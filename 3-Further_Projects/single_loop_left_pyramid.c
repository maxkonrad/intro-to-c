#include <stdio.h>

main(){
	int i, j, n;
	printf("Please enter the n: ");
	scanf(" %d", &n);
	
	for(i = 1; i <= n * n; i++){
		j = i / n;
		if(n % j < j){
			printf("*");
			continue;
		}
		else printf(" ");
		
		if(i % n == j) printf("\n");
		
	}
}
