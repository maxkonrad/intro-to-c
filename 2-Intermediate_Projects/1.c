#include <stdio.h>

//This program takes three exam score inputs and then calculates and shows the total score, the mean value and letter note of the exam scores.

int main(){
	printf("This program takes three exam score inputs and then calculates and shows the total score, the mean value and letter note of the exam scores.\n\n");
	
	//define variables
	int s1, s2, s3;
	float m, tscore;
	
	//print required info
	printf("Enter score of all three exams respectively");
	//take three exam result inputs seperately and assign them to variables defined at the starting of the program
	printf("\n\nPlease enter the first exam score: ");
	scanf("%d", &s1);
	printf("\nPlease enter the second exam score: ");
	scanf("%d", &s2);
	printf("\nPlease enter the third exam score: ");
	scanf("%d", &s3);
	
	//check if value is convenient, warn user and terminate the program if it is not between the accepted range
	if(!((s1 < 0 || s2 < 0 || s3 < 0) || (s1 > 100 || s2 > 100 || s3 > 100))){
		//calculate the total score and assign it to a float data typed variable
		tscore = s1 + s2 + s3;
		//calculate the mean value and assign it to a float data typed variable
		m = tscore / 3;
		//print the total score
		printf("Total score is %f", tscore);
		//print the mean value
		printf("\nThe mean value is %f\n", m);
		//calculate and print the letter value
		if (m < 50) printf("Grade is D");
		if (m >= 50 && m < 70) printf ("Grade is C");
		if (m >= 70 && m < 90) printf ("Grade is B");
		if (m >= 90) printf("Grade is A");
		} else {
		//terminate the program in case value is not in between the accepted range
		printf("Exam scores must be between 0-100");
		}
	}
	
	return 0;
}
