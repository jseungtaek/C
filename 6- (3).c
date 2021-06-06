#include<stdio.h>

int StrNCmp(const char *s1, const char *s2, int n);
int main(void)
{
	char s1[101], s2[101];
	int n;

	scanf("%s%s", &s1, &s2);
	scanf("%d", &n);

	printf("%d", StrNCmp(s1, s2, n));

	return 0;
}
int StrNCmp(const char *s1, const char *s2, int n)
{
	int i;
	
	for (i = 0;i < n;i++)
	{
		if (*(s1+i) > *(s2+i))
			return 1;
		else if (*(s1 + i) < *(s2 + i))
			return -1;
	}
	return 0;
}