#include<stdio.h>
void test(int arr[])
	{
	int sz = sizeof(arr) / sizeof(arr[0]);//64λ-��ַ��СΪ8bit/int��������4bit=2
	printf("%d", sz);
}
int main()
{
	char arr[10] = { 0 };
	test(arr);
}