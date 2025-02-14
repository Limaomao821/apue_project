#include "apue.h"
#include <errno.h>
#include <sys/time.h>

#if defined(MACOS)
#include <sys/syslimits.h>
#elif defined<SOLARIS)
#include <limits.h>
#elif defined(BSD)
#include <sys/param.h>
#endif

unsigned long long count;
struct timeval end;

void checktime(char *str)
{
	struct timeval tv;
	gettimeofday(&tv, NULL);

	if(tv.tv_sec >= end.tv_sec && tv.tv_usec >= end.tv_usec) {
		printf("%s count = %lld\n", str, count);
		exit(0);
	}
}

int main(int argc, char *argv[])
{
	pid_t pid;
	char *s;
	int nzero, ret;
	int adf = 0;

	setbuf(stdout, NULL);
#if defined(NZERO)
	nzero = NZERO;
#elif defined(_SC_NZERO)
	nzero = sysconf(_SC_NZERO);
#else
#error NZERO undefined
#endif
	printf("NZERO = %d\n", nzero);
	if(argc == 2)
		adj = strtol(argv[1], NULL, 10);

	gettimeofday(&end, NULL);
	end.tv_sec += 10;


}
