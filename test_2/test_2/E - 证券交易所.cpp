//#pragma warning(disable:4996)
//#include <iostream>
//#include <cstdio>
//using namespace std;
//dp����ĺ��壺��nums[i]��β�����������������
//int dp[100010], max, l;
//long long nums[100010];
//int main()
//{
//	while (cin >> l)
//	{
//		if (l == 0)
//		{
//			cout << 0;
//		}
//		max = 1;  //����maxΪ1
//		for (int i = 0; i < l; ++i) //ÿ�ζ�Ҫ����dp����Ϊ1
//		{
//			dp[i] = 1;   //��ʼ��Ϊ1
//			cin >> nums[i];//��������
//		}
//		for (int j = 1; j < l; ++j) //���±�Ϊi��ʼ
//		{
//			if (nums[j] > nums[j - 1]) 
//			{
//				dp[j] = dp[j - 1] + 1;
//			}
//			max = max(max, dp[j]);
//		}
//		cout << max << endl;
//	}
//	return 0;
//}


#include <iostream>
using namespace std;
int a[100008], x, L, l, r, mid, len;
int main()
{
	
	while (cin >> L)
	{
		a[0] = -1;
		len = 0;
		for (int i = 0; i < L; ++i)
		{
			cin >> x;
			if (x > a[len])
			{
				a[++len] = x;
			}
			else
			{
				l = 1, r = len;
				while (l <= r)
				{
					mid = l + ((r - l) >> 1);
					if (a[mid] >= x)      //���ڻ���ڶ���������
					{
						r = mid - 1;
					}
					else       //ֻ��С�ڲ������ұ���
					{
						l = mid + 1;
					}
				}
				a[l] = x;
			}
		}
		cout << len << endl;
	}
}