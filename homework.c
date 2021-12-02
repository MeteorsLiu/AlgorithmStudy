#include <stdio.h>
#include <time.h>
#include <string.h>




int main(void) {
	struct tm t;
	t.tm_sec = 0;
	t.tm_min = 0;
	t.tm_hour = 0;
	t.tm_mday   = 16;
	t.tm_mon    = 10-1;
    t.tm_year   = 2002-1900;
    
    time_t birth = mktime(&t);
    char buf[10];
	int Flag = 0;
	int len;
	int counter = 0;
	for (; birth < 4102416000; birth+=86400){
		Flag = 0;
		strftime(buf, 10, "%Y%m%d", localtime(&birth));
		len = strlen(buf);
		for (int i=0;i < (len/2);++i) {
			Flag = (buf[i] == buf[len-i-1]) ? 1 : 0;
			if (!Flag) break;
		}
		if (Flag) {
			printf("%s\n", buf);
			counter++;
		}
		
	}
	printf("%d", counter);
	return 0;
}
