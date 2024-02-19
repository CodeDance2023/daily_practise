////求(n+m)! / n!m! %p //组合数%p
//#include <iostream>
//using namespace std;
//long long factorial[10000];
//void fact(long long Maxn,long long p)       //求出阶乘，利用动态规划算法，一次求出存在数组中，后面直接用
//{
//	factorial[1] = 1;
//	for (int i = 2; i <= Maxn; ++i)
//	{
//		factorial[i] = i * factorial[i - 1] % p;
//	}
//}
//long long get_inv (long long a, long long b )     //求乘法逆元，利用快速幂算法
//{
//	long long ret = 1;
//	long long p = b + 2;
//	while (b)
//	{
//		if (b & 1)
//		{
//			ret = ret * a % p;
//		}
//		a = a * a % p;
//		b >>= 1;
//	}
//	return ret;
//}
//int gcd(int a, int b)        //判断是否n！* m! 和 p的最大公约数是不是1
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	return gcd(b, a % b);
//}
//
//int main()
//{
//	long long result, n, m, p;
//	cin >> n >> m >> p;
//	fact(n + m , p);      //求出1到n+m的阶乘
//	int flag = gcd(factorial[n] * factorial[m],p);
//	result = factorial[n + m] * get_inv(factorial[n] * factorial[m] % p, p - 2) % p;
//	if (flag == 1)         //当flag = 1，说明gcd（n!*m!的逆元，p）最大公约数为1，才存在逆元
//	{
//		cout << result;
//	}
//	else
//	{
//		cout << "不存在逆元";
//	}
//	return 0;
//}