#include <stdio.h>

int lower(int c);

int main()
{

	int c;
	char a;

	while ( (c = getchar()) != EOF ) {
		a = lower(c);
		printf("lower=%c\n", a);
	}
	return 0;
}

int lower(int c)
{
	return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}
