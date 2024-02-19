//#include <iostream>
//using namespace std;
//int arr[100][100]; //arr为地图数组（1为空地，2为障碍物）
//int vis[100][100]; //vis为访问数组（1为已访问，0为未访问）
//int dx[4] = {0,1,0,-1};  //方向数组：x方向
//int dy[4] = {1,0,-1,0};  //方向数组：y方向
//int MIN = 99999999;         //最小步数，初始化为较大的数a
//int p, q;          //终点坐标
//int n, m;           //n,m为数组的长度
//void dfs(int x, int y, int step)
//{
//	if (x == p && y == q)     //reach to the end
//	{
//		if (step < MIN)    //判断是否步数较小，较小的赋值为MIN
//		{
//			MIN = step;
//			return;
//		}
//	}
//	//not reach to the end
//	for (int k = 0; k <= 3; k++)   //右下左上，顺时针试探
//	{
//		int tx, ty;          //注意:递归函数所使用的变量应该是局部变量，即在递归函数内定义。因为：递归函数的每一次调用时候所使用的变量都应该是具有独立的空间的，而如果使用“全局变量”，这个变量的空间就是一样的，上一次递归函数的调用的变量值可能会被下一次递归调用所修改，当递归回溯时候，上一次递归变量的值就会被下一次递归调用的变量值所覆盖，造成灾难性的后果。
// 		tx = x + dx[k];      //加上x方向数组的第一个值
//		ty = y + dy[k];        //加上y方向数组的第一个值
//		if (arr[tx][ty] == 1 && vis[tx][ty] == 0) //空地且未访问
//		{
//			vis[tx][ty] = 1;      //设置为已访问
//			dfs(tx, ty, step + 1);  //递归继续探索
//			vis[tx][ty] = 0;     //设置为未访问
//		}
//		
//	}
//}
//
//
//
//int main()
//{
//	int startx, starty;  //startx为起点的行坐标, starty为列坐标
//	cout << "输入数组的长度:";
//	cin >> n >> m;
//	cout << "初始化数组:(1为空地，2为障碍物)";
//	for (int i = 1; i <= n; i++)       //下标从1开始
//	{
//		for (int j = 1; j <= m; j++)  
//		{
//			cin >> arr[i][j];
//		}
//	}
//	cout << "输入起点坐标和终点坐标:";
//	cin >> startx >> starty >> p >> q;
//	vis[startx][starty] = 1;    //！注意起点访问时也要设置为已访问
//	dfs(startx,starty,0);        //刚开始传起点，步数为0
//	cout << MIN;
//	return 0;
//}