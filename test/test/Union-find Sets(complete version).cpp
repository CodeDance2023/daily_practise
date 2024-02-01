//#include <stdio.h>
//int fa[1000000] = { 0 };   //fa数组储存每一个元素的上级是谁
//int level[1000000] = { 1 };   //leve数组储存每一个元素在集合中的等级是多少，最低为1
//void init(int N)              //init函数用来初始化每一个元素的上级和它们在集合中的等级
//{
//	int i = 0;
//	for (i = 1; i <= N; i++)
//	{
//		fa[i] = i;               //每一个元素的上级一开始都统一初始化为自己
//		level[i] = 1;            //每一个元素的等级一开始都统一初始化为1
//	}
//}
//
//int find(int x)                   //join函数用来找到一个元素的boss（根节点）
//{
//	if (fa[x] == x)              //一个元素的上级为自己，说明他自己就是boss
//	{
//		return x;                //递归终止条件
//	}
//	else
//	{
//		fa[x] = find(fa[x]);              //路径压缩算法!!! 在查找一个元素的boss时，可以将这个元素到boss之间的所有元素的boss都直接设置为boss，减少“树”的高度
//		return fa[x];                     //并且减少下次查找这条路径上元素时候调用find函数的次数
//	}
//}
//
//
//void join(int x, int y)      //join函数用来合并两个元素（指定一个元素为另一个元素的上级）
//{
//	int fx, fy;        //fx,fy分别为x和y的boss
//	fx = find(x);
//	fy = find(y);
//	if (fx != fy)           //boss不同，说明不在同一个集合，才要合并
//	{
//		if (level[fx] > level[fy])            //fx的等级比fy高（树的高度）
//		{
//			fa[fy] = fx;
//		}
//		else              //因为等级相同时可以随便指定谁是谁的上级，因此等级相同和大于两种情况放在一个else内
//		{
//			if (level[fx] == level[fy])
//			{
//				level[fy]++;            //相同则让一个的等级先升高，在指定上级
//			}
//			fa[fx] = fy;
//		}
//	}
//}
//
//
//int main()
//{
//	int N, M, Z, X, Y;
//	scanf("%d", &N);
//	init(N);
//	scanf("%d", &M);
//	for (int j = 1; j <= M; j++)
//	{
//		scanf("%d %d %d", &Z, &X, &Y);
//		if (Z == 1)
//		{
//			join(X, Y);
//		}
//		else if (Z == 2)
//		{
//			if (find(X) == find(Y))      //如果boss（根节点）相同，则说明在同一个集合内
//			{
//				printf("Y\n");
//			}
//			else
//			{
//				printf("N\n");
//			}
//		}
//	}
//	return 0;
//}