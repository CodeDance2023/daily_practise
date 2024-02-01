#define _CRT_SECURE_NO_WARNINGS
//并查集算法(路径压缩版)
//#include <stdio.h>
//int fa[1000] = { 0 };       //fa表示上级
//void init(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		fa[i] = i;                  //初始化是每个人的上级都是自己
//	}
//}
//int find(int x)              //查找教主，而不是查找一个节点的上级
//{
//	if (fa[x] == x)
//	{
//		return x;
//	}
//	else
//	{
//		fa[x] = find(fa[x]);    //路径压缩：通过递归，在查找一个节点的教主的过程中，就可以把所有人的上级都直接设置为教主
//		return fa[x];
//	}
//}
//void join(int x, int y)
//{
//	int fx, fy;
//	fx = find(x);
//	fy = find(y);
//	if (fx != fy)
//	{
//		fa[fx] = fy;
//	}
//}
//
//int main()
//{
//	int n, m, c, d, q;
//	int x, y;
//	scanf("%d", &n);
//	init(n);           //初始化
//	scanf("%d", &m);
//	for (int i = 1; i <= m; i++)     //给出前提条件关系
//	{
//		scanf("%d %d", &x, &y);
//		join(x, y);
//	}
//	scanf("%d", &q);     //问题
//	for (int j = 1; j <= q; j++)
//	{
//		scanf("%d %d", &c, &d);
//		if (find(c) == find(d))   //找教主，教主相同则证明有关系,而不是找上级是否相同（fa[c] == fa[d]）
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	}
//}



