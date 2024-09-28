#include<stdio.h>

//void test(int arr[])
//	{
//	int sz = sizeof(arr) / sizeof(arr[0]);//64位-地址大小为8bit/int类型数据4bit=2
//	printf("%d", sz);
//}

//int main()
//{
//	char arr[10] = { 0 };
//	test(arr);
//}
////字符指针
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%s\n", arr);
//	printf("%s\n", p);
// return 0;
//}

//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	printf("%c\n", *p);
//	printf("%s\n", p);//p中为字符串的a的地址
//	return 0;
//}

//指针数组-用来存放指针
//int main()
//{
//	int arr[10] = {0};//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组-指针数组
//	char* pch[5];//存放字符指针的数组-指针数组
//	return 0;
//}

////胡扯
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i; i < 4; i++)
//	{
//		printf("%d ", * (arr[i]));
//	}
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i=0; i < 3; i++)
	{
		int j = 0;
		for (j=0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}