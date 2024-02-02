//#include <iostream>
//using namespace std;
//int main()
//{
//	bool is_prime[100000];        //里面储存i是否为质数的状态，为true就是质数，false为合数
//	int prime[100000];            //储存找到的质数的一个数组
//	int N, t, count = 0;        //N为样本容量，t为要被标记的数，count为质数数量计数器
//	cin >> N;
//	for (int i = 1; i <= N; ++i)
//	{
//		is_prime[i] = true;     //初始化所有的数都为质数
//	}
//	is_prime[1] = false;
//	for (int i = 2; i <= N; ++i)   //列举要筛质数的范围
//	{
//		if (is_prime[i] == true)    //如果i是质数
//		{
//			prime[count++] = i;     //将i存入质数列表里去
//		}
//		for (int j = 0; j < count && (t = i * prime[j]) <= N; ++j)  //列举找到的质数 并将i与这些质数相乘
//		{
//			is_prime[t] = false;         //将i和prime[j]的乘积标记为合数
//			if (i % prime[j] == 0)       //保证一个数只能被最小的质因数所标记
//			{
//				break;
//			}
//		}
//	}
//	for (int i = 2; i <= N; ++i)
//	{
//		if (is_prime[i] == true)
//		{
//			cout << i << " ";
//		}
//	}
//	cout << endl << "质数的个数是：" << count;
//	return 0;
//}