#include<stdio.h>;
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf_s("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�����루Y/N):<");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("�����ɹ�\n");
	}
	return 0;
}