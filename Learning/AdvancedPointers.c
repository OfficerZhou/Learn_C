#include<stdio.h>
void test(int arr[])
	{
	int sz = sizeof(arr) / sizeof(arr[0]);//64位-地址大小为8bit/int类型数据4bit=2
	printf("%d", sz);
}
int main()
{
	char arr[10] = { 0 };
	test(arr);
}