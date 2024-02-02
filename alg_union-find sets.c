#define _CRT_SECURE_NO_WARNINGS
//并查集算法
#include <stdio.h>
int fa[1000] = { 0 };
void init(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		fa[i] = i;
	}
}
int find(int x)
{
	if (fa[x] == x)
	{
		return x;
	}
	else
	{
		fa[x] = find(fa[x]);    //路径压缩
		return fa[x];
	}
}
void join(int x, int y)
{
	int fx, fy;
	fx = find(x);
	fy = find(y);
	if (fx != fy)
	{
		fa[fx] = fy;
	}
}

int main()
{
	int n, m, c, d, q;
	int x, y;
	scanf("%d", &n);
	init(n);           //初始化
	scanf("%d", &m);
	for (int i = 1; i <= m; i++)     //给出前提条件关系
	{
		scanf("%d %d", &x, &y);
		join(x, y);
	}
	scanf("%d", &q);     //问题
	for (int j = 1; j <= q; j++)
	{
		scanf("%d %d", &c, &d);
		if (find(c) == find(d))   //找教主，教主相同则证明有关系
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
}
