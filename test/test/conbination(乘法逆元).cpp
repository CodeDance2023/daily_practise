////��(n+m)! / n!m! %p //�����%p
//#include <iostream>
//using namespace std;
//long long factorial[10000];
//void fact(long long Maxn,long long p)       //����׳ˣ����ö�̬�滮�㷨��һ��������������У�����ֱ����
//{
//	factorial[1] = 1;
//	for (int i = 2; i <= Maxn; ++i)
//	{
//		factorial[i] = i * factorial[i - 1] % p;
//	}
//}
//long long get_inv (long long a, long long b )     //��˷���Ԫ�����ÿ������㷨
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
//int gcd(int a, int b)        //�ж��Ƿ�n��* m! �� p�����Լ���ǲ���1
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
//	fact(n + m , p);      //���1��n+m�Ľ׳�
//	int flag = gcd(factorial[n] * factorial[m],p);
//	result = factorial[n + m] * get_inv(factorial[n] * factorial[m] % p, p - 2) % p;
//	if (flag == 1)         //��flag = 1��˵��gcd��n!*m!����Ԫ��p�����Լ��Ϊ1���Ŵ�����Ԫ
//	{
//		cout << result;
//	}
//	else
//	{
//		cout << "��������Ԫ";
//	}
//	return 0;
//}