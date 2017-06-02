#include <stdio.h>

/**
环境：mac
*/

int main()
{
	int c, flag;
	flag = 0; //是否连续空格
	while ( (c = getchar()) != EOF ) {
		if (c == ' ') {
			if ( flag == 0 ) {
				putchar(c);
				flag = 1;
			}
		} else {
			putchar(c);
			flag = 0;
		}
	}
}
