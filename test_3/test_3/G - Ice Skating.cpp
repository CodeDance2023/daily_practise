//#include <iostream>
//using namespace std;
//#define MAX_N 100
//int p[MAX_N]; // 记录节点的父节点
//int s[MAX_N]; // 记录集合的大小
//// 初始化并查集，将节点v初始化为一个独立的集合
//void init() {
//    for (int i = 0; i < MAX_N; i++) {
//        p[i] = i;
//        s[i] = 1;
//    }
//}
//
//// 查找节点v所属的集合（根节点）
//int find(int v) {
//    if (v == p[v])
//        return v;
//    return p[v] = find(p[v]);
//}
//
//// 合并两个集合
//void join(int a, int b) {
//    a = find(a);
//    b = find(b);
//    if (a != b) {
//        if (s[a] < s[b]) {
//            int temp = a;
//            a = b;
//            b = temp;
//        }
//        p[b] = a;
//        s[a] += s[b];
//    }
//}
//
//int main() {
//    int num; // 雪堆的数量
//    cin >> num; // 输入雪堆的数量
//    init(); // 初始化并查集
//    // 合并具有连接关系的雪堆
//    for (int i = 0; i < num; i++) {
//        int x, y;
//        cin >> x >> y;
//        join(x, y);
//    }
//    int comp = 0; // 连通分量数量
//    // 计算并查集中连通分量的数量
//    for (int i = 1; i <= MAX_N; i++) {
//        if (p[i] == i)
//            comp++;
//    }
//    cout << comp - 1 << endl; // 输出最小雪堆数量
//    return 0;
//}
