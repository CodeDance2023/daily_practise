//#include <bits/stdc++.h>
//using namespace std;
//int L, N, M, l, r,mid,cnt = 0,ans;
//int d[50005];       //第i块石头距离原点的距离
//
//bool check(int x)       //x就是mid，为假设为最短距离的答案，check函数是检验假设是否成立的函数
//{
//	int cur = 0; //当前人站在哪一个石头上，起点为第0块，终点为第N+1块
//	cnt = 0;         //搬走几次石头
//	for (int i = 1; i <= N + 1; ++i)
//	{
//		if ((d[i] - cur) < x)  //距离比x还小，说明假设不成立，要搬走一块石头，使得距离增大
//		{
//			cnt++;
//		}
//		else cur = d[i];    //距离比x大于或等于，人跳到下一个石头，继续检查下面的距离是否符合要求
//	}
//	if (cnt <= M)           //搬石头次数小于M次，即为成功
//	{
//		ans = x;         //记录答案
//		return true;     
//	}
//	else return false;
//}
//int main()
//{
//	cin >> L >> N >> M;
//	for (int i = 1; i <= N; ++i) cin >> d[i];    //输入每个石头的距离
//	d[N + 1] = L;    //终点为N + 1，距离起点距离为L
//	if (M == N)  //全部搬走石头，距离就为L
//	{
//		cout << L;
//		return 0;
//	}
//	//估计答案的范围
//	l = 1;    //左边为1，即最短的跳跃距离
//	r = L;    //当起点和终点间没有一个石头时，最大距离就是L；
//	//二分（尽量到右边找值）不断求解得到最优解
//	while ( l < r )
//	{
//		mid = (l + r + 1) >> 1;  
//		if (check(mid) == true)  l = mid;     //左边全部满足，到右边二分
//		else r = mid - 1;          //否则到左边二分
//	}
//	cout << ans;
//	return 0;
//}