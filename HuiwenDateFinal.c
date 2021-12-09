#include <stdio.h>


int reverse(int n) {
	if (n < 10) {
		n *= 10;
	} else {
		int temp = n/10;
		n = (n-temp*10)*10+temp;
	}
	return n;
}

int main(void) {
	int m;

	for (m = 1; m <= 12; ++m) {
		if (m < 10) {
			printf("回文日期: 20%d0%d02\n", reverse(m), m);
		} else if (m == 10) {
			printf("回文日期: 20011002\n");
		}else {
			printf("回文日期: 20%d%d02\n", reverse(m), m);
		}
	}
	return 0;
}
