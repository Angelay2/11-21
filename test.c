#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//����10 �����еĴδ�ֵ
int one()
{
	int tmp = 0;
	int max = 0x80000000;//��ʼ������Сֵ
	int nxt = 0x80000000;//��ʼ������Сֵ

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &tmp);

		if (tmp > max)
		{
		//��max�еľ����ֵ����nxt��
			nxt = max;
		//�������ֵ����max��
			max = tmp;
		}//tmp�е�ֵ�������ֵʱ��������nxt�еľɴδ�ֵ�Ƚ�
		else if (tmp > nxt)
		{
			nxt = tmp;
		}
	}

	printf("%d", nxt);
	system("pause");
	return 0;
}
//����10�����е����ֵ��
int two()
{
	int tmp = 0;
	int max = 0x80000000;//��ʼ������Сֵ
	printf("����������10������\n");
	int i = 0;
	for (i = 0; i < 10; i++){
		scanf("%d", &tmp);
		if (tmp > max){
			max = tmp;
		}
	}
	printf("��10���������ֵΪ%d\n", max);
	system("pause");
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("����������3��������\n");
	scanf("%d%d%d", &a, &b, &c);

	int tmp;
	//�����Ƚϣ���ķ�a�С�ķ�b��
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	//b���Сֵ��c�ȽϺ󣬰Ѵ�ķ���b���С�ķ���c��
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	//�Ƚ�������ĺ����ķ���a��δ����b���С��c��
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	printf("��3�����Ӵ�С���Ϊ��\n%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}