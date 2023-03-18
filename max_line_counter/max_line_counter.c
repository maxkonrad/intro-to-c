#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim);
void copy_s(char to[], char from[]);

main(){
	int len, max = 0, i;
	char line[MAXLINE], longest[MAXLINE];
	
	while ((len = get_line(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy_s(longest, line);
		}
		
	}
	printf("%d\n", max);
	if(max>0){
		printf("%s", longest);
	}
}

void copy_s(char to[], char from[]){
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0'){
		++i;
	}
}

int get_line(char s[], int lim){
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++){
		s[i] = c;
		if(c == '\n'){
			s[i] = c;
			++i;
		}
	}
	s[i] = '\0';
	return i;
}
