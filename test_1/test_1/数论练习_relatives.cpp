////超时
//#include <iostream>
//using namespace std;
//typedef long long ll;
//ll gcd(ll a, ll b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	return gcd(b,a % b);
//}
//int main()
//{
//	ll n, count;
//	while (cin >> n, n != 0)
//	{
//		count = 1;     //1和任何数都互质，因此必然有一个
//		for (int i = 2; i <= n - 1; ++i)
//		{
//			if (gcd(i, n) == 1)      //最大公约数为1，说明互质
//			{
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}