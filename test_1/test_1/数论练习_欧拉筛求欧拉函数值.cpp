//#include <iostream>
//using namespace std;
//int main()
//{
//	bool is_prime[101];
//	int prime[101], ef[101];
//	int n,cnt = 0;
//	ef[1] = 0;      //如果不包含n本身，1的欧拉函数值就是0
//	is_prime[1] = false;    //1不是质数
//	for (int i = 2; i <= 100; ++i)
//	{
//		is_prime[i] = true;          //刚开始全部标记为是质数
//	}
//	for (int i = 2; i <= 100; ++i)
//	{
//		if (is_prime[i] == true)     //是质数
//		{
//			ef[i] = i - 1;      ///质数的ef值为i-1;
//			prime[++cnt] = i;  //找到质数就放到质数列表里面去
//		}
//			int t;
//			for (int j = 1; j <= cnt && (t = i * prime[j]) <= 100; ++j)    //列举质数列表里面的质数个数
//			{
//				is_prime[t] = false;    //标记乘积为不是质数
//				if (i % prime[j] == 0)          //如果i整除prime[j]，停止标记过程
//				{
//					ef[t] = ef[i] * prime[j];   //对于i%prime[j]=0的情况，有ef[i*prime[j]]=ef[i]*prime[j]
//					break;
//				}
//				else
//				{
//					ef[t] = ef[i] * (prime[j] - 1);    //对于i不能整除prime[j]，即i和prime[j]互质的情况，
//				}                                      //利用欧拉函数是积性函数和质数的欧拉函数值为质数-1的性质，有ef[i*prime[j]]=ef[i]*ef[prime[j]] = ef[i] *(prime[j]-1)
//			}
//	}
//	for (int i = 1; i <= 100; i++)     //打表
//	{
//		cout << "ef[" << i << "] = " << ef[i] << endl;
//	}
//	return 0;
//}