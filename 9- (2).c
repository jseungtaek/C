#include <Stdio.h>
struct student
{
	int number;
	char name[8];
	int age;
};

int main()
{
	int i, j;
	int max, min;

	struct student list[5] = {
		{ 20120001,"ȫ�浿" },
		{ 20131234,"��ö��" },
		{ 20145678,"�迵��" },
		{ 20151111,"�̱���" },
		{ 20162222,"�ڴ���" }
	};
	struct student tmp;

	printf("���̸� �Է��ϼ���(�浿,ö��,����,����,���� ������)");
	for (i = 0; i < 5; i++)
		scanf("%d", &list[i].age);
	for (i = 0; i < 5; i++)
	{
		max = i;
		for (j = i; j < 5; j++)
		{
			if (list[max].age < list[j].age)
				max = j;
			else if (list[max].age == list[j].age)
				if (strcmp(list[max].name, list[j].name) > 0)
					max = j;
		}

		tmp = list[max];
		list[max] = list[i];
		list[i] = tmp;


	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", list[i].number);
		for (j = 0; j < 8; j++)
			printf("%c", list[i].name[j]);
		printf("%d\n", list[i].age);
	}

	return 0;
}