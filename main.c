#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)

{
	int output;
	output = a + b;
	return output;
}

int square(int n)

{
	return (n*n);
}

int get_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int main (void)
{
	int a;
	int b;
	
	a = 2;
	b = 5;
	int add;
	add = sumTwo(a,b);
	
	printf("a+b = %d\n", add);
	printf("a*a = %d\n", square(a));
	printf("max = %d", get_max(a,b));
	
	return 0;
}
