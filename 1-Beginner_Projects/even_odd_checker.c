#include <stdio.h>

int main()
{
	
	int number;
	
	printf("\nEnter an integer number : ");
	scanf("%d",&number);
	
	printf("\nnumber %d is %s\n", number, (number & 1 ? "odd" : "even")); //very special thanks to thanks u/thebatmanandrobin from r/cprogramming

}
