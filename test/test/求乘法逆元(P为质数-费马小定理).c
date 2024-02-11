//#include <stdio.h>
//int quick_power(int y, int p)       //求出y的乘法逆元 mod p 即：y^p-2 % p 的值
//{
//	int ex = p - 2;             //ex为指数，p-2次
//	int ret = 1;
//	while (ex != 0)
//	{
//		if (ex & 1)
//		{
//			ret = ret * y % p;          //y为底数
//		}
//		y = y * y % p;
//		ex >>= 1;
//	}
//	return ret;
//}
//int main()
//{
//	int x, y, p;      //y与p互质才存在乘法逆元
//	scanf_s("%d %d %d", &x, &y, &p);
//	int ret = quick_power(y,p);
//	int result = (x % p * ret) % p;
//	printf("%d",result);
//	return 0;
//}