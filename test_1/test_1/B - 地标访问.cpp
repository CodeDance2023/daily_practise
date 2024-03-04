//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n, t,p[50008],l,r,mid,ans;
//bool check(int x)
//{
//	for (int r = x; r <= n; ++r)   //排好序后，枚举右端点，看这个区间是否能在t的时间内访问完成所有地标
//	{
//		l = r + 1 - x;    //x(区间大小) = r - l + 1:推出l = r + 1 - x
//		if (p[l] > 0)    //左边界>0,一直往右边走
//		{
//			if (p[r] <= t)   //这时候只要看右边界是否<=即可
//			ans = x;         
//			return true;
//		}
//		else if (p[r] < 0)   //右边界<0,一直往左边走
//		{
//			if (-p[l] <= t)   //这时候只要看左边界(的相反数)是否<=即可
//			ans = x;          //记录一个答案
//			return true;
//		}
//		else if (p[l] < 0 && p[r] > 0)
//		{
//			if ((min(-p[l], p[r]) + p[r] + (-p[l])) <= t)     //如果横跨原点，则先去离远点最近的，再回来完成整个区间长度的访问
//			{
//				ans = x;           //记录一个答案
//				return true;
//			}
//		}
//	}
//	return false;        //如果循环结束还不行，那么说明这个地标访问个数不行，返回false
//}
//int main()
//{
//	cin >> t >> n;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> p[i];
//	}
//	sort(p + 1,p + n + 1);     //将坐标从小到大排列,注意sort函数的用法,(首地址，末地址+1)
//	l = 0;        //左边界为0，可能一个也访问不到
//	r = n;           //右边界为输入的地标个数
//	while (l <= r)
//	{
//		mid = l + ((r - l) >> 1); //(l+r) / 2,防止加法时出现溢出
//		if (check(mid)) l = mid + 1;       //满足要求，到右边二分，找更优解
//		else r = mid - 1;                  //不满足要求，到左侧二分
//	}
//	cout << ans;
//	return 0;
//}