//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//int n, m, sx/*���*/, sy/*���*/, map[408][408];
////�������飬���������ͣ�������8����������ߣ�����˳ʱ����8������
//int dx[8] = { -2,-1,1,2,2,1,-1,-2 }, dy[8] = { 1,2,2,1,-1,-2,-2,-1 };
//
//struct point   //����ṹ�����ͣ����������������������
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	queue<point> q;     //����һ�����ж���q
//	cin >> n >> m >> sx >> sy;
//	memset(map,-1,sizeof(map));   //map��ͼȫ������-1����ʾû���߹�
//	map[sx][sy] = 0; //���Ϊ0��
//	point sp = { sx,sy }, fp; //fpΪ��ͷ����
//	q.push(sp);     //�����ѹ�������
//	while (!q.empty())   //�ж϶����Ƿ�Ϊ�գ���Ϊ�վ�һֱ�������в���
//	{
//		fp = q.front();          //ȡ����ͷ
//		for (int i = 0; i < 8; ++i) //�ҵ���ͷ������չ�ĵ�
//		{
//			int tx, ty;
//			tx = fp.x + dx[i];
//			ty = fp.y + dy[i];
//			if (tx < 1 || tx > n || ty < 1 || ty > m || map[tx][ty] != -1) //�ų�Խ������
//			{
//				continue;
//			}
//			map[tx][ty] = map[fp.x][fp.y] + 1; //�ҵ�һ����ͼ�1��
//			q.push({ tx,ty });  //����ͷ��չ�����ĵ�ѹ�������
//		}
//		q.pop();      //������ͷ
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
