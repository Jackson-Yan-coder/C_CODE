//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<string.h>
//
////int calculate(char* s) {
////	int x = 1, y = 0;
////	while (*s != '\0')
////	{
////		if (*s == 'A')
////		{
////			x = x * 2 + y;
////		}
////		if (*s == 'B')
////		{
////			y = 2 * y + x;
////		}
////		s++;
//////	}
//////	return x + y;
//////}
////
////
////bool zz(char* ransomNate, char* magazine)
////{
////	int p = magazine;
////	int len = strlen(ransomNate);
////	int count = 0;
////	while ( *ransomNate!='\0' )
////	{
////		ransomNate++;
////		p = ++magazine;
////		for (; *magazine != '\0';p++ )
////		{
////			if (*ransomNate == p)
////			{
////				count++;
////				break;
////			}
////		}
////	}
////	if (count == len)
////	{
////		return true;
////	}
////	else
////	{
////		return false;
////	}
////}
//
////
////bool canConstruct(char* ransomNote, char* magazine) {
////    int count[26] = { 0, };
////    int len1 = strlen(ransomNote);
////    int len2 = strlen(magazine);
////    for (int i = 0; i < len2; i++) {
////        count[magazine[i] - 'a']++;
////    }
////    for (int i = 0; i < len1; i++) {
////        if (count[ransomNote[i] - 'a'] <= 0) {
////            return false;
////        }
////        count[ransomNote[i] - 'a']--;
////    }
////    return true;
////}
////
////int main()
////{
////	char arr1 = "aa";
////	char arr2 = "aab";
////	printf("%d\n", zz(arr1, arr2));
////	return 0;
////}
//// 28
////#define MAX_
////int row_x_col(int grid[100][100])
////{
////	int zhouchang = 0;
////	for (int i = 0; i < ; i++)
////	{
////		for (int j = 0; j < 4; j++ )
////		{
////			if (grid[i][j] == 1)
////			{
////				zhouchang += 4;
////				if (grid[++i][j] == 1&&i<3)
////				{
////					zhouchang-=2;
////					i--;
////				}
////				else if (grid[i][++j] == 1&&j<3)
////				{
////					zhouchang-=2;
////					j--;
////				}
////			}
////		}
////	}
////	return zhouchang;
////}
////int main()
////{
////	int arr[4][4] = { 1 };
////	printf("%d\n", row_x_col(arr));
////	return 0;
////}
//
////int robe(int* arr)// 2 7 9  3 1 9
////{
////
////}
////
////int qujian(int intervals[][2])
////{
////
////
////}
////
////int main()
////{
////	int arr[][2] = { {1,3},{2,6} };
////	qujian(arr);
////	return 0;
////}
//
////int main()
////{
////	char* p2 = "abcdef";
////	printf("%c\n", *p2);
////	int arr2[5]={1,2,3,4,5};
////	int(*pa)[5] = arr2;
////	printf("%d\n", * pa[0]);
////	return 0;
////}
//
////void(*signal(int,   void(*)(int)   )  )   (int);
//
////typedef void(*pfun_t)(int);
////pfun_t signal(int, pfun_t);
//
//
////char* my_strcpy(char* dest, const char* src);
//////char* pf(char*(my_strcpy)(char*, const char*));
////char* (*pf)(char*, const char*);
////char* (*pfArr[4])(char*, const char*);
////
//
//
////row == grid.length
////col == grid[i].length
////1 <= row, col <= 100
////grid[i][j] Îª 0 »ò 1
//
//int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
//    int edge_total = 0;
//    for (int i = 0; i < gridSize; i++)//x
//    {
//        for (int j = 0; j < gridColSize[0]; j++)//y
//        {
//            if (grid[i][j])
//            {
//                edge_total += 4;
//                if (grid[i + 1][j])
//                {
//                    edge_total -= 2;
//                }
//                if (grid[i][j + 1])
//                {
//                    edge_total -= 2;
//                }
//                //if (i > 0)
//                //    edge_total -= grid[i - 1][j];
//                //if (i < gridSize - 1)
//                //    edge_total -= grid[i + 1][j];
//                //if (j > 0)
//                //    edge_total -= grid[i][j - 1];
//                //if ((j < gridColSize[0] - 1))
//                //    edge_total -= grid[i][j + 1];
//            }
//        }
//    }
//    return edge_total;
//}
//
//int max(int x, int y)
//{
//    return x > y ? x : y;
//}
//int rob(int* nums, int numsSize) {
//    if (numsSize = 1)
//    {
//        return nums[0];
//    }
//    else
//    {
//        int dp[numsSize];
//        dp[0] = nums[0];
//        dp[1] = max(nums[0], nums[1]);
//        for (int i = 2; i < numsSize; i++)
//        {
//            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
//        }
//    }
//    return max(dp[nums - 1], dp[numsSize - 2]);
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//int main()
//{
//
//	return 0;
//}