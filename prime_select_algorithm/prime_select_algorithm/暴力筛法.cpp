#include <iostream>
using namespace std;
bool is_prime(int x)
{
	if (x == 1)    //1��������
	{
		return false;
	}
	for (int i = 2; i * i <= x; ++i)    //�о�2~����x�ڿ��ܵ�����
	{
		if (x % i == 0)            //�ҵ�һ������˵���Ǻ���������false
		{
			return false;
		}
	}
	return true;             //һ�����Ӷ�û�У�����true
}
int main()
{
	int N, count = 0;
	cin >> N;
	for (int i = 1; i <= N; ++i)        //�о٣�������1~N֮�ڵ���
	{
		if (is_prime(i) == true)          //�����������
		{
			cout << i << " ";
			count++;                       //����������+1
		}
	}
	cout << endl << "�����ĸ����ǣ�" << count;
	return 0;
	return 0;
}

