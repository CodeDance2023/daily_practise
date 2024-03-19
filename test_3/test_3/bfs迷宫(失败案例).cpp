//#include <iostream>
//#include <queue>
//using namespace std;
//int n, m, t, sx, sy, fx, fy, map[10][10], v[10][10],x,y,cnt;
////方向数组，以顺时针为例
//int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 }; 
//struct point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	queue<point> q;
//	cin >> n >> m >> t;
//	cin >> sx >> sy >> fx >> fy;
//	while (t--) //输入障碍的坐标
//	{
//		cin >> x >> y;
//		map[x][y] = 1;  //障碍物设为1，空地自动为0
//	}
//	point sp = { sx,sy }, fp, bp = {fx,fy};
//	q.push(sp); //将起点压入队列
//	v[sx][sy] = 1;    //起点设置为已访问
//	while (!q.empty())
//	{
//		fp = q.front();  //取出队头
//		if (fp.x == fx && fp.y == fy) break; //队头为结束坐标就直接终止循环
//		//找出队头可以拓展出来的坐标
//		for (int i = 0; i < 4; ++i)
//		{
//			int tx, ty;
//			tx = fp.x + dx[i];
//			ty = fp.y + dy[i];
//			//排除越界条件
//			if (tx < 1 || tx > n || ty < 1 || ty> m || map[tx][ty] == 1 || v[tx][ty] == 1)
//			{
//				continue;
//			}
//			v[tx][ty] = 1; //设置为已经访问
//			if (tx == fx && ty == fy)
//			{
//				cnt++;    //方法数+1
//				v[fx][fy] = 0; //终点坐标重置为未访问
//			}
//			q.push({ tx,ty });    //将可以拓展的坐标压入队列
//		}
//		q.pop();  //弹出队头
//	}
//	cout << cnt;
//	return 0;
//}