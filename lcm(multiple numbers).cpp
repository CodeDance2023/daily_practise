#include <iostream>
using namespace std;
int main()
{
	int a[10], max, i, j, N;   //a数组用来储存输入的数，max为输入数中较大数，i为控制输入数的序号的循环变量，j为较大数的倍数，N为要求数的个数
	bool flag;       //flag用来标记j是否是公倍数
	cin >> N;          //输入要求多少个数的最小公倍数
	for (i = 0; i < N; ++i)
	{
		cin >> a[i];     //输入数字
	}
	max = a[0];   //把第一个设置为最大的
	for (j = 1; j < N; ++j)        //利用循环比较得出较大值
	{
		if (a[j] > max)
		{
			max = a[j];
		}
	}
	j = max;                //从较大数的1倍开始循环
	while (1)               //外层循环列举可能的最小公倍数：即较大的数的倍数
	{
		flag = true;        //每一个循环（每一个j）都先标记为true，表示可能是公倍数
		for (i = 0; i < N; ++i)     //内层循环用本次外层循环的j来整除这些输入的要求最小公倍数的数字
		{
			if (j % a[i] != 0)           //用本次的j来整除这些输入的数
			{
   				flag = false;          //发现有一个不能整除，标记为false，表示这个j不是公倍数
				break;                 //退出本次内层循环，换一个j
			}
		}
		if (flag == true)              //如果这个j完成上面的整除过程，没有被标记为false,说明这个j就是公倍数
		{
			cout << j;                 //马上输出j
			break;                     //退出查找最小公倍数的循环
		}
		else
		{
			j += max;                 //如果被标记为false，则j+=max，变成j的2倍，继续循环找最小公倍数
		}
	}
	return 0;
}