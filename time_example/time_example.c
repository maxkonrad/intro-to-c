#include <stdio.h>
#include <time.h>

main(){
	clock_t start, end;
	start = clock();
	int i = 0;
	end = clock();
	double time_passed = (double) (end - start);
	printf("time passed = %f", time_passed);
}
