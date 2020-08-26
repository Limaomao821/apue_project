//通过将指针解释成long long类型来看值
//目前看确实是空指针
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;

	//对long类型进行测试
	long *test1 = calloc(10, sizeof(long));
	for(i=0; i<10; ++i) {
		printf("%ld ", test1[i]);
	}
	printf("\n");

	//测试指针的长度，从而打印出值
	//printf("sizeof int pointer: %lu\n", sizeof(int*));
	//printf("sizeof long long int: %lu\n", sizeof(long long));
	//对指针类型进行测试
	int **test2 = calloc(10, sizeof(int*));
	for(i=0; i<10; ++i) {
		printf("%lld ", (long long)test2[i]);
	}
	return 0;
}
