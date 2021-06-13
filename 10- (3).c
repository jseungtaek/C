#include<stdio.h>

struct Clock
{
	int hour;
	int min;
	int sec;
};
void incHour(struct Clock *clk);
void incMin(struct Clock *clk);
void incSec(struct Clock *clk);
int main()
{
	struct Clock time;
	char clk;

	printf("시간을 입력하시오.");
	scanf("%d%d%d", &time.hour, &time.min, &time.sec);

	while (1)
	{
		clk = getchar();

		
		if (clk == 'h')
			incHour(&time);
		if (clk == 'm')
			incMin(&time);
		if (clk == 's')
			incSec(&time);
		if (time.hour >= 24)
		{
			time.hour -= 24;
		}
		if (time.min >= 60)
		{
			time.min -= 60;
			time.hour++;
		}
		if (time.sec >= 60)
		{
			time.sec -= 60;
			time.min++;
		}
		if (clk == 'q')
			break;
	}

	printf("%d시 %d분 %d초", time.hour, time.min, time.sec);

	return 0;
}
void incHour(struct Clock *clk)
{
	clk->hour += 1;
}
void incMin(struct Clock *clk)
{
	clk->min += 1;
}
void incSec(struct Clock *clk)
{
	clk->sec += 1;
}