#include <stdio.h>

int main(void)
{
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * not allowed to code anything else than this line of code
	 */
	p[5] = 98;

