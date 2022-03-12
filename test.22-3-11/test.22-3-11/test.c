//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
////void print(char* str)
////{
////	printf("hehe:%s", str);
////}
////
////void test(void(*p)(char*))
////{
////	printf("test\n");
////	(*p)("hello world");
////}
////
////int main()
////{
////	test(print);
////	return 0;
////}
////
////void BubbleSort(int arr[], int sz)
////{
////	
////	for (int i = 0; i < sz; i++)
////	{
////		int temp = 0;
////		for (int j = 0; j <sz- i; j++)
////		{
////			if (arr[j] < arr[j-1])
////			{
////				temp = arr[j-1];
////				arr[j-1] = arr[j];
////				arr[j] = temp;
////				temp = 1;
////			}
////		}
////		if (temp == 0)
////		{
////			break;
////		}
////	}
////	for (int k = 0; k < sz; k++)
////	{
////		printf("%d ", arr[k]);
////	}
////
////}
////int main()
////{
////	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };//1 2 3 4 5 6 7 8 9
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	BubbleSort(arr, sz);
////	return 0;
////}
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int j = 0;
//	for (; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//}
//
//int cmp_float(const void*e1,const void*e2)
//{
//	//return ((int) ( * (float*)e1 - *(float*)e2));
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 < *(float*)e2)
//		return -1;
//	else
//		return 1;
//}
//void test2()
//{
//	float arr2[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.3,1.2 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, sz, sizeof(arr2[0]), cmp_float);
//	int j = 0;
//	for (; j < sz; j++)
//	{
//		printf("%.2lf ", arr2[j]);
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//}
//
//void Swap(char* e1, char* e2, int width)
//{
//	int i = 0;
//	for (; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;	
//	}
//
//}
//
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	for (; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (; j < sz - 1 - i; j++)
//		{
//			//比较两个元素的大小
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//}
//int main()
//{
//	/*test1();*/
//	/*test2();*/
//	/*test3();*/
//	/*test4();*/
//	test5();
//	return 0;
//}