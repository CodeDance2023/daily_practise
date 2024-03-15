	//#include <iostream>
	//using namespace std;
	//char s[100010];
	//int n, i = 0, j = 0, cnt;

	//int main()
	//{
	//	cin >> n >> s;
	//	while (i < n)
	//	{
	//		cnt = 0;      //重置元音字母个数为0
	//		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'y')  //是元音字母
	//		{
	//			for (j = i; s[j] == s[i]; ++j) cnt++;   //计算元音字母的重复个数
	//			if ((s[i] == 'e' || s[i] == 'o') && cnt == 2)    //排除两个e或者o
	//			{
	//				cout << s[i] << s[i];    //输出两个e或者0
	//				i += 2;           //跳过两个字母e或者o
	//			}
	//			else      //其他重复情况，都是输出一个
	//			{
	//				cout << s[i];
	//				i += cnt;    //跳过cnt个
	//			}
	//		}
	//		else            //不是元音字母
	//		{
	//			cout << s[i];
	//			i++;
	//		}
	//	}
	//	return 0;
	//}
