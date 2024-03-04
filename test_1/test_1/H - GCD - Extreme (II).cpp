//#include <iostream>
//using namespace std;
//typedef long long ll;
//ll gcd(int a, int b)
//{
//	if (a < b)
//	{
//		swap(a, b);
//	}
//	int r = a - b;
//	while (r != 0)
//	{
//		if (b < r)
//		{
//			swap(b, r);
//		}
//		a = b;
//		b = r;
//		r = a - b;
//	}
//	return b;
//}
//int main()
//{
//	ll G, N;
//	while (cin >> N, N != 0)
//	{
//		G = 0;
//		for (int i = 1; i < N; i++)
//		{
//			for (int j = i + 1; j <= N; j++)
//			{
//				G += gcd(i, j);
//			}
//		}
//		cout << G << endl;
//	}
//	return 0;
//}