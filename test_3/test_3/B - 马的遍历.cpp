//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//int n, m, sx/*起点*/, sy/*起点*/, map[408][408];
////方向数组，马走日字型，可以有8个方向可以走：这里顺时针走8个方向
//int dx[8] = { -2,-1,1,2,2,1,-1,-2 }, dy[8] = { 1,2,2,1,-1,-2,-2,-1 };
//
//struct point   //定义结构体类型，来代表点的坐标的数据类型
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	queue<point> q;     //定于一个队列队列q
//	cin >> n >> m >> sx >> sy;
//	memset(map,-1,sizeof(map));   //map地图全部设置-1，表示没有走过
//	map[sx][sy] = 0; //起点为0步
//	point sp = { sx,sy }, fp; //fp为队头坐标
//	q.push(sp);     //将起点压入队列中
//	while (!q.empty())   //判断队列是否为空，不为空就一直进行下列步骤
//	{
//		fp = q.front();          //取出队头
//		for (int i = 0; i < 8; ++i) //找到队头可以拓展的点
//		{
//			int tx, ty;
//			tx = fp.x + dx[i];
//			ty = fp.y + dy[i];
//			if (tx < 1 || tx > n || ty < 1 || ty > m || map[tx][ty] != -1) //排除越界条件
//			{
//				continue;
//			}
//			map[tx][ty] = map[fp.x][fp.y] + 1; //找到一个点就加1步
//			q.push({ tx,ty });  //将队头拓展出来的点压入队列中
//		}
//		q.pop();      //弹出队头
//	}
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= m; ++j)
//		{
//			cout << map[i][j] << "	";
//		}
//		cout << endl;
//	}
//	return 0;
//}
//
//
//
