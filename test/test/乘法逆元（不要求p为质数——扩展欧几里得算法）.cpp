//#include <iostream>
//using namespace std;
//int exgcd( int a, int b, int &x, int &y)
//{
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (b == 0)           //递归终止条件，也是递归函数回溯的条件
//	{
//		x = 1;
//		y = 0;
//		return a;       
//	}
//	int gcd = exgcd(b,a % b, y ,x);
//	y -= a / b * x;
//	return gcd;       
//}
//int main()
//{
//	int a, b, p, x, y;
//	cin >> a >> b >> p >> x >> y;        //求(a/b)%p的值
//	int ret = exgcd(b,p,x,y);             //传入b，和 p,求b的乘法逆元
//	y = (y % p + p) % p;             //保证x为整数
//	if (ret == 1)           //当ret（gcd） = 1时，说明b，p互质，才有乘法逆元，才输出结果。
//	{
//		cout << (a % p * y % p) % p;
//	}
//	else
//	{
//		cout << "不存在乘法逆元！";  
//	}
//	return 0;
//}