//
//#include <iostream>
//#include <algorithm>
//int b[105], g[105],vg[105]; //vg����ΪŮ���Ƿ�����������
//using namespace std;
//int main()
//{
//    int n, m, sum = 0;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) cin >> b[i];
//    cin >> m;
//    for (int j = 1; j <= m; ++j) cin >> g[j];
//// ������������� b ��Ů��������� g ��������
////���Ա�֤ƥ��ʱ�����������Ů����ʼƥ�䣬������ĿҪ������Ž�
//    sort(b + 1, b + n + 1);   
//    sort(g + 1, g + m + 1);
//
//    for (int i = 1; i <= n; ++i)  //����Ů���
//    {
//        for (int j = 1; j <= m; ++j)
//        {
//            if (abs(b[i] - g[j]) <= 1 && vg[j] == 0)
//            {
//                vg[j] = 1;
//                sum++;
//                break;
//            }
//        }
//    }
//
//    cout << sum;
//    return 0;
//}
