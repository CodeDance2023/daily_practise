//#include <iostream>
//using namespace std;
//int main()
//{
//	long long inv[10000] = { 0 }, n, p; //pΪ���� ����p > n
//	inv[1] = 1;
//	cout << "��������Ҫ��1�����ٵ���Ԫ��p:";
//	cin >> n >> p;
//	for (int i = 2; i <= n; i++)
//	{
//		inv[i] = -(p / i) * inv[p % i];     //x(inv) = -k * r(inv) 
//		inv[i] = (inv[i] % p + p) % p;       //��֤��ԪΪ����
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << inv[i] << " ";
//		if (i % 10 == 0)
//		{
//			cout << "\n";
//		}
//	}
//
//	return 0;
//}