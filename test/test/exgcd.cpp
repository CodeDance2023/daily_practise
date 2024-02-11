//#include <iostream>
//using namespace std;
//int exgcd(int a, int b, int& x, int& y)
//{
//    if (b == 0) 
//    {
//        x = 1, y = 0;   //b == 0时，取x = 1，y = 0;这个x和y的值是ax + by = gcd(a,b),当b == 0时，x和y的值。利用这个x和y进行递归反推出b！= 0时的x和y
//        return a;
//    }
//    //当b ！= 0时，执行下面的逻辑
//    int d = exgcd(b, a % b, y, x);       //因为x = y1 ，y = x1 - y1 [a / b]，所有要将y的值传给x，为了符合y = x1 - y1 [a / b]，所以就有下面的y = y- x*[a / b]
//    y -=  (a / b) * x;           //b != 0,y要通过计算出来
//    return d;   
//}   
//int main()
//{
//    int a, b, x, y, ret;
//    cin >> a >> b >> x >> y;
//    ret = exgcd(a,b,x,y);          //刚开始的x，y可以随便传。因为等到b == 0时，是通过地址将x改成1，y改成0，递归回溯时，x和y的值一直在1和0之间改变，（因为是通过地址改变的，和普通变量的的u）
//    cout << ret << endl << x  << endl << y;
//    return 0;
//}