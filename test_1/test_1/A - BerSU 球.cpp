//
//#include <iostream>
//#include <algorithm>
//int b[105], g[105],vg[105]; //vg数组为女生是否有舞伴的数组
//using namespace std;
//int main()
//{
//    int n, m, sum = 0;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) cin >> b[i];
//    cin >> m;
//    for (int j = 1; j <= m; ++j) cin >> g[j];
//// 对男生身高数组 b 和女生身高数组 g 进行排序
////可以保证匹配时从最矮的男生和女生开始匹配，满足题目要求的最优解
//    sort(b + 1, b + n + 1);   
//    sort(g + 1, g + m + 1);
//
//    for (int i = 1; i <= n; ++i)  //男找女舞伴
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
