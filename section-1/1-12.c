/**
环境：mac
*/
#include <stdio.h>

#define BEGIN 1 //是否在开始位置
#define END 0

int main()
{
	int c, state;
	state = BEGIN;

	while ( (c = getchar()) != EOF ) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == BEGIN) {
			} else {
				printf("\n");
				state = BEGIN;
			}
		} else {
			putchar(c);
			state = END;
		}
	}
}
