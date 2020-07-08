#include <unistd.h>
#include <stdio.h>

int main(void)
{
	extern char** environ;
	int index = 0;
	while(environ[index] != NULL) {
		printf("%s\n", environ[index]);
		++index;
	}
}
