//#include <stdio.h>
//////շת�������ŷ����ã� ���� �汾1
////int fun(int, int);
////int main()
////{
////	int a, b;
////	scanf_s("%d %d", &a, &b);
////	int ret = fun(a, b);
////	printf("%d",ret);
////	return 0;
////}
////int fun(int x, int y)
////{
////	int r;
////	if (x < y)              //��һ��Ҫ�ô���%С�������xС��y��Ҫ����ֵ
////	{
////		int temp;
////		temp = x;
////		x = y;
////		y = temp;
////	}
////	r = x % y;              //��һ���ȿ��������������Ƿ�Ϊ�㡣��Ϊ�������������߼�
////	while (r != 0)
////	{
////		x = y;
////		y = r;
////		r = x % y;          //�ӵڶ��ο�ʼ��Ҫ��xһ����y���㷨����Ĳ�����������ӵģ���
////	}
////	return y;               //��������Ϊ��ĳ���
////}
////
////
//////շת�����&��ŷ����ã� ���� �汾2
////#include <stdio.h>
////int fun(int, int);
////int main()
////{
////	int a, b;
////	scanf_s("%d %d", &a, &b);
////	int ret = fun(a, b);
////	printf("%d",ret);
////	return 0;
////}
////int fun(int x, int y)
////{
////	int r;
////	if (x < y)             
////	{
////		int temp;
////		temp = x;
////		x = y;
////		y = temp;
////	}
////	while (r = x % y)        //�Ľ��汾����"r = x % y"�Ž�ѭ���������ڣ������˴�����
////	{
////		x = y;
////		y = r;
////	}
////	return y;             
////}
////
////
////
////
//
//
////������� ���� �汾1
//int func(int x, int y)
//{
//	int s;
//	if (x < y)              //��һ���ô������ȥС���������x<y��Ҫ����ֵ
//	{
//		int temp;
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	s = x - y;            //��һ�����ô������ȥС���������s��Ϊ0�������������߼�
//	while (s != 0)
//	{
//		if (y < s)       //��һ�κ��ÿһ��x��Ҫ��y�����y<s,��Ҫ����ֵ
//		{
//			int t;
//			t = y;
//			y = s;
//			s = t;
//		}
//		x = y;
//		y = s;
//		s = x - y;
//	}
//	return x;
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	int ret = func(a,b);
//	printf("%d",ret);
//	return 0;
//}
//
//
////������� ���� �汾2
//int func(int x, int y)
//{
//	int s;
//	if (x < y)
//	{
//		int temp;
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	while (s = x - y)               //�Ľ��汾����"s = x - y"�Ž�ѭ���������ڣ������˴�����
//	{
//		if (y < s)
//		{
//			int t;
//			t = y;
//			y = s;
//			s = t;
//		}
//		x = y;
//		y = s;
//	}
//	return x;
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	int ret = func(a, b);
//	printf("%d", ret);
//	return 0;
//}