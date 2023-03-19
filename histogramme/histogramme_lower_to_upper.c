#include <stdio.h>

#define MAXWORDLENGTH 20
#define MAXWORDCOUNT 15
#define IN 1
#define OUT 0

main()
{
	int state;
	int c;
	int i, j, k;
	int marked[MAXWORDLENGTH] = {0};

	int nlengths[MAXWORDLENGTH] = {0};
	int ncw = 0; /*Number of characters inside a word */

	state = OUT;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			nlengths[ncw] = nlengths[ncw] + 1;
			ncw = 0;
		}

		else
		{
			++ncw;
			state = IN;
		}
	}

	for (k = 0; k <= MAXWORDLENGTH - 1; k++)
		printf("\nnlengths[%d]=%d", k, nlengths[k]);

	printf("\n\n\t%s\t\n", "HISTOGRAMME");
	printf("%s", "---------------------------------------");
	printf("\n");
	printf("\n");

	for (i = 1; i <= MAXWORDCOUNT; i++)
	{

		for (j = 1; j <= nlengths[i]; j++)
		{

			printf("*");
		}
		printf("\n");
	}

	printf("\n");
}
