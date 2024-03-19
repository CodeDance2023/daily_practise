//#include <iostream>
//using namespace std;
//#define N 1008
//int map[N][N];   // 存储湖泊的网格的数组
//int vis[N][N];   // 记录网格中的位置是否已经访问过的数组
//int n, m;   // 网格的行数和列数
////方向数组
//int dx[] = { 0, 0, 1, -1 };   // x 方向的偏移量
//int dy[] = { 1, -1, 0, 0 };   // y 方向的偏移量
//int dfs(int x, int y)
//{
//    if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y] || map[x][y] == 0)
//    {
//        return 0;   // 越界或已访问或不是湖泊，终止搜索，返回体积为0
//    }
//    vis[x][y] = 1;   // 标记当前位置为已访问
//    int volume = map[x][y];   // 当前位置的体积
//    for (int i = 0; i < 4; i++)
//    {
//        volume += dfs(x + dx[i], y + dy[i]);   // 递归地搜索相邻的位置并累加体积
//    }
//    return volume;   // 返回湖泊的总体积
//}
//
//int max_lake_volume()
//{
//    int max_volume = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (!vis[i][j] && map[i][j] > 0)   // 若当前位置未访问且是湖泊
//            {
//                int volume = dfs(i, j);   // 进行dfs
//                if (volume > max_volume)
//                {
//                    max_volume = volume;   // 更新最大体积
//                }
//            }
//        }
//    }
//    return max_volume;   // 返回最大湖泊体积
//}
//
//int main()
//{
//    int t;
//    cin >> t;   // 输入测试用例的数量
//    while (t--)
//    {
//        cin >> n >> m;   // 输入网格的行数和列数
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                cin >> map[i][j];   // 输入每个位置的值
//                vis[i][j] = 0;   // 初始化访问数组
//            }
//        }
//        int result = max_lake_volume();   // 计算最大湖泊体积
//        cout << result << endl;   // 输出结果
//    }
//    return 0;
//}
