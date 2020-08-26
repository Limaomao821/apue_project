#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;
	int status;

	pid = fork();
	wait(&status);

	return 0;
}
