#include <stdio.h>
#include <time.h>
#include <string.h>




int main(void) {
	struct tm t;
	t.tm_sec = 0;
	t.tm_min = 0;
	t.tm_hour = 0;
	t.tm_mday   = 1;
	t.tm_mon    = 0;
    	t.tm_year   = 2000-1900;
   	time_t birth = mktime(&t);
    	char buf[10];
	int Flag,counter,len,i;
	for (; birth < 4102416000; birth+=86400){
		Flag = 0;
		strftime(buf, 10, "%Y%m%d", localtime(&birth));
		len = strlen(buf);
		for (i=0;i < (len/2);++i) {
			Flag = (buf[i] == buf[len-i-1]) ? 1 : 0;
			if (!Flag) break;
		}
		if (Flag) {
			printf("回文日期：%s\n", buf);
			counter++;
		}
		
	}
	printf("总共回文日期数量：%d", counter);
	return 0;
}
