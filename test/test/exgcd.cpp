//#include <iostream>
//using namespace std;
//int exgcd(int a, int b, int& x, int& y)
//{
//    if (b == 0) 
//    {
//        x = 1, y = 0;   //b == 0ʱ��ȡx = 1��y = 0;���x��y��ֵ��ax + by = gcd(a,b),��b == 0ʱ��x��y��ֵ���������x��y���еݹ鷴�Ƴ�b��= 0ʱ��x��y
//        return a;
//    }
//    //��b ��= 0ʱ��ִ��������߼�
//    int d = exgcd(b, a % b, y, x);       //��Ϊx = y1 ��y = x1 - y1 [a / b]������Ҫ��y��ֵ����x��Ϊ�˷���y = x1 - y1 [a / b]�����Ծ��������y = y- x*[a / b]
//    y -=  (a / b) * x;           //b != 0,yҪͨ���������
//    return d;   
//}   
//int main()
//{
//    int a, b, x, y, ret;
//    cin >> a >> b >> x >> y;
//    ret = exgcd(a,b,x,y);          //�տ�ʼ��x��y������㴫����Ϊ�ȵ�b == 0ʱ����ͨ����ַ��x�ĳ�1��y�ĳ�0���ݹ����ʱ��x��y��ֵһֱ��1��0֮��ı䣬����Ϊ��ͨ����ַ�ı�ģ�����ͨ�����ĵ�u��
//    cout << ret << endl << x  << endl << y;
//    return 0;
//}