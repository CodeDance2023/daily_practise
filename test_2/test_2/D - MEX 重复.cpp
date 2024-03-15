//#include <iostream>
//using namespace std;
//int a[100010], v[100010],mex,n,t,k;  //v数组出现过为1，没有出现过为0
//int main()
//{
//	cin >> t;
//	for (int i = 1; i <= t; ++i)
//	{
//		cin >> n >> k;
//		k = k % (n + 1);        //周期为n+1,k%(n+1)为有效次数
//
//		for (int x = 0; x <= n; ++x) v[x] = 0;    //每次进循环都要将0~n重新设置为0,设置为没有出现过
//		for (int j = 1; j <= n; ++j)
//		{
//			cin >> a[j];
//			v[a[j]] = 1;      //表示这个数出现过
//		}
//
//		for (int h = 0; h <= n; ++h) //从0~n找出没出现过的那个数
//		{
//			if (!v[h])   //v[h]为0表示h这个数没有出现过
//			{
//				mex = h;  //mex就等于这个数
//				a[n + 1] = mex;  //将mex放到数组的末尾
//				break;
//			}
//		}
//
//		for (int i = n + 1 - k + 1; i <= n + 1; ++i) //把mex放到数组最后,先输出[n+1-k+1,n+1]部分的数组
//		{
//			cout << a[i] << " ";
//		}
//
//		for (int j = 1; j <= n - k; ++j)//再输出[1,n-k]部分
//		{
//			cout << a[j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}