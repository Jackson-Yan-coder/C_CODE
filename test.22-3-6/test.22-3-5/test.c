#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
 
//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d\n", tmp);
//	}
//	int  arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	
//	return 0;
//}

//void test2()
//{
//	printf("hehe");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++ )
//	{
//		int j = 0;
//		for (j = 1; j < i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	std::cout << "Enter two numbers:" << std::endl;
//	int v1 = 0, v2 = 0;
//	std::cin >> v1 >> v2;
//	std::cin >> "The sum of" << v1 << "and" << v2
//		<< "is" << v1 + v2 << std::endl;
//	return 0;
//}


//void my_strcpy(char *dest, char *scr)//arr1=dest,arr2=scr
//{
//	while (*scr != '\0')
//	{
//		*dest = *scr;
//		dest++;
//		scr++;
//	}
//	*dest = *scr;
//}

//void my_strcpy(char* dest, char* scr)
//{
//	if (dest != NULL && scr != EOF)
//	{
//		while (*dest++ = *scr++)
//		{
//			;
//		}
//	}
//}

//#include<assert.h>
//void my_strcpy(char* dest, char* scr)//scr加const
//{
//	assert(dest != NULL);//断言
//	assert(scr != NULL);
//	while (*dest++ = *scr++)
//		{
//			;
//		}
//}
//
//int main()
//{
//	char arr1[] = { "############" };
//	char arr2[] = { "bit" };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//
//}

int main()
{
	const int num = 10;
	const int* p = &num;

	//*p = 20;//err
	//const放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p(num)的值
	//const放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了

	printf("%d\n", num);

	return 0;
}