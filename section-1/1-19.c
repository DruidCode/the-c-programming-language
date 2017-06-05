#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void reverse(char s[]);

int main()
{
	char line[MAXLINE];
	
	while (getLine(line, MAXLINE)) {
		reverse(line);
		printf("%s", line);
	}
}

void reverse(char s[])
{
	int i, j;
	char temp;
	i = 0;
	j = 0;
	while (s[i] != '\0')
		++i;
	--i;
	if (s[i] == '\n')
		--i;
	
	while(j < i) {
 		temp = s[j];
 		s[j] = s[i];
 		s[i] = temp;
 		--i;
 		++j;
	}
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
