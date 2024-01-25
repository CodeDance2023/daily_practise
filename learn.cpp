//#include <iostream>       
//#include <iomanip>         //setprecision()的文件包含
//using namespace std;
//int main()
//{ 
//	float a = 3.1415926;
//	cout << fixed;                  //强制小数以浮点数的形式显示
//    cout << setprecision(7);      //设置有效位数，和C语言设置小数点后面的位数有些区别！！！
//	cout << setfill('*');           //设置宽度的填充符号，默认是空格！
//	cout << setw(11);               //设置宽度
//	cout << left;                   //设置对齐方式,左对齐即在右边补充宽度，右对齐则相反
//	cout << a;
//	return 0;
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	double a = 3.1415926154;
//	cout << setprecision(5);            //3.1416即为5位有效数字！
//	cout << a << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 0;
//	char a = '\0';
//	cin >> n;
//	cout << n << endl;     
//	cin.ignore();          //可以清理输入缓冲区
//	cin >> a;
//	cout << a;
//	return 0;
//}


//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));      //time(NULL)的返回值不会一直变，调用一次只有一个时间戳
//	for (int i = 1; i <= 100; i++)
//	{
//		cout << rand() << endl;          //rand()函数的原理：根据srand()传递的参数，在rand()函数里面根据公式计算出一个随机值；第二次调用rand()时，会将第一次产生的随机数作为参数传参给公式再次计算出另一个随机值，以此类推
//	}                                    //一个srand()的种子，可以让rand()产生一个固定的序列
//	return 0;
//}
//
//
//
//分两种情况研究它们的细节
//
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));      //调用一次srand()，rand()会根据第一次产生的随机值，再次根据公式计算出第二个随机值
//	for (int i = 1; i <= 100; i++)
//	{
//		cout << rand() << endl;         
//	}                                    //这个程序产生的随机数时随机的
//	return 0;
//}
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//int main()
//{
//	for (int i = 1; i <= 10000; i++)
//	{
//		srand((unsigned int)time(NULL));       //每次循环都会调用srand(),且在这个循环内，程序运行的时间 <1s,因此time()产生时间戳是一样的，所以rand()根据公式计算出来的随机数就每次都是一样的！！！
//		cout << rand() << endl;
//	}                                          //这个程序每次产生的随机数都是一样的
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//int main()
//{
//	//srand(1);
//	for (int i = 1; i <= 100; i++)
//	{
//		cout << rand() << endl;
//	}
//	return 0;
//}


          //char* pc 会   默认pc是一个字符串，而不是一个指针变量
//#include <iostream>
//using namespace std;
//int main()
//{
//	char c = 'a';
//	char* pc = &c;          //char*默认为一个字符串类型，所以打印时默认会将“&c”作为“字符串”来打印
//	cout << pc << endl;     //默认打印的结果：a烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫 ? 鸒
//	cout << (void*)pc;      //将pc字符串转为void的指针的结果： 000000AA154FFB24
//		                      //void*是一个特殊的指针类型，可以存放任意对象的地址   
//	return 0;
//}

//
////引用（&）：即给另一个变量起一个别名，其实“底层的逻辑”还是“指针”。只是为了使得写的代码更美观。即使用指针时可以少写“*”
//#include <iostream>
//using namespace std;
//int main()
//{                         //引用的底层逻辑
//	int num = 1;          //int num = 1;
//	int& a = num;         //int* a = &num;
//	a = 2;                //*a = 2;
//	cout << num;          //cout << num;
//	cout << sizeof(double&);
//	return 0;
//}

//     //引用作为函数参数
//#include <iostream>
//using namespace std;              //引用的底层逻辑
//void myChange(int& a,int& b)      //myChange(int *a,int*b)
//{
//    int temp = 0;                
//    temp = a;                     // temp = *a;   
//    a = b;                        //*a = *b;
//    b = temp;                     //*b  =temp;
//}
//int main()
//{
//    int a = 1, b = 2;
//    myChange(a,b);                 //myChange(&a,&b);
//    cout << a << " " << b;
//    return 0;
//}

//
////简单方法算1！+ 2！+3！+…… n！
//#include <iostream>
//using namespace std;
//int main()
//{
//    int i, j, ret = 1, sum = 0;
//    for (int i = 1; i <= 5; i++)          
//
//    {
//        ret = ret * i;
//        sum += ret;
//    }
//    cout << sum;
//    return 0;
//}

////算1！ + 3！ + 5！+ …… n!
//#include <iostream>
//using namespace std;
//int main()
//{
//    int i, j, ret = 1, sum = 0;
//    for (j = 1; j <= 5; j+=2)          //关键是j += 2
//    {
//        ret = 1;
//        for (i = 1; i <= j; i++)
//        {
//            ret = ret * i;
//        }
//        sum = sum + ret;
//    }
//    cout << sum;
//  
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int i, j, ret = 1, sum = 0;
//    for (j = 2; j <= 4; j += 2)          //关键是j += 2
//    {
//        ret = 1;                           //注意每次求一个数的阶乘之前，都要进行初始化
//        for (i = 1; i <= j; i++)  //  一个循环可以求一个数的阶乘，j 等于几就是求几的阶乘
//        {
//            ret = ret * i;
//        }
//
//        sum = sum + ret;
//    }
//    cout << sum;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 1, a = 0;
//    for (int i = 1; i <= 3; i++)        //for循环和if一样，如果不加花括号就只能控制一句话！
//        cout << n << endl;
//        cin >> a;
//        cout << a;
//    return 0;
//}
                        

//#include <iostream>
//using namespace std;
//int main()
//{
//    int a[10];
//    for (int i = 1; i <= 10; i++)
//    {
//        a[i - 1] = i;
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        a[i + 5] = a[i];
//    }
//    return 0;
//}

