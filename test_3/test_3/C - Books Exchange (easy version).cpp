//#include<iostream>
//using namespace std;
//int p[208], d[208];      
//
//void init(int n)
//{
//    for (int i = 1; i <= n; i++)     //��ʼ��
//    {
//        p[i] = i;
//        d[i] = 1;       //��������Ҫһ��
//    }
//}
//int find(int x) //find����
//{
//    if (p[x] != x) 
//    {
//        p[x] = find(p[x]);    //·��ѹ��
//    }
//    return p[x];
//}
//
//void join(int x,int i)
//{
//    int fx, fi;
//    fx = find(x);
//    fi = find(i);
//    if (fx != fi)//���ڵ㲻���Լ�
//    {
//        d[fx] += d[fi]; //������1
//        p[fi] = fx;          //�ϲ�
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
