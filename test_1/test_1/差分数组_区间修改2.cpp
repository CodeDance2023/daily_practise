//���ڲ��������Ͻ��еĲ���ӳ���ԭ����
#include <iostream>
using namespace std;
int main()
{
	int a[100], o[100] = {0}, sumo[100]; //aΪԭ���飬oΪ�������飬sumoΪ���������ǰ׺������
	int L, R, V, N;    //L, R�ֱ�Ϊ�������䣬VΪ�����޸ĸ���ֵ��NΪ���鳤��
	cout << "��������ĳ��ȣ�";
	cin >> N;
	cout << "������������ݣ�";
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	cout << "�����������������ı��ֵ:";
	cin >> L >> R >> V;
	o[L] = o[L] + V;      //���������޸Ĳ���
	o[R + 1] = o[R + 1] - V;
	sumo[0] = o[0];              
	for (int i = 1; i < N; i++)      //������������ǰ׺��
	{
		sumo[i] = sumo[i - 1] + o[i];
	}
	for (int j = 0; j < N; j++) //ӳ���ԭ����
	{
		a[j] = a[j] + sumo[j];
		cout << a[j] << " ";     //˳������޸Ĺ����ԭ����
	}
	return 0;
}
