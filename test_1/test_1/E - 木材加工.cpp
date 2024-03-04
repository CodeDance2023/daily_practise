//#include <iostream>
//using namespace std;
//int L[100010]; //储存原木的长度
//int n, k, l, r,mid,cnt,ans,Max = 0;
//
//bool check(int x)
//{
//	if (x == 0) return false;    //防止除0的情况，到了0cm则说明1cm都切不出来，返回false
//	cnt = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		cnt += L[i] / x;     //记得防止x为0，出现除0的情况
//	}
//	if (cnt >= k)             //如果cnt >= k,就返回true，cnt < k,就返回false
//	{
//		ans = x;              //符合要求，保存一个答案
//		return true;     
//	}
//	else   return false;
//}
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> L[i];       //输入每一条原木的长度
//		if (L[i] > Max) Max = L[i];  //找出原木的最大长度，作为答案的右边界
//	}
//		
//	l = 1;      //最少为0cm，但是不能设为0，会出现除0问题，0的情况特殊判断
//	r = Max;    //最多设为n根原木中的最大长度
//	while (l <= r)
//	{
//		mid = (l + r) >> 1; 
//		if (check(mid))
//		{
//			l = mid + 1;         //段数 >= k,继续加大长度找最优解
//		}
//		else
//		{
//			r = mid - 1;        //段数小于k，说明长度太大了，减小一点
//		}
//	}
//	if (check(ans)) cout << ans;     //为配合答案为0的情况，再次检查一次答案，为true就输出ans，否则输出0
//	else cout << 0;                   //特殊判断：1cm也切不出来，就输出0
//	return 0;
//}