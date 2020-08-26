#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char * SHELL = getenv("SHELL");
	printf("%s\n", SHELL);

	return 0;
}
