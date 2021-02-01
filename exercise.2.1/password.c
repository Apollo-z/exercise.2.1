#include<stdio.h>;
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf_s("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认密码（Y/N):<");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃成功\n");
	}
	return 0;
}