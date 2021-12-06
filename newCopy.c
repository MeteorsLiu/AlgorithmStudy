#include <stdio.h>

void newCopy(char *str1, char *str2) {
	//It's not safe when we don't know how many lowcase characters in str2
	//However it's just homework :)
	char c;
	while ((c = *str2++)) {
		if (c < 97 || c  > 122) *str1++ = c;
	}
}
int main(void)
{
	char a[] = "ABc";
	char b[2];
	newCopy(b,a);
	printf("%s",b);
	return 0;
}
