//#include <iostream>
//using namespace std;
//#define MAX_N 100
//int p[MAX_N]; // ��¼�ڵ�ĸ��ڵ�
//int s[MAX_N]; // ��¼���ϵĴ�С
//// ��ʼ�����鼯�����ڵ�v��ʼ��Ϊһ�������ļ���
//void init() {
//    for (int i = 0; i < MAX_N; i++) {
//        p[i] = i;
//        s[i] = 1;
//    }
//}
//
//// ���ҽڵ�v�����ļ��ϣ����ڵ㣩
//int find(int v) {
//    if (v == p[v])
//        return v;
//    return p[v] = find(p[v]);
//}
//
//// �ϲ���������
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
//    int num; // ѩ�ѵ�����
//    cin >> num; // ����ѩ�ѵ�����
//    init(); // ��ʼ�����鼯
//    // �ϲ��������ӹ�ϵ��ѩ��
//    for (int i = 0; i < num; i++) {
//        int x, y;
//        cin >> x >> y;
//        join(x, y);
//    }
//    int comp = 0; // ��ͨ��������
//    // ���㲢�鼯����ͨ����������
//    for (int i = 1; i <= MAX_N; i++) {
//        if (p[i] == i)
//            comp++;
//    }
//    cout << comp - 1 << endl; // �����Сѩ������
//    return 0;
//}
