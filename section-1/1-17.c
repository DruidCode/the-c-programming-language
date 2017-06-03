/**
mac下

**/
#include <stdio.h>
#define MAXLINE 1000
#define UPPER 2

int getLine(char line[], int maxline);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0) {
		printf("%d\n", len);
		if (len > UPPER)
			printf("%s", line);
	}
	return 0;
}

int getLine(char s[], int lim)
{
	int c, i, j;
	j = 0;

	for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i)
		if (i < lim-2) {
			s[j] = c;
			++j;
		}
	if (c == '\n') {
		s[j] = c;
		++i;
		++j;
	}
	s[j] = '\0';
	return i;
}
