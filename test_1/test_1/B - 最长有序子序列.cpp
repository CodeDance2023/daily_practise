//#include <iostream>
//using namespace std;
//int dp[10005], nums[10005];
//int main()
//{
//	int ans = 1, N;  //ans����Ϊ1����ΪNΪ1ʱ�������û��ִ�У�ֱ�����1����Ϊ����һ��Ԫ��
//	cin >> N;
//	for (int i = 1; i <= N; ++i) dp[i] = 1;     //��ʼʱȫ������Ϊ1��dp����
//	for (int i = 1; i <= N; ++i) cin >> nums[i];
//
//	for (int i = 2; i <= N; ++i)
//	{
//		for (int j = 1; j < i; ++j)
//		{
//			if (nums[j] < nums[i])
//			{
//				dp[i] = max(dp[j] + 1, dp[i]);
//			}
//		}
//		ans = max(ans,dp[i]);   
//	}
//	cout << ans;
//	return 0;
//}