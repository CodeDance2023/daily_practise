//#include<iostream>
//using namespace std;
//int p[208], d[208];      
//
//void init(int n)
//{
//    for (int i = 1; i <= n; i++)     //初始化
//    {
//        p[i] = i;
//        d[i] = 1;       //天数最少要一天
//    }
//}
//int find(int x) //find函数
//{
//    if (p[x] != x) 
//    {
//        p[x] = find(p[x]);    //路径压缩
//    }
//    return p[x];
//}
//
//void join(int x,int i)
//{
//    int fx, fi;
//    fx = find(x);
//    fi = find(i);
//    if (fx != fi)//根节点不是自己
//    {
//        d[fx] += d[fi]; //天数加1
//        p[fi] = fx;          //合并
//    }
//}
//int main()
//{
//    int q;
//    cin >> q;
//    while (q--)
//    {
//        int n;
//        cin >> n;
//        init(n);
//        for (int i = 1; i <= n; i++)
//        {
//            int x;
//            cin >> x;
//            join(x,i);
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            cout << d[find(i)] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
