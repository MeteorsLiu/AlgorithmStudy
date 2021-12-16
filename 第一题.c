#include <stdio.h>


unsigned long ConvertToInt(char *str) {
	unsigned long num = 0;
	char c;
	while (c = *str++) {
		if (c >= '0' || c <= '9') {
			num *= 10;
			num += (c - '0');
		}
	}
	return num;
}

int main(void)
{
	char str[100];
	printf("请输入一串数字\n");
	scanf("%s", str);
	printf("转换为Int为： %lu\n", ConvertToInt(str));
	return 0;
}
