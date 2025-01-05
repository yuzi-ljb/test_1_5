#include <stdio.h>

int main()
{
	char arr1[] = "asdfghjkl";
	char arr2[] = { 'a','s','d','f','g','h','j','k','l','\0'};
	printf("%s\n",arr1);
	printf("%s\n", arr2);
	printf("are you ok\?\?\?\n");
	printf("\"\n");
	printf("asd\bghjkl\n");
	printf("asd\b\n");
	printf("%c\n",'\'');
	printf("\r");
	printf("test\\a\n");
	printf("tes\ta\n");
	printf("%c\n", '\101');
	printf("%c\n", '\x41');
	return 0;
}