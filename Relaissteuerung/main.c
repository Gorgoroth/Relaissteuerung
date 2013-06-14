#include <conio.h>
#include <stdio.h>

int main(void)
{
	printf("Hello world");

	_outp(0x378, 0);

	return 0;
}