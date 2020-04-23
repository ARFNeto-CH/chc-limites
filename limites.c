#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv)
{
	printf("sizeof(long long int) = %d bytes\n", sizeof(long long int));
	printf("         0         1         2    2\n");
	printf("         0    5    0    5    0    5\n");
	printf("(8)  v = %20u\n", UCHAR_MAX);
	printf("Hex  v = %20X\n", UCHAR_MAX);
	printf("(16) v = %20u\n", USHRT_MAX);
	printf("Hex  v = %20X\n", USHRT_MAX);
	printf("(32) v = %20Iu\n", UINT_MAX);
	printf("Hex  v = %20X\n",  UINT_MAX);
	printf("(32) v = %20lu\n", ULONG_MAX);
	printf("(32) v = %20X\n",  ULONG_MAX);
	printf("(64) v = %20llu\n", ULLONG_MAX);
	printf("Hex  v = %20llX\n",   ULLONG_MAX);
	return 0;
}