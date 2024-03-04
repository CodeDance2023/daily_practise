//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, res;
//	while (cin >> n, n != 0)
//	{
//		res = n;  //一开始设置为输入的数字，后面慢慢除
//		for (int i = 2; i * i <= n; ++i)      //试除因子
//		{
//			if (n % i == 0)
//			{
//				res = res - res / i;    //根据欧拉函数算，累乘上(1 - 1/pi)的化简形式
//				while (n % i == 0)
//				{
//					n = n / i;       //n要除干净可能剩下的i因子,这样之后找到的因子才是质因子
//				}
//			}
//		}
//		if (n > 1)          //循环完成后n还是大于1，说明还有一个因子,就是此时的n
//		{
//			res = res -  res / n;     //防止漏掉一个质因子，继续累乘上(1 - 1/n)的化简形式
//		}
//		cout << res << endl;
//	}
//	return 0;
//}