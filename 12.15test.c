#define _CRT_SECURE_NO_WARNINGS
//////��һ��
////#include <stdio.h>
////int main()
////{
////	int day = 0;
////	scanf("%d",&day);
////	switch(day)
////	{
////		case 0:
////			printf("Sunday");
////			break;
////		case 1:
////			printf("Monday");
////			break;
////		case 2:
////			printf("Tuesday");
////			break;
////		case 3:
////			printf("Wednesday");
////			break;
////		case 4:
////			printf("Tursday");
////			break;
////		case 5:
////			printf("Friday");
////			break;
////		case 6:
////			printf("Saturday");
////			break;
////	}
////	return 0;
////}
////
//////�ڶ���
////#include <stdio.h>
////int main()
////{
////	int a, b, c;
////	scanf("%d %d %d",&a,&b,&c);
////	if (a + b > c && a + c > b && b + c > a)
////	{
////		if (a == b && b != c || a == c && c != b || b == c && c != a)
////		{
////			printf("%d",2);
////		}
////		else if (a == b && b == c)
////		{
////			printf("%d", 3);
////		}
////		else
////		{
////			printf("%d", 1);
////		}
////	}
////	else
////	{
////		printf("%d",0);
////	}
////	return 0;
////}
////
////
//////������
////#include <stdio.h>
////int main()
////{
////    int x = 0, y = 0;
////    scanf("%d", &x);
////    if (x > 2 && x <= 10)
////    {
////        printf("y = %d", x * (x + 2));
////    }
////    else if (x > -1 && x <= 2)
////    {
////        printf("y = %d",2 * x);
////    }
////    else if (x <= -1)
////    {
////        printf("y = %d", x - 1);
////    }
////    else
////    {
////        printf("�������");
////    }
////    return 0;
////}
////
////������
////#include <stdio.h>
////int main()
////{
////	int month;
////	scanf("%d", &month);
////	switch (month)           //���ͱ��ʽ
////	{
////		case 1:              //���ͳ������ʽ
////			printf("January");
////			break;
////		case 2:              //���ͳ������ʽ
////			printf("February");
////			break;
////		case 3:              //���ͳ������ʽ
////			printf("March");
////			break;
////		case 4:              //���ͳ������ʽ
////			printf("April");
////			break;
////		case 5:              //���ͳ������ʽ
////			printf("May");
////			break;
////		case 6:              //���ͳ������ʽ
////			printf("June");
////			break;
////		case 7:              //���ͳ������ʽ
////			printf("July");
////			break;
////		case 8:              //���ͳ������ʽ
////			printf("August");
////			break;
////		case 9:              //���ͳ������ʽ
////			printf("September");
////			break;
////		case 10:              //���ͳ������ʽ
////			printf("October");
////			break;
////		case 11:              //���ͳ������ʽ
////			printf("November");
////			break;
////		case 12:              //���ͳ������ʽ
////			printf("December");
////			break;
////		default:
////			printf("�������");
////			break;
////	}
////	return 0;
////}
////
//////������
////#include <stdio.h>
////int main()
////{
////	int count_l = 0, count_s = 0, count_n = 0, count_e = 0;
////	char str[100];
////	fgets(str, 100, stdin);
////	for (int i = 0; str[i] != '\0'; i++)
////	{
////		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
////		{
////			count_l++;
////		}
////		else if (str[i] == ' ')
////		{
////			count_s++;
////		}
////		else if (str[i] >= '0' && str[i] <= '9')
////		{
////			count_n++;
////		}
////		else
////		{
////			count_e++;
////		}
////	}
////	printf("%d %d %d %d\n", count_l, count_s, count_n, count_e - 1);   //ע���ַ�����ĩβ��һ��'\0'Ҳ��һ�������ַ������count_eҪ��ȥ1
////	return 0;
////}
////
////������
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 7 == 0 || i % 11 == 0)
//		{
//			if ((i % 7 == 0 && i % 11 != 0) || (i % 7 != 0 && i % 11 == 0))
//			{
//				count++;
//				printf("%d", i);
//				if (i < 99)
//				{
//					printf(" ");
//				}
//			}
//		}
//	}
//	printf("\n");
//	printf("%d",count);
//	return 0;
//}
//////������
////#include <stdio.h>
////int main()
////{
////	int arr[100];
////	int n = 0;
////	int len = 0;
////	int min = 0;
////	int index = 0;
////	printf("��������Ҫ��������ֵĸ�����");
////	scanf("%d", &n);
////	for (int i = 0; i < n ; i++)
////	{
////		scanf("%d", &arr[i]);
////	}
////	min = arr[0];
////	for (int k = 1; k < n; k++)
////	{
////		if (arr[k] < arr[0])
////		{
////			min = arr[k];
////			index = k;
////		}
////	}
////	printf("��Сֵ�ǣ�%d\n", min);
////	printf("�±��ǣ�%d", index);
////	return 0;
////}
////
////�ڰ���
////#include <stdio.h>
////int main()
////{
////	int m = 0;
////	int count = 0;
////	scanf("%d", &m);
////	for (int i = 1; i <= m; i++)
////	{
////		if (i % 7 == 0 || i % 11 == 0)
////		{
////			printf(i <= 7 ? "%d" : " %d",i);      //ͬһ�е������һ��������ո�
////			count++;
////		}
////	}
////	printf("\n");
////	printf("%d", count);
////	return 0;
////}
////
////
//////�ھ���
////#include <stdio.h>
////int main()
////{
////	char str[100];
////	fgets(str, 100, stdin);
////	for (int i = 0; str[i] != '\0'; i++)
////	{
////		if (i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z')
////		{
////			str[i] = str[i] - 32;
////		}
////	}
////	puts(str);
////	return 0;
////}

