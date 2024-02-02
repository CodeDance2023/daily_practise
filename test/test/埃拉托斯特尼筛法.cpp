#include <iostream>
using namespace std;
int main()
{
	bool is_prime[100000];       //里面储存true说明i是质数，false为合数
	int N = 0, count = 0;       //N为数字的总数，count为质数计数器
	cin >> N;
	for (int i = 2; i <= N; ++i)    
	{
		is_prime[i] = true;         //初始化每个数都为true，都标记为为质数
	}
	for (int i = 2; i * i <= N; ++i)       //列举2~根号N内所有的质数，以它为筛
	{                                    //为什么是2~根号N：因为要标记到2到N以内的合数，就要找出2~N的因子，而2到N这些数可能的因子就是2到根号N(超出根号N就没有因子，小于根号N就可能标记不到全部的合数)
		if (is_prime[i] == true)              //如果i没有被小于它的数标记为合数，说明i为质数，以它为筛
		{
			for (int j = i * 2; j <= N; j += i)       //从i的两倍开始标记i的倍数
			{
				is_prime[j] = false;
			}
		}
	}
	for (int i = 2; i <= N; ++i)
	{
		if (is_prime[i] == true)
		{
			count++;
			cout << i << " ";
		}
	}
	cout << endl << "质数的总数是：" << count << "个";
	return 0;
}