//#include <stdio.h>
//int quick_power(int y, int p)       //���y�ĳ˷���Ԫ mod p ����y^p-2 % p ��ֵ
//{
//	int ex = p - 2;             //exΪָ����p-2��
//	int ret = 1;
//	while (ex != 0)
//	{
//		if (ex & 1)
//		{
//			ret = ret * y % p;          //yΪ����
//		}
//		y = y * y % p;
//		ex >>= 1;
//	}
//	return ret;
//}
//int main()
//{
//	int x, y, p;      //y��p���ʲŴ��ڳ˷���Ԫ
//	scanf_s("%d %d %d", &x, &y, &p);
//	int ret = quick_power(y,p);
//	int result = (x % p * ret) % p;
//	printf("%d",result);
//	return 0;
//}