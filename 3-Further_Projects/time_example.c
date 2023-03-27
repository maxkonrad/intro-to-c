#include <stdio.h>
#include <time.h>

int main(){
	clock_t start, end;
	start = clock();
	int i = 0;
	end = clock();
	double time_passed = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("time passed = %f", time_passed);
}
