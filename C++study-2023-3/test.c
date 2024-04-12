#include<stdio.h>

int main()
{
	int a = 0x100;//十六进制数
	printf("a=%x\n", a);
	printf("a=%#x\n", a);

	int b = 0200;//八进制数
	printf("b=%o\n", b);
	printf("b=%#o\n", b);

	return 0;
}