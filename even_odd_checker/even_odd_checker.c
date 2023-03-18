#include <stdio.h>

int main()
{
	
	int number;
	
	printf("\nEnter an integer number : ");
	scanf("%d",&number);
	
	if (number %2 == 0)
		printf("\nnumber %d  is even", number);
		
    if (number %2 == 1)
		printf("\nnumber %d  is odd", number);		
	
}
