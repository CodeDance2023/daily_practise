	//#include <iostream>
	//using namespace std;
	//char s[100010];
	//int n, i = 0, j = 0, cnt;

	//int main()
	//{
	//	cin >> n >> s;
	//	while (i < n)
	//	{
	//		cnt = 0;      //����Ԫ����ĸ����Ϊ0
	//		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'y')  //��Ԫ����ĸ
	//		{
	//			for (j = i; s[j] == s[i]; ++j) cnt++;   //����Ԫ����ĸ���ظ�����
	//			if ((s[i] == 'e' || s[i] == 'o') && cnt == 2)    //�ų�����e����o
	//			{
	//				cout << s[i] << s[i];    //�������e����0
	//				i += 2;           //����������ĸe����o
	//			}
	//			else      //�����ظ�������������һ��
	//			{
	//				cout << s[i];
	//				i += cnt;    //����cnt��
	//			}
	//		}
	//		else            //����Ԫ����ĸ
	//		{
	//			cout << s[i];
	//			i++;
	//		}
	//	}
	//	return 0;
	//}
