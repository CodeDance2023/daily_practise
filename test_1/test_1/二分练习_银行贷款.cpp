//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	double l = 0, r = 10.0, mid, temp;
//	int loan, pay, month;
//	cin >> loan >> pay >> month;
//	cout << fixed << setprecision(1);    //�ٷ�����ʽ��������þ���ΪС�����һλ
//	while (l <= r)
//	{
//		mid = (l + r) / 2;
//		if ((r - l) < 0.0001)  //�Ҳ���һ��mid�����ʣ�ʹ��loan = 0�������������0.00001��һ����С����������ôֱ�Ӱ������������������
//		{
//			cout << mid * 100;     //�԰ٷ�����ʽ�����Ҫ����100�������
//			break;
//		}
//		temp = loan;   //ÿһ�β��Ҷ���ʼ��Ϊԭ����loan
//		for (int i = 1; i <= month; ++i)     //����������ʺ���ܴ�����
//		{
//			temp = temp * (1 + mid) - pay;
//		}
//		if (temp == 0)     //��0~3��Χ���ҳ�һ��mid�����ʣ�����ʹ��loan������Ϊ0
//		{
//			cout << mid * 100;
//			break;
//		}
//		else if (temp > 0)
//		{
//			r = mid;      //ע�ⲻ��ʱr = mid - 1����Ϊ�����ҵ�������һ����С����������������±�
//		}
//		else
//		{
//			l = mid;      //ͬ��ע�ⲻ��ʱl = mid + 1����Ϊ�����ҵ�������һ����С����������������±�
//		}
//	}
//	return 0;
//}