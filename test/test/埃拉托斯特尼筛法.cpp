#include <iostream>
using namespace std;
int main()
{
	bool is_prime[100000];       //���洢��true˵��i��������falseΪ����
	int N = 0, count = 0;       //NΪ���ֵ�������countΪ����������
	cin >> N;
	for (int i = 2; i <= N; ++i)    
	{
		is_prime[i] = true;         //��ʼ��ÿ������Ϊtrue�������ΪΪ����
	}
	for (int i = 2; i * i <= N; ++i)       //�о�2~����N�����е�����������Ϊɸ
	{                                    //Ϊʲô��2~����N����ΪҪ��ǵ�2��N���ڵĺ�������Ҫ�ҳ�2~N�����ӣ���2��N��Щ�����ܵ����Ӿ���2������N(��������N��û�����ӣ�С�ڸ���N�Ϳ��ܱ�ǲ���ȫ���ĺ���)
		if (is_prime[i] == true)              //���iû�б�С�����������Ϊ������˵��iΪ����������Ϊɸ
		{
			for (int j = i * 2; j <= N; j += i)       //��i��������ʼ���i�ı���
			{
				is_prime[j] = false;
			}
		}
	}
	for (int i = 2; i <= N; ++i)
	{
		if (is_prime[i] == true)
		{
			count++;
			cout << i << " ";
		}
	}
	cout << endl << "�����������ǣ�" << count << "��";
	return 0;
}