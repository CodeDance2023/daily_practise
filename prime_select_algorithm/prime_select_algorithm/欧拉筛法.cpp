//#include <iostream>
//using namespace std;
//int main()
//{
//	bool is_prime[100000];        //���洢��i�Ƿ�Ϊ������״̬��Ϊtrue����������falseΪ����
//	int prime[100000];            //�����ҵ���������һ������
//	int N, t, count = 0;        //NΪ����������tΪҪ����ǵ�����countΪ��������������
//	cin >> N;
//	for (int i = 1; i <= N; ++i)
//	{
//		is_prime[i] = true;     //��ʼ�����е�����Ϊ����
//	}
//	is_prime[1] = false;
//	for (int i = 2; i <= N; ++i)   //�о�Ҫɸ�����ķ�Χ
//	{
//		if (is_prime[i] == true)    //���i������
//		{
//			prime[count++] = i;     //��i���������б���ȥ
//		}
//		for (int j = 0; j < count && (t = i * prime[j]) <= N; ++j)  //�о��ҵ������� ����i����Щ�������
//		{
//			is_prime[t] = false;         //��i��prime[j]�ĳ˻����Ϊ����
//			if (i % prime[j] == 0)       //��֤һ����ֻ�ܱ���С�������������
//			{
//				break;
//			}
//		}
//	}
//	for (int i = 2; i <= N; ++i)
//	{
//		if (is_prime[i] == true)
//		{
//			cout << i << " ";
//		}
//	}
//	cout << endl << "�����ĸ����ǣ�" << count;
//	return 0;
//}