////#include <iostream>
////using namespace std;
//////这个答案错误
////int main()
////{
////	long long n,k,sum = 0,L,R;
////	cout << "输入j(n,k)的n和k：";
////	cin >> n >> k;
////	for (long long i = 1; i <= n;)
////	{
////		if (k / i == 0)
////		{
////			break;
////		}
////		L = i;                        //k/i相等的左区间默认为第一个数
////		R = min(n, k/(k/i));             //观察发现右区间为k/（k / i),针对n有可能小于k，运用min函数保证右区间小于等于N
////		for (long long j = L; j <= R; j++)      //给这个区间的就i*k/i求和
////		{
////			sum = sum + j * (k / i);
////		}
////		i = R + 1;      
////		
////	}
////	cout << n * k - sum;
////	return 0;
////}
//
//////这个答案正确
////#include <iostream>
////using namespace std;
////typedef long long ll;
////int main() {
////	ll n, k;
////	cin >> n >> k;
////	ll sum = n * k; // 通过公式推导出来的，该数为基数，然后减去对应的数就行了。
////	for (ll i = 1; i <= n;) { // 一共有n个数需要求余累加
////		if (k / i == 0) break; // 如果k/i等于0，直接结束
////		ll l = i; // 左边界
////		ll r = min(n, k / (k / i)); // 右边界如果超过n，就取n
////		sum -= (k / i) * (l + r) * (r - l + 1) / 2; // sum 减去这一块的值
////		i = r + 1; // 更新i的值，跳过这一块
////	}
////	cout << sum << endl; // 输出结果
////	return 0;
////}
//
////
////
////#include<iostream>
////#include<algorithm>
////using namespace std;
////typedef long long ll;
////
////int main(void)
////{
////	ll n, k;
////
////	cin >> n >> k;
////
////	ll sum = n * k; // 通过公式推导出来的，该数为基数，然后减去对应的数就行了。
////
////	for (ll i = 1; i <= n; i++) // 一共有n个数需要求余累加
////	{
////		ll l = i, r, s = k / i;//  l 为左边界， r 为右边界， s 为k/i下取整值。
////
////		if (k / i == 0) break;//如果 为0 直接结束
////
////		r = min(n, k / s);//如果右边界在所求的范围之外，则更新一下。
////
////		sum -= s * ((l + r) * (r - l + 1) / 2); // sum 减去这一块儿的值。
////
////		i = r;//更新 i 值，跳过这一块儿。
////	}
////
////	cout << sum;//输出结果。
////
////	return 0;
////}
//
//最终自己写的正确版本
//#include <iostream>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll n, k, l, r,sum = 0;
//	cin >> n >> k;
//	for (ll i = 1; i <= n;)
//	{
//		if (k / i == 0) break;
//		l = i;        //左边界默认为找到的第一个
//		r = k / (k / i);          //右边界为k/(k/i),当n<k时，右边界有可能越界，那时候设r=n
//		if (r > n) r = n;        //防止当输入的n<k时候，右边界r超过n的情况
//		sum += ((l + r) * (r - l + 1) / 2) * (k / i);     //k/i重复的区间的前n项和 * (k/i) 
//		i = r + 1;
//	}
//	cout << n * k - sum;
//	return 0;
//}
