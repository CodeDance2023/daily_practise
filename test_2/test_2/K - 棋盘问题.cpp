//#include <iostream>
//using namespace std;
//int n, k, vis[10],sum;
//char map[10][10];
//
//void dfs(int row, int cnt)
//{
//	if (cnt == k)  //����k�Σ�˵��������һ�ַ���
//	{
//		sum++;
//		return;
//	}
//	//�������������б��
//	for (int i = row; i < n; ++i) //���ڵ��ڼ�����
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
//		sum = 0;          //ÿ�����������ܷ�����Ϊ0
//		memset(vis,0,sizeof(vis)); //ÿ���������÷�������Ϊ0
//		//������������
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				cin >> map[i][j];
//			}
//		}
//		//�������������б��
//		dfs(0,0); //�����У�������
//		cout << sum << endl;
//	}
//	return 0;
//}