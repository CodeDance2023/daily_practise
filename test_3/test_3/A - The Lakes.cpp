//#include <iostream>
//using namespace std;
//#define N 1008
//int map[N][N];   // �洢���������������
//int vis[N][N];   // ��¼�����е�λ���Ƿ��Ѿ����ʹ�������
//int n, m;   // ���������������
////��������
//int dx[] = { 0, 0, 1, -1 };   // x �����ƫ����
//int dy[] = { 1, -1, 0, 0 };   // y �����ƫ����
//int dfs(int x, int y)
//{
//    if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y] || map[x][y] == 0)
//    {
//        return 0;   // Խ����ѷ��ʻ��Ǻ�������ֹ�������������Ϊ0
//    }
//    vis[x][y] = 1;   // ��ǵ�ǰλ��Ϊ�ѷ���
//    int volume = map[x][y];   // ��ǰλ�õ����
//    for (int i = 0; i < 4; i++)
//    {
//        volume += dfs(x + dx[i], y + dy[i]);   // �ݹ���������ڵ�λ�ò��ۼ����
//    }
//    return volume;   // ���غ����������
//}
//
//int max_lake_volume()
//{
//    int max_volume = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (!vis[i][j] && map[i][j] > 0)   // ����ǰλ��δ�������Ǻ���
//            {
//                int volume = dfs(i, j);   // ����dfs
//                if (volume > max_volume)
//                {
//                    max_volume = volume;   // ����������
//                }
//            }
//        }
//    }
//    return max_volume;   // �������������
//}
//
//int main()
//{
//    int t;
//    cin >> t;   // �����������������
//    while (t--)
//    {
//        cin >> n >> m;   // �������������������
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                cin >> map[i][j];   // ����ÿ��λ�õ�ֵ
//                vis[i][j] = 0;   // ��ʼ����������
//            }
//        }
//        int result = max_lake_volume();   // �������������
//        cout << result << endl;   // ������
//    }
//    return 0;
//}
