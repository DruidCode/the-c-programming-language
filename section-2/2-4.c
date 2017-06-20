#include <stdio.h>

int squeeze(char s[], char c[]);

int main()
{
	char s[100] = "hello world";
	
	char c[20] = "l";
	int i = 0;
	squeeze(s, c);
	while (s[i] != '\0') {
		putchar(s[i]);
		++i;
	}
	
	return 0;
}

int squeeze(char s[], char c[])
{
	int i, j, k;
	for (i = j = 0; s[i] != '\0'; i++) {
		for (k = 0; c[k] != '\0' && s[i] != c[k]; k++)
			;
		if (c[k] == '\0')
			s[j++] = s[i];						
	}
	s[j] = '\0';
}
