#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	/*int(*pa)[10] = &arr;*/
//	int i = 0;
//	for (;i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for (; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}*/
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,0},{3,3,4,5,6} };
//	print1(arr, 3, 5); //arr-������-������������Ԫ�ص�ַ
//	print2(arr, 3, 5);
//	return 0;
//}

//int arr[5]; //���Ԫ�ص��������飬
//int* parr1[10]; // 10������Ϊint*��Ԫ�ص�ָ������
//int(*parr2)[10];// parr2��һ��ָ�룬ָ��һ��10��int����Ԫ�����飬parr2������ָ��
//int(*parr3[10])[5]; //parr3��һ��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ��
                                    //������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
