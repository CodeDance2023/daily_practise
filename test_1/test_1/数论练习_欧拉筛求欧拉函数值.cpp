//#include <iostream>
//using namespace std;
//int main()
//{
//	bool is_prime[101];
//	int prime[101], ef[101];
//	int n,cnt = 0;
//	ef[1] = 0;      //���������n����1��ŷ������ֵ����0
//	is_prime[1] = false;    //1��������
//	for (int i = 2; i <= 100; ++i)
//	{
//		is_prime[i] = true;          //�տ�ʼȫ�����Ϊ������
//	}
//	for (int i = 2; i <= 100; ++i)
//	{
//		if (is_prime[i] == true)     //������
//		{
//			ef[i] = i - 1;      ///������efֵΪi-1;
//			prime[++cnt] = i;  //�ҵ������ͷŵ������б�����ȥ
//		}
//			int t;
//			for (int j = 1; j <= cnt && (t = i * prime[j]) <= 100; ++j)    //�о������б��������������
//			{
//				is_prime[t] = false;    //��ǳ˻�Ϊ��������
//				if (i % prime[j] == 0)          //���i����prime[j]��ֹͣ��ǹ���
//				{
//					ef[t] = ef[i] * prime[j];   //����i%prime[j]=0���������ef[i*prime[j]]=ef[i]*prime[j]
//					break;
//				}
//				else
//				{
//					ef[t] = ef[i] * (prime[j] - 1);    //����i��������prime[j]����i��prime[j]���ʵ������
//				}                                      //����ŷ�������ǻ��Ժ�����������ŷ������ֵΪ����-1�����ʣ���ef[i*prime[j]]=ef[i]*ef[prime[j]] = ef[i] *(prime[j]-1)
//			}
//	}
//	for (int i = 1; i <= 100; i++)     //���
//	{
//		cout << "ef[" << i << "] = " << ef[i] << endl;
//	}
//	return 0;
//}