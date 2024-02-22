//观察发现：每一个数都含有质因子2，3，5或者7至少其中的一个，那么在1~5824这个序列中后面的humble numbers
//总可以用已经产生的谦虚数序列中的某一个数字乘上{2，3，5，7}中的某一个数字得到。且1.后面的谦虚数要比前面的大，2.且是这些前面的数字乘上{2，3，5，7}最小的那个。

#include <iostream>
using namespace std;
int main()
{
	int n;
	long long h[5843], prime[4] = {2,3,5,7};
	h[1] = 1;    //题目把1也定义为谦虚数
	for (int i = 2; i <= 5842; ++i)    //构造谦虚数序列
	{
		h[i] = 100000000000;     //一开始设置后面的谦虚数大点，防止乘的时候溢出
		for (int j = 0; j < 4; ++j)     //枚举2，3，5，7
		{
			for (int k = i - 1; k >= 1; --k)        //列举前面的数字并用前面的所有数乘上2，3，5，7
			{
				if (h[k] * prime[j] <= h[i - 1])     //前面最大的数字乘上prime[]中的数字都小于前面的数字，后面就更小于了
				{
					break;              //直接结束，换一个prime[]再乘
				}
				if (h[k] * prime[j] < h[i])  //如果进来这里，说明比前面的数字大，则更新h[i]
				{
					h[i] = h[k] * prime[j];    //不断更新h[i]找出最小的那一个
				}
			}
		}
	}
	while (cin >> n, n != 0)
	{
		cout << "The" << " " << n;
		if (n % 10 == 1 && n % 100 != 11) //排除后两位为11，因为11是eleventh
		{
			cout << "st" << " ";
		}
		else if (n % 10 == 2 && n % 100 != 12)   //排除后两位为12，因为11是twelfth
		{
			cout << "nd" << " ";
		}
		else if (n % 10 == 3 && n % 100 != 13)         //排除后两位为13，因为11是thritheenth
		{
			cout << "rd" << " ";
		}
		else
		{
			cout << "th" << " ";

		}
		cout << "humble number is " << h[n] << ".";
		cout << "\n";       
	}

	return 0;
}
 