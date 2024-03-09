//#include <iostream>
//using namespace std;
//int dp[10005], nums[10005];
//int main()
//{
//	int ans = 1, N;  //ans最少为1，因为N为1时，后面的没法执行，直接输出1，即为独立一个元素
//	cin >> N;
//	for (int i = 1; i <= N; ++i) dp[i] = 1;     //开始时全部设置为1，dp数组
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