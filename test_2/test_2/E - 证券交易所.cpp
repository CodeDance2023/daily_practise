//#pragma warning(disable:4996)
//#include <iostream>
//#include <cstdio>
//using namespace std;
//dp数组的含义：以nums[i]结尾的最长连续递增子序列
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
//		max = 1;  //重置max为1
//		for (int i = 0; i < l; ++i) //每次都要重置dp数组为1
//		{
//			dp[i] = 1;   //初始化为1
//			cin >> nums[i];//输入数据
//		}
//		for (int j = 1; j < l; ++j) //从下标为i开始
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
					if (a[mid] >= x)      //大于或等于都是往左找
					{
						r = mid - 1;
					}
					else       //只有小于才是往右边找
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