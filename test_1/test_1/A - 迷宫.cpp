//#include <iostream>
//using namespace std;
//int a[1000][10], v[1000][10]; //访问数组v[]，1为已经访问过，0为未访问; //地图数组a[]，1时为空地，2时为障碍物
////dx,dy为方向输组
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 };
//int n, m, t, sx, sy, fx, fy,cnt = 0;
//void dfs(int x, int y)
//{
//	if (x == fx && y == fy) //到达终点
//	{
//		cnt++;       //次数加一
//		return;
//	}
//	for (int i = 0; i < 4; ++i)     //没有到达终点，就往四个方向继续做试探(默认为：右下左上)
//	{
//		int tx, ty;    //四个方向试探的辅助变量
//		tx = x + dx[i];
//		ty = y + dy[i];
//		if (tx >=1 && tx <= n && ty >=1 && ty <= m)  //加上边界判断,防止越界带来的影响（应为数组外面默认a[] = 1,v[] = 0）
//		{
//			if (a[tx][ty] == 1 && v[tx][ty] == 0) //空地且未访问
//			{
//				v[tx][ty] = 1;   //设置为已经访问
//				dfs(tx, ty);
//				v[tx][ty] = 0;
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m >> t;
//	for (int i = 1; i <= n; ++i)    //初始化a数组全为1
//	{
//		for (int j = 1; j <= m; ++j)
//		{
//			a[i][j] = 1;    
//		}
//	}
//	cin >> sx >> sy >> fx >> fy;       //输入起点和终点坐标
//
//	for (int k = 1; k <= t; ++k)     //设置障碍物
//	{
//		int t1, t2;
//		cin >> t1 >> t2;
//		a[t1][t2] = 2;      //障碍物设置为2
//	}
//	v[sx][sy] = 1; //将起点设置为已经访问
//	dfs(sx, sy);   //递归搜索
//	cout << cnt;
//	return 0;
//}