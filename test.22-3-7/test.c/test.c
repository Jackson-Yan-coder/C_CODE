#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>


//char* my_strcpy(char* dest, const char* scr)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(scr != NULL);
//	//把scr指向的字符串拷贝到dest指向的空间，包含\0''字符
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hel";
//	char arr2[] = "fe";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


int my_strlen(const char* scr)
{
	int count = 0;
	assert(*scr != NULL);//保证指针有效性
	while (*scr != '\0')
	{
		scr++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] =  "xiaoyan" ;
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}