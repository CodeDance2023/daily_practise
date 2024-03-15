//#pragma warning(disable:4996)
//#include <iostream>
//#include <cstring>
//#include <cstdio>
//using namespace std;
//char s[100010], t[100010];
//int cnt, len, m = 0;
//int main()
//{
//	while (scanf("%s %s", s, t) != EOF)   //利用scanf遇到空格就停止获取的特性，可以一次分开获取两个字符串
//	{
//		cnt = 0, m = 0; //cnt用来记录是否满足了s的长度，即所有字符
//		len = (int)strlen(s);   //求出s的长度
//		for (int i = 0; s[i] != '\0'; ++i) //以s字符串为基准，循环遍历t,在t字符串中找到s字符串中的字符
//		{
//			for (int j = m; t[j] != '\0'; ++j)     //令j=m，因为找到符合的一个字符后，可以从它的下一个字符开始继续找
//			{
//				if (t[j] == s[i])
//				{
//					m = j + 1;  //下一轮直接从下一个字符开始
//					cnt++;       //字符数+1
//					break;
//				}
//			}
//		}
//		if (cnt == len) cout << "Yes" << endl;  //如果找到了s中的所有字符，长度相等，则s是t的字串，输出Yes
//		else cout << "No" << endl;              //否则输出NO
//		 
//	}
//	return 0;
//}


