#include<stdio.h>
#include<math.h>

#include<string.h>


#include<string.h>//strcpy_s
#include <assert.h>//����assert(d!=NULL)
//int main()
//{
//int n;
//float m;
//printf("Input length and days:");
//scanf_s("%f,%d",&m,&n);
//
//for(int i=0;i<n;i--)
//{m=m-0.5*m;}
//printf("length=%.5f\n",m);
//return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10} ;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i ;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("%d", sz);
//	return 0;
//}

//********************
//void BULLE_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BULLE_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,3,2,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//&��������ȡ������������ĵ�ַ
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//*��������ȡ�õ�һ�������ַ������
//	printf("%p\n", *arr);
//	printf("%p\n", *arr+1);
//	return 0;
//}

//int main()
//{
//	float a = 1.0 / 3;
//	printf("%f", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;//0000 0000 0000 1010  10
//	          //0000 0000 0000 0010   2
//	int b = a >> 2;
//	char c = 65; 
//	printf("%d %c", b,c);
//	return 0;
//}

//int main()//�������µı��������������֣����
//{
//	int a = 3;//011
//	int b = 5;//111
//	printf("a=%d b=%d\n", a, b);
//	b = b ^ a;//b=100
//	a = a ^ b;//a=111
//	b = a ^ b;//b=011
//	printf("���\na=%d b=%d", a, b);
//	return 0;
//}

////�����е�1 �ĸ���
//int main()
//{
//	int num, count=0;
//	scanf_s("%d", &num);
//	//32bit
//	//num&1==1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num/ 2;
//	}*/
//	for (int i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1)==1 )
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ������
//	printf("%d", *p);//�����ò�����
//	return 0;
//}

//int main()
//{
//	int a = 19;
//	char c = 'e';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

////�ַ������ȵĶ�ȡ
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int temp=0;
//	int var1[3];
//	for (int i = 0; i < 3; i++)
//	{		scanf_s("%d", &var1[i]);
//	}
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 2; j++)
//		{
//			if (var1[j] > var1[j + 1])
//			{
//				temp = var1[j];
//				var1[j] = var1[j+1];
//				var1[j+1] = temp;
//			}
//		}
//	printf("%d",var1[1]);
//	return 0;
//}

//struct �ṹ��ؼ��� Stu�ṹ
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//struct Stu��������ΪStu
//
//int main()
//{
//	Stu s1 = {"�ܳ�",20,"15353781673","��"};//�ֲ�����s
//	struct Stu s2 = { "�ű�",20,"15355555555","��" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.sex);
//	printf("%s\n", s1.tele);
//	return 0;
//}

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //struct Stu��������ΪStu
//void Print1(Stu s)
//{
//	printf("name: %s\n", s.name);
//	printf("age:  %d\n", s.age);
//	printf("tele: %s\n", s.tele);
//	printf("sex:  %s\n", s.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age:  %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "����",40,"12233445566","��" };
//	//��ӡ�ṹ������
//	Print1(s);//Print1�������ݴ���
//	Print2(&s);//Print2���ݵ�ַ��ʡ�ռ�
//	return 0;
//}

//int main()
//{
//	int i;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//		//system("pause");
//	}
//	return 0;
//}


//strcpy���ӳ���ʵ��
//char* my_strcpy_s(char* d, const char* s)
//{
//	char* ret = d;
//	assert(d != NULL);//����
//	assert(s != NULL);
//	while (*d++ = *s++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char d[11] = "##########";
//	char s[4] = "bit";
//	printf("%s", my_strcpy_s(d,s));
//	return 0;
//}

//дһ�δ����жϴ�С��ģʽ
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*) & a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//	//����1��С�ˣ�����0�����
//}
//int main()
//{	
//	int ret=check_sys();//����1��С�ˣ�0 �����
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//Ұָ�����Խ�絼������ѭ��
////Ұָ�����Խ�絼������ѭ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i <= 15; i++)
//	{
//		printf("hehe\n");
//		printf("he\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

////char�����з��������޷�����
//int main()
//{
//	char a = -1;
//	//100000000 00000000 00000000 00000001
//	//111111111 11111111 11111111 11111110
//	//111111111 11111111 11111111 11111111
//	//                            11111111->char a
//	//111111111 11111111 11111111 11111111->char a
//	signed char b = -1;
//	unsigned char c = -1;
//	//100000000 00000000 00000000 00000001
//	//111111111 11111111 11111111 11111110
//	//111111111 11111111 11111111 11111111
//	//                            11111111->char c
//	//000000000 00000000 00000000 11111111->char c
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//-1 -1 255
//	return 0;
//}

int main()
{
	char a = 128;
	char b = -128;
	printf("a=%d,b=%d", a, b);
	return 0;
}