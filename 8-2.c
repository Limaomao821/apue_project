#include <apue.h>

pid_t pid;

void son(void)
{
#if defined(FORK)
	if((pid = fork()) < 0) {
		err_sys("fork error");
#elif defined(VFORK)
	if((pid = vfork()) < 0) {
		err_sys("vfork error");
#else
#endif
	} else if(pid == 0) {
		printf("son is here\n");
	} else {
		printf("father is here\n");
	}
}

int main(void)
{
	son();
/*	if(pid == 0) {
		printf("son get out\n");
		exit(0);
	}

	printf("father get out\n");*/
	return 0;
}
