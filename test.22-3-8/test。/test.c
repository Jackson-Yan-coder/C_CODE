#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>

//大端存储模式：数据的低位保存在内存中的高地址中，数据的高位保存在内存中的低地址中；
//小端存储模式：数据的低位保存在内存中的低地址中，数据的高位保存在内存中的高地址中；

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//	//返回1，小端
//	//返回0，大端
//}
//int main()
//{
//	//写一段代码了解当前机器的字节序
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//int main()
//{
//	int a[10] ={ 1};
//	return 0;
//}

//int main()
//{
//	char arr[10] = "10232";
//	int length = (int)strlen(arr);
//	printf("%d\n", length);
//	return 0;
//}

//int main()
//{
//	unsigned int i = 0;
//	for (; i <= 255; i++)
//	{
//		printf("666%d\n",i);  //无限循环
//		Sleep(100);
//	}
//	
//	return 0;
//}

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);  //×64指针8个字节；×32指针4个字节
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";  //常量字符串
//	*p = 'w';   //err
//	printf("%s\n", p);
//	/*printf("%c\n", *p);
//	printf("%s\n", p);*/
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe");
//	//}
//	//else
//	//{
//	//	printf("haha");
//	//}
//	/////////
//	printf("%p\n", p1);
//	if (p1 == p2)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 }; //整形数组
//	char ch[5] = { 0 }; // 字符数组
//	int* parr[4];  //存放整形指针的数组-指针数组
//	char* pch[5]; //存放字符的数组-指针数组
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (; j < 5; j++)
//		{
//			printf("%d ", *((parr[i]) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}