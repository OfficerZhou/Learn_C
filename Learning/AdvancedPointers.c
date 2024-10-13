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
//	const char arr[] = "abcdef";
//	char* p = arr;
//	printf("%s\n", arr);
//	printf("%s\n", p);
// return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串
//	printf("%c\n", *p);
//	printf("%s\n", p);//p中为字符串的a的地址
//	return 0;
//}

//**********************************指针数组-用来存放指针
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

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i=0; i < 3; i++)
//	{
//		int j = 0;
//		for (j=0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

////*****************************数组指针
//int main()
//{
//	int* p = NULL;//p是整形指针-指向整型的指针-存放整形的地址
//	char* pc = NULL;//pc是字符指针-只想字符的指针-存放字符的地址
//	//数组指针-指向数组的指针-存放数组的地址
//	int arr[10] = { 0 };
//	//arr-首元素的地址
//	//arr[0]-首元素地址
//	//&arr-数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
// }

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	/*int* p = arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//
//	//int(*pa)[10] = &arr;
//	//int i;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa=arr
//	//}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}

//**********真实用法
//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i;
//	int j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr-数组名-首元素地址
//	print2(arr, 3, 5);
//	return 0;
//}

//***********************数组传参
//***一维数组
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test(int *arr[])
//{}
//void test2(int *arr[20])
//{}
//void test(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//**********************************************函数指针

//signal是一个函数声明
//signal函数参数有两个，第一个是int。第二个是函数指针:该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//void(* signal(int,void(*)(int)))(int);

////简化
//typedef void(*hanshuzhizhen)(int);
//hanshuzhizhen signal(int, hanshuzhizhen);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 20;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));//多一个*纯摆设
//	return 0;
//}

//**********************************************函数指针数组
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	int (*p)(int, int);
//	//需要一个数组，这个数组可以存放4个函数的地址--函数指针的数组
//	int (*prr[2])(int, int) = { Add,Sub };
//	int i = 0;
//	for (i = 0; i < 2; i++)
//		printf("%d ", prr[i](3, 2));
//	return 0;
//}

//练习
//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
////写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfArr[10])(char*, const char*) = { my_strcpy };


//计算器
void menu()
{
	printf("********************************\n");
	printf("***    1.add       2.sub     ***\n");
	printf("***    3.mul       4.div     ***\n");
	printf("****         0.exit         ****\n");
	printf("********************************\n");
}
int Add(int x,int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//函数指针数组--转移表
	int (*pfArr[5])(int, int) = { 0 ,Add,Sub,Mul,Div};
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("intput two:\n");
			scanf_s("%d %d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("exit");
		}
		else
		{
			printf("errro select");
		}
	} while (input);
	return 0;
}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		int x, y;
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个数:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个数:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个数:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("请输入两个数:>");
//			scanf_s("%d%d", &x, &y);
//			printf("退出");
//				break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//}
