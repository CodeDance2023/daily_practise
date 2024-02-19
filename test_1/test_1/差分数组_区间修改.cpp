// 利用差分数组和原数组的关系
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[100], d[100], sumd[100];   //a为原数组，d为差分数组，sumd为查分数组的前缀和数组
//	int L, R, V, N; //L,R分别为左右区间，V为区间修改个数值，N为数组长度
//	cout << "请输入数组长度：";
//	cin >> N;
//	cout << "请输入数组的内容：";
//	for (int i = 0; i < N; i++)
//	{
//		cin >> a[i];
//	}
//	d[0] = a[0];           //求a[]的差分数组
//	for (int j = 1; j < N; j++)
//	{
//		d[j] = a[j] - a[j - 1];
//	}
//	cout << "输入左右区间和要进行区间修改的值：";
//	cin >> L >> R >> V;
//	d[L] = d[L] + V;      //下面为区间修改操作
//	d[R+1] = d[R+1] - V;
//	sumd[0] = d[0]; //给做完区间修改操作的差分数组求前缀和
//	for (int k = 1; k < N; k++)
//	{
//		sumd[k] = sumd[k - 1] + d[k];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cout << sumd[i] << " ";       //输出sumd[],即为进行过修的原数组的值
//	}
//	return 0; 
//}