//#include <bits/stdc++.h>
//using namespace std;
//int L, N, K, l, r, mid, ans,front = 0,cur,Max = 0,cnt;
//int d[100010];       //每两个相邻的路标相隔的距离
//bool check(int x)
//{
//	int temp;
//	cnt = 0;
//	for (int i = 1; i < N; ++i)
//	{
//		temp = d[i];          //防止本次二分答案数组里面的距离被修改，导致下一次的答案错误
//		while (temp > x)     //发现有比mid大的线段
//		{
//			temp = temp - x;     //此线段不断减去mid
//			cnt++;                  //增设路标数+1
//		}
//	}
//	if (cnt <= K)
//	{  
//		ans = x;              //记录一个答案
//		return true;           
//	}
//	else return false;
//}
//int main()
//{
//	cin >> L >> N >> K;
//	//求出每两个路标之间的距离
//	for (int i = 0; i < N; ++i) //d[0]一定是0，所以有用数据从d[1]开始
//	{
//		cin >> cur;
//		d[i] = cur - front;
//		if (d[i] > Max) Max = d[i];    //找出所有长度的最大值，作为二分的右边界
//		front = cur;   //后一个赋给前一个
//	}
//
//	l = 1;      //左边界最小为1
//	r = Max;
//	if (K == 0)     //没有新坐标的插入，那么直接输入线段的最大值
//	{
//		cout << Max;
//		return 0;
//	}
//	while (l <= r)
//	{
//		mid = l + ((r - l) >> 1);   //防止溢出
//		if (check(mid)) r = mid - 1;
//		else l = mid + 1;
//	}
//	cout << ans;
//	return 0;
//}