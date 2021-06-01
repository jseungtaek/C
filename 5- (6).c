#include <stdio.h>
#include <ctype.h>

#define dot '0'
#define dash '1'

int main(void)
{
	int c;
	int flag = 1;
	char m_cod[26][5] = {
	{dot, dash},   //A
	{dash, dot, dot, dot},   //B
	{dash, dot, dash, dot},   //C
	{dash, dot, dot},   //D
	{dot},   //E
	{dot, dot, dash, dot},   //F
	{dash, dash, dot},   //G
	{dot, dot, dot, dot},   //H
	{dot, dot}, //I
	{dot, dash, dash, dash}, //J
	{dash, dot, dash}, //K
	{dot, dash, dot, dot}, //L
	{dash, dash}, //M
	{dash, dot}, //N
	{dash, dash, dash}, //O
	{dot, dash, dash, dot}, //P
	{dash, dash, dot, dash}, //Q
	{dot, dash, dot}, //R
	{dot, dot, dot}, //S
	{dash}, //T
	{dot, dot, dash}, //U
	{dot, dot, dot, dash}, //V
	{dot, dash, dash}, //W
	{dash, dot, dot, dash}, //X
	{dash, dot, dash, dash}, //Y
	{dash, dash, dot, dot} //Z
	};

	while ((c = getchar()) != '\n') {
		if (isspace(c) == 0 && isalpha(c)) {
			c = toupper(c);
			printf("%s ", m_cod[c - 'A']);
			flag = 0;
		}
		else if (isspace(c) && flag == 0) {
			printf("  ");
			flag = 1;
		}
	}

	return 0;
}