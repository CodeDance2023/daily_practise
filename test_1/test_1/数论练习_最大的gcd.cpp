//#include <bits/stdc++.h>
//#pragma warning(disable:4996)
////更相消损失法
//using namespace std;
//int MAX = 0;  
//void gcd(int arr[], int cnt)
//{
//	for (int i = 1, j = 2; j <= cnt;)  //运用双指针技巧，在这里省略了两个指针的控制条件
//	{
//		int temp,r,a,b;
//		a = arr[i];      //利用a和b，在交换大小的时候或者其他情况不会随意改变数组的值，进而导致每一对数字的顺序改变
//		b = arr[j];
//		if (a < b)   //保证大数减去小数
//		{
//			temp = a;
//			a = b;
//			b = temp;
//		}
//		r = a - b;
//		while (r != 0)         //更相消损失法,差为0就返回被减数和减数其中一个，即为结果
//		{
//			if (b < r)
//			{
//				temp = b;
//				b = r;
//				r = temp;
//			}
//			a = b;
//			b = r;
//			r = a - b;
//		}
//		//循环结束得出最大公约数后，比较每一对的大小
//		if (b > MAX)    
//		{
//			MAX = b;
//		}
//		if (j++ == cnt)      //双指针满足这个条件就进行变化,注意j要先和cnt进行比较再自增（直接放在判断里面），不然就会少一组数据没有比较
//		{
//			i++;
//			j = i + 1;
//		}
//	}
//}
//int main()
//{
//	int arr[100], N,cnt = 0; //cnt用来记录输入数字的个数,利用arr数组来储存输入的数字，方便进行计算
//	cout << "输入N：";
//	cin >> N;
//	for (int k = 1; k <= N; k++)
//	{
//		cnt = 0, MAX = 0;     //每一次循环都要置为0
//		int i = 1;
//		cout << "输入数字内容：";
//		getchar();      //清理程序的输入缓冲区
//		while (scanf("%d", &arr[i]), cnt++, getchar() != '\n')      //输入数字，当输入的是“换行”时，就结束输入
//		{
//			i++;
//		}
//		gcd(arr, cnt);
//		cout << "这些数字中，每一对的最大公约数是：" <<  MAX << endl;
//	}
//	return 0;
//}
//
//
//
////辗转相除法
//#include <bits/stdc++.h>
//#pragma warning(disable:4996)
//using namespace std;
//int MAX = 0;
//void gcd(int arr[], int cnt)
//{
//	for (int i = 1, j = 2; j <= cnt;)  //运用双指针技巧，在这里省略了两个指针的控制条件
//	{
//		int temp, r, a, b;
//		a = arr[i];      //利用a和b，在交换大小的时候或者其他情况不会随意改变数组的值，进而导致每一对数字的顺序改变
//		b = arr[j];
//		if (a < b)   //保证大数除以小数
//		{
//			temp = a;
//			a = b;
//			b = temp;
//		}
//
//		r = a % b;
//		while (r != 0)         //辗转相除法,余数为0就返回除数，即为结果
//		{
//			a = b;
//			b = r;
//			r = a % b;
//		}
//		//循环结束得出最大公约数后，比较每一对的大小
//		if (b > MAX)
//		{
//			MAX = b;
//		}
//		if (j++ == cnt)      //双指针满足这个条件就进行变化,注意j要先和cnt进行比较再自增（直接放在判断里面），不然就会少一组数据没有比较
//		{
//			i++;
//			j = i + 1;
//		}
//	}
//}
//int main()
//{
//	int arr[100], N, cnt = 0; //cnt用来记录输入数字的个数,利用arr数组来储存输入的数字，方便进行计算
//	cout << "输入N：";
//	cin >> N;
//	for (int k = 1; k <= N; k++)
//	{
//		cnt = 0, MAX = 0;     //每一次循环都要置为0
//		int i = 1;
//		cout << "输入数字内容：";
//		getchar();      //清理程序的输入缓冲区
//		while (scanf("%d", &arr[i]), cnt++, getchar() != '\n')      //输入数字，当输入的是“换行”时，就结束输入
//		{
//			i++;
//		}
//		gcd(arr, cnt);
//		cout << "这些数字中，每一对的最大公约数是：" << MAX << endl;
//	}
//	return 0;
//}
//
//
//
//
//
////递归
//#include <bits/stdc++.h>
//#pragma warning(disable:4996)
//using namespace std;
//int MAX = 0;
//int gcd(int a, int b)
//{
//	if (a < b)
//	{ 
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (b == 0)
//	{
//		return a;
//	}
//	return gcd(b, a % b);
//}
//int main()
//{
//	int arr[100], N, cnt = 0; //cnt用来记录输入数字的个数,利用arr数组来储存输入的数字，方便进行计算
//	cout << "输入N：";
//	cin >> N;
//	for (int k = 1; k <= N; k++)
//	{
//		cnt = 0, MAX = 0;     //每一次循环都要置为0
//		int i = 1;
//		cout << "输入数字内容：";
//		getchar();      //清理程序的输入缓冲区
//		while (scanf("%d", &arr[i]), cnt++, getchar() != '\n')      //输入数字，当输入的是“换行”时，就结束输入
//		{
//			i++;
//		}
//		for (int i = 1, j = 2; j <= cnt;)  //运用双指针技巧，在这里省略了两个指针的控制条件
//		{
//			int ret = gcd(arr[i], arr[j]);
//			if (ret > MAX)
//			{
//				MAX = ret;
//			}
//			if (j++ == cnt)      //双指针满足这个条件就进行变化,注意j要先和cnt进行比较再自增（直接放在判断里面），不然就会少一组数据没有比较
//			{
//				i++;
//				j = i + 1;
//			}
//		}
//		cout << "这些数字中，每一对的最大公约数是：" << MAX << endl;
//	}
//	return 0;
//}
//
//
//
//
//
//
//
//
//
