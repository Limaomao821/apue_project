#include <stdio.h>

int main(void)
{
	int a = 9;
	test(a);
	return 0;
}

void test(int a, int b)
{
	int c = a + b;
	printf("%d\n", c);
}
