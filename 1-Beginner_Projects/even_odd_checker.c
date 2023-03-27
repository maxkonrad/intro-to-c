#include <stdio.h>

int main()
{
	
	int number;
	
	printf("\nEnter an integer number : ");
	scanf("%d",&number);
	
	//old solution
	if (number %2 == 0)
		printf("\nnumber %d  is even\n", number);
		
    if (number %2 == 1)
		printf("\nnumber %d  is odd\n", number);	

	//optimized solution
	printf("\nnumber %d is %s\n", number, (number & 1 ? "odd" : "even")); //very special thanks to thanks u/thebatmanandrobin from r/cprogramming	
	
}
