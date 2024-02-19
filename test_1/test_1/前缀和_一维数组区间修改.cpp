//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int L, R, arr[100], sum[100], N;  //L,R分别为左右区间
//	cout << "输入数组的长度:(N <= 100)";
//	cin >> N;      //输入数组的长度
//	cout << "输入数组的内容:";
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];     //输入数组的内容
//	}
//	sum[0] = arr[0];        //计算前缀和
//	for (int j = 1; j < N; j++)
//	{
//		sum[j] = sum[j - 1] + arr[j];     
//	}
//	cout << "输入左右区间：";
//	cin >> L >> R;
//	if (L == 0)
//	{
//		cout << sum[R];
//	}
//	else
//	{
//		cout << sum[R] - sum[L - 1];
//	}
//	return 0;
//}