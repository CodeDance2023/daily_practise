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
//	if (b == 0)           //�ݹ���ֹ������Ҳ�ǵݹ麯�����ݵ�����
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
//	cin >> a >> b >> p >> x >> y;        //��(a/b)%p��ֵ
//	int ret = exgcd(b,p,x,y);             //����b���� p,��b�ĳ˷���Ԫ
//	y = (y % p + p) % p;             //��֤xΪ����
//	if (ret == 1)           //��ret��gcd�� = 1ʱ��˵��b��p���ʣ����г˷���Ԫ������������
//	{
//		cout << (a % p * y % p) % p;
//	}
//	else
//	{
//		cout << "�����ڳ˷���Ԫ��";  
//	}
//	return 0;
//}