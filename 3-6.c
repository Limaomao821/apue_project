/*
加上O_APPEND之后，读的位置还可以调整，但是写始终是写在最后
*/
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	char buffer[11];
	int fd = open("./data", O_RDWR|O_APPEND);
	off_t dist;
	if((dist = lseek(fd, 11, SEEK_SET))== -1)
		printf("cannot seek\n");
	printf("%ld\n", dist);
	read(fd, buffer, 11);
	printf("%s", buffer);

	write(fd, "0000000000\n", 11);
	return 0;
}
