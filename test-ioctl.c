#include <stdlib.h>
#include <stdio.h>
#include <sys/ioctl.h>

int main(void)
{
	int stat;
	stat = ioctl(0, 8, 0, 0);
	if(!stat)
		printf("Drive is removable.\n");
	else
		printf("Drive is not removable.\n");
	return 0;
}
