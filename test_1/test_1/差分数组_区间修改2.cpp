//将在操作数组上进行的操作映射回原数组
#include <iostream>
using namespace std;
int main()
{
	int a[100], o[100] = {0}, sumo[100]; //a为原数组，o为操作数组，sumo为操作数组的前缀和数组
	int L, R, V, N;    //L, R分别为左右区间，V为区间修改个数值，N为数组长度
	cout << "输入数组的长度：";
	cin >> N;
	cout << "输入数组的内容：";
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	cout << "输入左右区间和区间改变的值:";
	cin >> L >> R >> V;
	o[L] = o[L] + V;      //进行区间修改操作
	o[R + 1] = o[R + 1] - V;
	sumo[0] = o[0];              
	for (int i = 1; i < N; i++)      //给操作数组求前缀和
	{
		sumo[i] = sumo[i - 1] + o[i];
	}
	for (int j = 0; j < N; j++) //映射回原数组
	{
		a[j] = a[j] + sumo[j];
		cout << a[j] << " ";     //顺便输出修改过后的原数组
	}
	return 0;
}
