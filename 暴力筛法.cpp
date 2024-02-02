#include <iostream>
using namespace std;
bool is_prime(int x)
{
	if (x == 1)    //1不是质数
	{
		return false;
	}
	for (int i = 2; i * i <= x; ++i)    //列举2~根号x内可能的因子
	{
		if (x % i == 0)            //找到一个因子说明是合数，返回false
		{
			return false;
		}
	}
	return true;             //一个因子都没有，返回true
}
int main()
{
	int N, count = 0;
	cin >> N;
	for (int i = 1; i <= N; ++i)        //列举（产生）1~N之内的数
	{
		if (is_prime(i) == true)          //是质数则输出
		{
			cout << i << " ";
			count++;                       //质数计数器+1
		}
	}
	cout << endl << "质数的个数是：" << count;
	return 0;
	return 0;
}

