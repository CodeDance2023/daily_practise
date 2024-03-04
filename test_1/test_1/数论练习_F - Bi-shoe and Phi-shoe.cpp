
//#include <iostream>
//using namespace std;
//bool no_prime[1000008];   //未进行初始化，全部为false，因此顺便设置false为是素数，可以少一个循环(1000000次)
//                          //数据为1百万，初始化时给它多8个，防止大于1000000的最小质数找不到
//int main()
//{
//	long long sum = 0, T, n, x;
//	no_prime[1] = true;        //1不是素数
//	for (int i = 2; i * i <= 1000008; ++i) //埃氏筛素数：在2到根号1000008中合数的一个质因子来标记合数
//	{
//		if (no_prime[i] == false )   //如果是质数，以它为筛
//		{
//			for (int j = i + i; j <= 1000008; j += i)
//			{
//				no_prime[j] = true;    //标记为不是不是质数
//			}
//		}
//	}
//
//	cin >> T;
//	for (int i = 1; i <= T; ++i)
//	{
//		sum = 0;
//		cin >> n;
//		for (int j = 1; j <= n; ++j)
//		{
//			cin >> x;           //x为幸运数字
//			for (long long k = x + 1; k <= 1000008; ++k)   //大于x的
//			{
//				if (no_prime[k] == false)        //最小质数
//				{
//					sum += k;
//					break;
//				}
//			}
//		}
//		cout << "Case " << i << ": " << sum << " Xukha" << endl;
//	}
//	return 0;
//}


