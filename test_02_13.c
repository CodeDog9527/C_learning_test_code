#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//�����ݹ�
//����һ��������˳���ӡ�����еĸ�������,�ÿո����
//void print(int  n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}


//��д����������������ʱ���������ַ����ĳ���
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "hello world";
	//int len = strlen(arr);
	//printf("%d\n", len);
	int len = my_strlen(arr);//���鴫�Σ�����ȥ�Ĳ����������飬���������һ��Ԫ�صĵ�ַ
	printf("len=%d\n", len);
	return 0;
}