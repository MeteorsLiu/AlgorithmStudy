#include <stdio.h>


int reverse(int n) {
	int temp;
	if (n < 10) {
		n *= 10;
	} else {
		 temp = n / 10;
		 n = (n-temp*10)*10+temp;
	}
	return n;
}

int main(void)
{
	int counter,y,m;
	for (y = 0; y < 100; ++y)
	{
		for (m = 1; m <= 12; ++m)
		{
			if (y == reverse(m)) {
				if (y < 10 && m <10) {
					printf("回文日期：200%d-0%d-02\n", y, m);
				} else if (y < 10) {
					printf("回文日期：200%d-%d-02\n", y, m);
				} else if (m < 10){
					printf("回文日期：20%d-0%d-02\n", y, m);
				} else {
					printf("回文日期：20%d-%d-02\n", y, m);
				}
				counter++;
			}
		}
	}
	printf("总共回文日期数量：%d\n", counter);
	return 0;
}