#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	sort(a, a + 10, greater<int>()); //����sort���׵�ַ�����һ����ַ�ĺ�һ����ַ��greater<data_type>()��;
	for (int i = 0; i < 10; ++i)     //����sort���׵�ַ�����һ����ַ�ĺ�һ����ַ����
	{
		cout << a[i] << " ";
	}
	return 0;
}