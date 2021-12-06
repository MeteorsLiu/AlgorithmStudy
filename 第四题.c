#include <stdio.h>


void newCopy(char *str1, char *str2) {
	char c;
	while ((c = *str2++)) {
		if (c < 97 || c  > 122) *str1++ = c;
	}
}
int main(void)
{
	char a[100];
	scanf("%s", a);
	char b[100];
	newCopy(b,a);
	printf("%s",b);
	return 0;
}
