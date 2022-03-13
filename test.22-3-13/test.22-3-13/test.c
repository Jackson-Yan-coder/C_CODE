#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//char* my_strcpy(char* arr1,const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	//while (*arr2 != '\0')
//	//{
//	//	*arr1++ = *arr2++;
//	//}
//	//*arr1 = *arr2;
//	char* ret = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//
//}
//char* my_strcat(char* dest, char* scr)
//{
//	char* ret = dest;
//	assert(dest && scr);
//	while (* dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		p1++;
//		p2++;
//	}
//	 return *p1 - *p2;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwer";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//}

//Ä£ÄâÊµÏÖstrstr
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("zhaobudao");
//	}
//	else if (ret == p1)
//	{
//		printf("%s", p1);
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//	return 0;
//}
