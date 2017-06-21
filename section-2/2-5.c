#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
	char s[100] = "hello world";
	
	char c[20] = "s";
	int i = 0;
	int j;
	j = any(s, c);
	printf("weizhi=%d\n", j);
	return 0;
}

int any(char s1[], char s2[])
{
	int i, j, k;
	for (i = j = 0; s2[i] != '\0'; i++) {
		for (k = 0; s1[k] != '\0'; k++)
			if (s1[k] == s2[i])
				return k;
	}
	return -1;
}
