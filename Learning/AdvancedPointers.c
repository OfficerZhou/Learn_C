#include<stdio.h>

//void test(int arr[])
//	{
//	int sz = sizeof(arr) / sizeof(arr[0]);//64λ-��ַ��СΪ8bit/int��������4bit=2
//	printf("%d", sz);
//}

//int main()
//{
//	char arr[10] = { 0 };
//	test(arr);
//}
////�ַ�ָ��
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
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���
//	printf("%c\n", *p);
//	printf("%s\n", p);//p��Ϊ�ַ�����a�ĵ�ַ
//	return 0;
//}

//**********************************ָ������-�������ָ��
//int main()
//{
//	int arr[10] = {0};//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�������-ָ������
//	char* pch[5];//����ַ�ָ�������-ָ������
//	return 0;
//}

////����
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

////*****************************����ָ��
//int main()
//{
//	int* p = NULL;//p������ָ��-ָ�����͵�ָ��-������εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ��-ֻ���ַ���ָ��-����ַ��ĵ�ַ
//	//����ָ��-ָ�������ָ��-�������ĵ�ַ
//	int arr[10] = { 0 };
//	//arr-��Ԫ�صĵ�ַ
//	//arr[0]-��Ԫ�ص�ַ
//	//&arr-����ĵ�ַ
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

//**********��ʵ�÷�
//�������������ʽ
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
////������ָ�����ʽ
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
//	print1(arr, 3, 5);//arr-������-��Ԫ�ص�ַ
//	print2(arr, 3, 5);
//	return 0;
//}

//***********************���鴫��
//***һά����
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

//**********************************************����ָ��

//signal��һ����������
//signal������������������һ����int���ڶ����Ǻ���ָ��:�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//void(* signal(int,void(*)(int)))(int);

////��
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
//	printf("%d\n", (**pa)(2, 3));//��һ��*������
//	return 0;
//}

//**********************************************����ָ������
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
//	//ָ������
//	int* arr[5];
//	int (*p)(int, int);
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ--����ָ�������
//	int (*prr[2])(int, int) = { Add,Sub };
//	int i = 0;
//	for (i = 0; i < 2; i++)
//		printf("%d ", prr[i](3, 2));
//	return 0;
//}

//��ϰ
//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
////дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfArr[10])(char*, const char*) = { my_strcpy };


//������
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
	//����ָ������--ת�Ʊ�
	int (*pfArr[5])(int, int) = { 0 ,Add,Sub,Mul,Div};
	do
	{
		menu();
		printf("��ѡ��:>");
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
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//		int x, y;
//		switch (input)
//		{
//		case 1:
//			printf("������������:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("������������:>");
//			scanf_s("%d%d", &x, &y);
//			printf("�˳�");
//				break;
//		default:
//			printf("ѡ�����");
//			break;
//		}
//	} while (input);
//}
