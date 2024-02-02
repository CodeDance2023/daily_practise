//#include <stdio.h>
//////辗转相除法（欧几里得） —— 版本1
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
////	if (x < y)              //第一次要用大数%小数，如果x小于y就要交换值
////	{
////		int temp;
////		temp = x;
////		x = y;
////		y = temp;
////	}
////	r = x % y;              //第一次先看两个数的余数是否为零。不为零则进行下面的逻辑
////	while (r != 0)
////	{
////		x = y;
////		y = r;
////		r = x % y;          //从第二次开始不要求x一定比y大（算法本身的步骤就是这样子的！）
////	}
////	return y;               //返回余数为零的除数
////}
////
////
//////辗转相除法&（欧几里得） —— 版本2
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
////	while (r = x % y)        //改进版本，将"r = x % y"放进循环的条件内，减少了代码量
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
////更相减损法 —— 版本1
//int func(int x, int y)
//{
//	int s;
//	if (x < y)              //第一次用大的数减去小的数，如果x<y就要交换值
//	{
//		int temp;
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	s = x - y;            //第一次先用大的数减去小的数，如果s不为0，则进行下面的逻辑
//	while (s != 0)
//	{
//		if (y < s)       //第一次后的每一次x都要比y大，如果y<s,就要交换值
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
////更相减损法 —— 版本2
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
//	while (s = x - y)               //改进版本，将"s = x - y"放进循环的条件内，减少了代码量
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