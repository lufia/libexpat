#include <stdio.h>

int
main(void)
{
	unsigned short n;
	unsigned char *p;

	n = 1;
	p = (unsigned char *)&n;
	if(*p == 1)
		printf("BYTEORDER 1234\n");
	else
		printf("BYTEORDER 4321\n");
	printf("OFF_T %d\n", sizeof(off_t));
	printf("SIZE_T %d\n", sizeof(size_t));
	return 0;
}
