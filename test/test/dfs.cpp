//#include <iostream>
//using namespace std;
//int m, n, p, q, MIN = 99999999;
//int a[100][100];
//int v[100][100];
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 };
//void dfs(int x, int y, int step)
//{
//	if (x == p && y == q)
//	{
//		if (step < MIN)
//		{
//			MIN = step;
//			return;
//		}
//	}
//	for (int k = 0; k <= 3; k++)
//	{
//		int tx, ty;
//		tx = x + dx[k];
//		ty = y + dy[k];
//		if (a[tx][ty] == 1 && v[tx][ty] == 0)
//		{
//			v[tx][ty] = 1;
//			dfs(tx, ty, step + 1);
//			v[tx][ty] = 0;
//		}
//	}
//}
//int main()
//{
//	int startx, starty;
//	cin >> m >> n;
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	cin >> startx >> starty >> p >> q;
//	v[startx][starty] = 1;
//	dfs(startx, starty, 0);
//	cout << MIN;
//	return 0;
//}
