#include <stdio.h>

float transfer(float fahr);
int main()
{

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = transfer(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

float transfer(float fahr)
{
	return (5.0/9.0) * (fahr - 32.0);
}
