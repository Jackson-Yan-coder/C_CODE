#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//enum color
//{
//	red,
//	green,
//	blue=6
//};
//
//int main()
//{
//	enum color red = 2;
//	printf("%d %d %d", red, green, blue);
//	return 0;
//}

//
//int check_sys1()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int check_sys2()
//{
//	union un
//	{
//		char i;
//		int a;
//	}u;
//	u.a = 1;
//	return u.a;
//}
//int main()
//{
//	//int ret = check_sys1();
//	int ret = check_sys2();
//	if (ret == 1)
//	{
//		printf("xiaoduan");
//	}
//	else
//	{
//		printf("daduan");
//	}
//	return 0;
//}

//struct stu
//{
//	int a;
//	char b[100];
//};
//
//int main()
//{
//	struct stu cc={0};
//	scanf("%d %s", &cc.a, cc.b);
//	printf("%d \n %s", cc.a, cc.b);
//	return 0;
//
//}
