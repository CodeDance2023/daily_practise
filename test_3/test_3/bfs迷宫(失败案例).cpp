//#include <iostream>
//#include <queue>
//using namespace std;
//int n, m, t, sx, sy, fx, fy, map[10][10], v[10][10],x,y,cnt;
////�������飬��˳ʱ��Ϊ��
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
//	while (t--) //�����ϰ�������
//	{
//		cin >> x >> y;
//		map[x][y] = 1;  //�ϰ�����Ϊ1���յ��Զ�Ϊ0
//	}
//	point sp = { sx,sy }, fp, bp = {fx,fy};
//	q.push(sp); //�����ѹ�����
//	v[sx][sy] = 1;    //�������Ϊ�ѷ���
//	while (!q.empty())
//	{
//		fp = q.front();  //ȡ����ͷ
//		if (fp.x == fx && fp.y == fy) break; //��ͷΪ���������ֱ����ֹѭ��
//		//�ҳ���ͷ������չ����������
//		for (int i = 0; i < 4; ++i)
//		{
//			int tx, ty;
//			tx = fp.x + dx[i];
//			ty = fp.y + dy[i];
//			//�ų�Խ������
//			if (tx < 1 || tx > n || ty < 1 || ty> m || map[tx][ty] == 1 || v[tx][ty] == 1)
//			{
//				continue;
//			}
//			v[tx][ty] = 1; //����Ϊ�Ѿ�����
//			if (tx == fx && ty == fy)
//			{
//				cnt++;    //������+1
//				v[fx][fy] = 0; //�յ���������Ϊδ����
//			}
//			q.push({ tx,ty });    //��������չ������ѹ�����
//		}
//		q.pop();  //������ͷ
//	}
//	cout << cnt;
//	return 0;
//}