#include <stdio.h>

long double itr(long double base, int c);

int main(int argc, char * argv[])
{
	long double base = 5.0;
	int c = 1;

	printf("First iteration is %Lf\n", itr(base, c));

	return 0;
}

long double itr(long double base, int c)
{
	long double result = (base * base) + c;

	return result;
}
