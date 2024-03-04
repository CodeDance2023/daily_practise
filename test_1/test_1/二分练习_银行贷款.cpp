//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	double l = 0, r = 10.0, mid, temp;
//	int loan, pay, month;
//	cin >> loan >> pay >> month;
//	cout << fixed << setprecision(1);    //百分数形式输出，设置精度为小数点后一位
//	while (l <= r)
//	{
//		mid = (l + r) / 2;
//		if ((r - l) < 0.0001)  //找不到一个mid（利率）使得loan = 0，这个数可能是0.00001（一个很小的数），那么直接按精度输出，不再找了
//		{
//			cout << mid * 100;     //以百分数形式输出，要乘以100后再输出
//			break;
//		}
//		temp = loan;   //每一次查找都初始化为原来的loan
//		for (int i = 1; i <= month; ++i)     //计算带上利率后的总贷款量
//		{
//			temp = temp * (1 + mid) - pay;
//		}
//		if (temp == 0)     //在0~3范围内找出一个mid（利率）尽量使得loan贷款量为0
//		{
//			cout << mid * 100;
//			break;
//		}
//		else if (temp > 0)
//		{
//			r = mid;      //注意不能时r = mid - 1，因为这里找的利率是一个很小的数，不是数组的下标
//		}
//		else
//		{
//			l = mid;      //同样注意不能时l = mid + 1，因为这里找的利率是一个很小的数，不是数组的下标
//		}
//	}
//	return 0;
//}