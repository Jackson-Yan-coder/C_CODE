#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//strtok
//int main()
//{
//	char arr[] = "ni@shi.zhu";
//	char* p = "@.";
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char* str = strerror(errno);
//	printf("%s", str);
//	return 0;
//}


//char* my_memmove(void* dest, const void* scr, size_t count)
//{
//	void* ret = dest;
//	assert(dest && scr);
//	if (dest < scr)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)scr;
//			++(char*)dest;
//			++(char*)scr;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)scr + count);
//		}
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memmove(arr3, arr3 + 2, 20);
//	memmove(arr3, arr3 + 2, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}

