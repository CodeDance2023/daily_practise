//#include <iostream>       
//#include <iomanip>         //setprecision()���ļ�����
//using namespace std;
//int main()
//{ 
//	float a = 3.1415926;
//	cout << fixed;                  //ǿ��С���Ը���������ʽ��ʾ
//    cout << setprecision(7);      //������Чλ������C��������С��������λ����Щ���𣡣���
//	cout << setfill('*');           //���ÿ�ȵ������ţ�Ĭ���ǿո�
//	cout << setw(11);               //���ÿ��
//	cout << left;                   //���ö��뷽ʽ,����뼴���ұ߲����ȣ��Ҷ������෴
//	cout << a;
//	return 0;
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	double a = 3.1415926154;
//	cout << setprecision(5);            //3.1416��Ϊ5λ��Ч���֣�
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
//	cin.ignore();          //�����������뻺����
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
//	srand((unsigned int)time(NULL));      //time(NULL)�ķ���ֵ����һֱ�䣬����һ��ֻ��һ��ʱ���
//	for (int i = 1; i <= 100; i++)
//	{
//		cout << rand() << endl;          //rand()������ԭ������srand()���ݵĲ�������rand()����������ݹ�ʽ�����һ�����ֵ���ڶ��ε���rand()ʱ���Ὣ��һ�β������������Ϊ�������θ���ʽ�ٴμ������һ�����ֵ���Դ�����
//	}                                    //һ��srand()�����ӣ�������rand()����һ���̶�������
//	return 0;
//}
//
//
//
//����������о����ǵ�ϸ��
//
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));      //����һ��srand()��rand()����ݵ�һ�β��������ֵ���ٴθ��ݹ�ʽ������ڶ������ֵ
//	for (int i = 1; i <= 100; i++)
//	{
//		cout << rand() << endl;         
//	}                                    //�����������������ʱ�����
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
//		srand((unsigned int)time(NULL));       //ÿ��ѭ���������srand(),�������ѭ���ڣ��������е�ʱ�� <1s,���time()����ʱ�����һ���ģ�����rand()���ݹ�ʽ����������������ÿ�ζ���һ���ģ�����
//		cout << rand() << endl;
//	}                                          //�������ÿ�β��������������һ����
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


          //char* pc ��   Ĭ��pc��һ���ַ�����������һ��ָ�����
//#include <iostream>
//using namespace std;
//int main()
//{
//	char c = 'a';
//	char* pc = &c;          //char*Ĭ��Ϊһ���ַ������ͣ����Դ�ӡʱĬ�ϻὫ��&c����Ϊ���ַ���������ӡ
//	cout << pc << endl;     //Ĭ�ϴ�ӡ�Ľ����a���������������������������������� ? �O
//	cout << (void*)pc;      //��pc�ַ���תΪvoid��ָ��Ľ���� 000000AA154FFB24
//		                      //void*��һ�������ָ�����ͣ����Դ���������ĵ�ַ   
//	return 0;
//}

//
////���ã�&����������һ��������һ����������ʵ���ײ���߼������ǡ�ָ�롱��ֻ��Ϊ��ʹ��д�Ĵ�������ۡ���ʹ��ָ��ʱ������д��*��
//#include <iostream>
//using namespace std;
//int main()
//{                         //���õĵײ��߼�
//	int num = 1;          //int num = 1;
//	int& a = num;         //int* a = &num;
//	a = 2;                //*a = 2;
//	cout << num;          //cout << num;
//	cout << sizeof(double&);
//	return 0;
//}

//     //������Ϊ��������
//#include <iostream>
//using namespace std;              //���õĵײ��߼�
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
////�򵥷�����1��+ 2��+3��+���� n��
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

////��1�� + 3�� + 5��+ ���� n!
//#include <iostream>
//using namespace std;
//int main()
//{
//    int i, j, ret = 1, sum = 0;
//    for (j = 1; j <= 5; j+=2)          //�ؼ���j += 2
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
//    for (j = 2; j <= 4; j += 2)          //�ؼ���j += 2
//    {
//        ret = 1;                           //ע��ÿ����һ�����Ľ׳�֮ǰ����Ҫ���г�ʼ��
//        for (i = 1; i <= j; i++)  //  һ��ѭ��������һ�����Ľ׳ˣ�j ���ڼ������󼸵Ľ׳�
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
//    for (int i = 1; i <= 3; i++)        //forѭ����ifһ����������ӻ����ž�ֻ�ܿ���һ�仰��
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

