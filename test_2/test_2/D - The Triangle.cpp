//#include <iostream>
//using namespace std;
//int dp[108], n, Max,a[108][110];//dp���麬�壺�Ӷ��˵���i�н������ܺ����ֵ
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; ++i) //���������ε�����
//	{
//		for (int j = 0; j < i + 1; ++j)
//		{
//			cin >> a[i][j];
//		}
//	}
//	dp[0] = a[0][0]; //��ʼ��dp�����һ��Ԫ��Ϊ�����ζ���
//	for (int i = 1; i < n; ++i)
//	{
//		Max = 0;
//		for (int j = 0; j < i + 1; ++j)
//		{
//			dp[i] = dp[i - 1] + max(Max,a[i][j]); //���ƹ�ʽ:dp[i] = dp[i-1]+ ��i�е����ֵ
//			Max = max(Max, a[i][j]);
//		}
//	}
//	cout << dp[n - 1];
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int dp[108][110], a[108][110], n, Max = 0;
////dp����ĺ��壺��������������Ӷ��㵽�����������·���е����ֵ
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; ++i) //���������ε�����
//	{
//		for (int j = 1; j <= i + 1; ++j) //�д�1��ʼ,��ֹԽ��
//		{
//			cin >> a[i][j];
//		}
//	}
//	dp[0][1] = a[0][1];////��ʼ��dp�����һ��Ԫ��Ϊ�����ζ���
//	for (int i = 1; i < n; ++i)
//	{
//		for (int j = 1; j <= i + 1; ++j)
//			{
//				//���ƹ�ʽ���������Ϊ���������ֵ��������һ���������ڵ��������е�����dp����ֵ�������Լ�
//				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
//				Max = max(Max, dp[i][j]); //�Ƚϵó����ֵ
//			}
//	}
//	cout << Max;
//	return 0;
//}