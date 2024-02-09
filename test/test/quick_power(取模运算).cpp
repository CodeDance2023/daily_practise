//快速幂的套路：在每一步乘法，即a（底数）的平方和ret * a（奇数时的累乘），都要进行取模运算。
//这是一个结果，已经经过我笔算的证明，结果确实是正确的。
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	clock_t s, f;          //定义两个计算程序运行时间的计数器
	long  long a, b;
	int p, ret = 1;
	cin >> a >> b >> p;
	s = clock();          //返回当前的cpu时钟计时单元数
	while (b != 0)
	{
		if (b % 2 == 1) // 或（b & 1） 偶数的二进制最低为为0，奇数为1
		{
			ret = ret * a % p;
		}
		a = a * a % p;
		b /= 2;             //或b >>= 1; 右移一位等于除以2
	}      
	f = clock();           //返回程序运行到这里是的cpu时钟计时单元数
	cout << ret << endl;
	cout << (double)(f - s) / CLOCKS_PER_SEC;    //f - s 为程序运行需要的cpu时钟单元数量，除以每秒cpu有多少个cpu时钟单元数量，即为所需秒数。
	return 0;
}