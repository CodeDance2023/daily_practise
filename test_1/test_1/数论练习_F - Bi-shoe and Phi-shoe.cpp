
//#include <iostream>
//using namespace std;
//bool no_prime[1000008];   //δ���г�ʼ����ȫ��Ϊfalse�����˳������falseΪ��������������һ��ѭ��(1000000��)
//                          //����Ϊ1���򣬳�ʼ��ʱ������8������ֹ����1000000����С�����Ҳ���
//int main()
//{
//	long long sum = 0, T, n, x;
//	no_prime[1] = true;        //1��������
//	for (int i = 2; i * i <= 1000008; ++i) //����ɸ��������2������1000008�к�����һ������������Ǻ���
//	{
//		if (no_prime[i] == false )   //���������������Ϊɸ
//		{
//			for (int j = i + i; j <= 1000008; j += i)
//			{
//				no_prime[j] = true;    //���Ϊ���ǲ�������
//			}
//		}
//	}
//
//	cin >> T;
//	for (int i = 1; i <= T; ++i)
//	{
//		sum = 0;
//		cin >> n;
//		for (int j = 1; j <= n; ++j)
//		{
//			cin >> x;           //xΪ��������
//			for (long long k = x + 1; k <= 1000008; ++k)   //����x��
//			{
//				if (no_prime[k] == false)        //��С����
//				{
//					sum += k;
//					break;
//				}
//			}
//		}
//		cout << "Case " << i << ": " << sum << " Xukha" << endl;
//	}
//	return 0;
//}


