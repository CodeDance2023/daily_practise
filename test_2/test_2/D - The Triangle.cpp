//#include <iostream>
//using namespace std;
//int dp[108], n, Max,a[108][110];//dp数组含义：从顶端到第i行结束的总和最大值
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; ++i) //输入三角形的内容
//	{
//		for (int j = 0; j < i + 1; ++j)
//		{
//			cin >> a[i][j];
//		}
//	}
//	dp[0] = a[0][0]; //初始化dp数组第一个元素为三角形顶端
//	for (int i = 1; i < n; ++i)
//	{
//		Max = 0;
//		for (int j = 0; j < i + 1; ++j)
//		{
//			dp[i] = dp[i - 1] + max(Max,a[i][j]); //递推公式:dp[i] = dp[i-1]+ 第i行的最大值
//			Max = max(Max, a[i][j]);
//		}
//	}
//	cout << dp[n - 1];
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int dp[108][110], a[108][110], n, Max = 0;
////dp数组的含义：以这个数结束，从顶点到这个数的所有路径中的最大值
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; ++i) //输入三角形的内容
//	{
//		for (int j = 1; j <= i + 1; ++j) //列从1开始,防止越界
//		{
//			cin >> a[i][j];
//		}
//	}
//	dp[0][1] = a[0][1];////初始化dp数组第一个元素为三角形顶端
//	for (int i = 1; i < n; ++i)
//	{
//		for (int j = 1; j <= i + 1; ++j)
//			{
//				//递推公式：以这个数为结束的最大值，等于上一行与其相邻的两个数中的最大的dp数组值加上它自己
//				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
//				Max = max(Max, dp[i][j]); //比较得出最大值
//			}
//	}
//	cout << Max;
//	return 0;
//}