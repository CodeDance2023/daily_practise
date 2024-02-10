//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	long long a, b;
//	int ret = 1;
//	while (scanf("%lld %lld", &a,&b) != EOF)
//	{
//		ret = 1;
//		while (b != 0)
//		{
//			if (b & 1)
//			{
//				ret = ret * a % 10;
//			}
//			a = a * a % 10;
//			b = b >> 1;
//		}
//		printf("%d\n",ret);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	long long a, b, ret = 1;       //a为底数，b为指数，ret为累乘的结果
//	while (b != 0)            
//	{
//		if (b % 2 == 1)       //b为奇数时，多进行一步累乘
//		{
//			ret = ret * a;    //b的一次方拿出，将b变成偶数
//		}
//		a = a * a;           //奇数和偶数都要进行下面的逻辑 —— 底数平方，指数减半
//		b = b / 2;
//	}
//	printf("%lld",ret);
//	return 0;
//}