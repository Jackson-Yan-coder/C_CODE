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
//	print1(arr, 3, 5); //arr-数组名-数组名就是首元素地址
//	print2(arr, 3, 5);
//	return 0;
//}

//int arr[5]; //五个元素的整型数组，
//int* parr1[10]; // 10个类型为int*的元素的指针数组
//int(*parr2)[10];// parr2是一个指针，指向一个10个int类型元素数组，parr2是数组指针
//int(*parr3[10])[5]; //parr3是一个数组有10个元素，每个元素是一个数组指针
                                    //该数组指针指向的数组有5个元素，每个元素是int
