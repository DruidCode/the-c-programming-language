#include <stdio.h>

/**
环境：mac
*/

int main()
{
	int c, space, table, control;
	space = 0;
	table = 0;
	control = 0;
	while ( (c = getchar()) != EOF ) {
		if (c == ' ')
			++space;
		if (c == '\t')
			++table;
		if (c == '\n')
			++control;
	}
	printf("%d,%d,%d\n", space, table, control);
}