//��ʮ��
//#include <stdio.h>
//int main()
//{
//	int n = 0, sum = 0,flag = 0;
//	scanf("%d",&n);
//	printf("%d�����ǣ�",n);
//	for (int i = 2; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//		{
//			printf(flag ? " %d" : "%d",i);      //ͬһ�е������һ��������ո�
//			sum += i;
//			flag++;
//		}
//	}
//	printf("\n");
//	printf("���ӵ��ܺ���:%d",sum);
//	return 0;
//}

////��ʮһ��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n;
//	char a[101];
//	scanf("%d", &n);
//	getchar();
//	gets(a);
//	printf("a = ");
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		printf("%c", a[i]);
//	}
//	printf("\n");
//	printf("b = ");
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		if (i == n)
//		{
//			continue;
//		}
//		printf("%c", a[i]);
//	}
//	printf("\n");
//	printf("n = %d",n);
//	return 0;
//}


//��ʮ����
//#include <stdio.h>
//int main()
//{
//	char a[100],c;
//	int flag = 0;
//	gets(a);
//	scanf("%c",&c);
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		if (a[i] == c)
//		{
//			continue;
//		}
//		printf("%c", a[i]);
//	}
//}

//��ʮ����
//#include <stdio.h>
//int main()
//{
//	int arr[2][10], m, i = 0, j = 0,max;
//	scanf("%d", &m);
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}	
//	max = arr[0][0];
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 1; j < m; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	printf("���ֵΪ��%d �� �±�Ϊ��(%d,%d)",max,i,j - 1);
//	return 0;
//}


//��ʮ����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100];
//	int len = 0;
//	gets(a);
//	len = (int)strlen(a);
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] == '*' && i != len - 1)            //����β����*�����
//		{
//			continue;
//		}
//		printf("%c",a[i]);
//	}
//	return 0;
//}

//��ʮ����
#include <stdio.h>
int flag = 0;
int main()
{
	void hello_world(void);
	void three_hellos(void);
	three_hellos();
	return 0;
}
void hello_world(void)
{
	flag++;
	printf("Hello, world!");
	if (flag < 3)
	{
		printf("\n");       //���һ�κ������ò���ӡ����
	}
}
void three_hellos(void)
{
	hello_world();
	hello_world();
	hello_world();
}