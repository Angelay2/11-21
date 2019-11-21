#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//输入10 个数中的次大值
int one()
{
	int tmp = 0;
	int max = 0x80000000;//初始化赋最小值
	int nxt = 0x80000000;//初始化赋最小值

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &tmp);

		if (tmp > max)
		{
		//将max中的旧最大值赋给nxt。
			nxt = max;
		//将新最大值赋给max。
			max = tmp;
		}//tmp中的值不是最大值时，将其与nxt中的旧次大值比较
		else if (tmp > nxt)
		{
			nxt = tmp;
		}
	}

	printf("%d", nxt);
	system("pause");
	return 0;
}
//输入10个数中的最大值。
int two()
{
	int tmp = 0;
	int max = 0x80000000;//初始化赋最小值
	printf("请输入任意10个数：\n");
	int i = 0;
	for (i = 0; i < 10; i++){
		scanf("%d", &tmp);
		if (tmp > max){
			max = tmp;
		}
	}
	printf("这10个数的最大值为%d\n", max);
	system("pause");
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入任意3个整数：\n");
	scanf("%d%d%d", &a, &b, &c);

	int tmp;
	//两数比较，大的放a里，小的放b里
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	//b里的小值与c比较后，把大的放在b里，最小的放在c里
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	//比较两个大的后，最大的放在a里，次大放在b里，最小在c里
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	printf("这3个数从大到小输出为：\n%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}