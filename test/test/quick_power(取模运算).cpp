//�����ݵ���·����ÿһ���˷�����a����������ƽ����ret * a������ʱ���۳ˣ�����Ҫ����ȡģ���㡣
//����һ��������Ѿ������ұ����֤�������ȷʵ����ȷ�ġ�
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	clock_t s, f;          //�������������������ʱ��ļ�����
	long  long a, b;
	int p, ret = 1;
	cin >> a >> b >> p;
	s = clock();          //���ص�ǰ��cpuʱ�Ӽ�ʱ��Ԫ��
	while (b != 0)
	{
		if (b % 2 == 1) // ��b & 1�� ż���Ķ��������ΪΪ0������Ϊ1
		{
			ret = ret * a % p;
		}
		a = a * a % p;
		b /= 2;             //��b >>= 1; ����һλ���ڳ���2
	}      
	f = clock();           //���س������е������ǵ�cpuʱ�Ӽ�ʱ��Ԫ��
	cout << ret << endl;
	cout << (double)(f - s) / CLOCKS_PER_SEC;    //f - s Ϊ����������Ҫ��cpuʱ�ӵ�Ԫ����������ÿ��cpu�ж��ٸ�cpuʱ�ӵ�Ԫ��������Ϊ����������
	return 0;
}