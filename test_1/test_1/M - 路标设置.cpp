//#include <bits/stdc++.h>
//using namespace std;
//int L, N, K, l, r, mid, ans,front = 0,cur,Max = 0,cnt;
//int d[100010];       //ÿ�������ڵ�·������ľ���
//bool check(int x)
//{
//	int temp;
//	cnt = 0;
//	for (int i = 1; i < N; ++i)
//	{
//		temp = d[i];          //��ֹ���ζ��ִ���������ľ��뱻�޸ģ�������һ�εĴ𰸴���
//		while (temp > x)     //�����б�mid����߶�
//		{
//			temp = temp - x;     //���߶β��ϼ�ȥmid
//			cnt++;                  //����·����+1
//		}
//	}
//	if (cnt <= K)
//	{  
//		ans = x;              //��¼һ����
//		return true;           
//	}
//	else return false;
//}
//int main()
//{
//	cin >> L >> N >> K;
//	//���ÿ����·��֮��ľ���
//	for (int i = 0; i < N; ++i) //d[0]һ����0�������������ݴ�d[1]��ʼ
//	{
//		cin >> cur;
//		d[i] = cur - front;
//		if (d[i] > Max) Max = d[i];    //�ҳ����г��ȵ����ֵ����Ϊ���ֵ��ұ߽�
//		front = cur;   //��һ������ǰһ��
//	}
//
//	l = 1;      //��߽���СΪ1
//	r = Max;
//	if (K == 0)     //û��������Ĳ��룬��ôֱ�������߶ε����ֵ
//	{
//		cout << Max;
//		return 0;
//	}
//	while (l <= r)
//	{
//		mid = l + ((r - l) >> 1);   //��ֹ���
//		if (check(mid)) r = mid - 1;
//		else l = mid + 1;
//	}
//	cout << ans;
//	return 0;
//}