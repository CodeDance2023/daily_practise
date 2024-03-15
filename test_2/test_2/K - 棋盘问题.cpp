//#include <iostream>
//using namespace std;
//int n, k, vis[10],sum;
//char map[10][10];
//
//void dfs(int row, int cnt)
//{
//	if (cnt == k)  //下了k次，说明可以有一种方法
//	{
//		sum++;
//		return;
//	}
//	//按行搜索，按列标记
//	for (int i = row; i < n; ++i) //现在到第几行了
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			if (map[i][j] == '#' && vis[j] == 0)
//			{
//				vis[j] = 1;
//				dfs(i + 1,cnt + 1);
//				vis[j] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//	while (cin >> n >> k, (n != -1 && k != -1))
//	{
//		sum = 0;          //每组数据重置总方法数为0
//		memset(vis,0,sizeof(vis)); //每组数据重置访问数组为0
//		//输入数组数据
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				cin >> map[i][j];
//			}
//		}
//		//按行搜索，按列标记
//		dfs(0,0); //传入行，方法数
//		cout << sum << endl;
//	}
//	return 0;
//}