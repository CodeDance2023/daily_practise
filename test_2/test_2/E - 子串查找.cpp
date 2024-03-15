//////超时了
//////#include <bits/stdc++.h>      
//////using namespace std;
//////char a[10000010], b[1000010];
//////int cur = 0, cnt, sum = 0, len;
//////int main()
//////{
//////	cin >> a >> b;
//////	len = (int)strlen(b);
//////	for (int i = 0,j = 0; a[cur] != '\0';)   //i指针维护a串，j指针维护b串
//////	{
//////		if (a[i] == b[j])
//////		{
//////			i++;
//////			j++;
//////			cnt++;        //记录a和b中字符匹配的次数
//////		}
//////		else
//////		{
//////			i++;
//////			cur++;           //原来的位置+1，方便下一次i的返回到cur的下一个位置
//////		}
//////
//////		if (cnt == len)     //匹配次数相等了，说明b在a中出现了
//////		{
//////			sum++;  //出现次数+1
//////			i = cur + 1;     //a字符串的指针i回到原来cur的下一个位置
//////			j = 0;           //b字符串的指针j回到下标为0的位置
//////			cur++;           //原来的位置+1，方便下一次i的返回到cur的下一个位置
//////			cnt = 0;         //cnt重置为0
//////		}
//////	}
//////	cout << sum;
//////	return 0;
//////}
//////
//////
////超时了
//#include <bits/stdc++.h>      
//using namespace std;
//char a[10000010], b[1000010];
//int cnt = 0;
//int main()
//{
//	cin >> a >> b;
//	for (int i = 0; a[i] != '\0'; ++i)
//	{
//		for (int j = i, k = 0; a[j] == b[k]; ++j, ++k)
//		{
//			if (b[k + 1] == '\0')
//			{
//				cnt++;
//				break;
//			}
//		}
//	}
//	cout << cnt;
//}
//
//
//
//
//
//
////KMP算法
//#include <bits/stdc++.h>      
//using namespace std;
//char a[10000010], b[1000010];
//int cnt = 0, prefix[1000010], i, j;   //prefix为前缀表
////求前缀表
//void getprefix(int* prefix, char* b)
//{
//	prefix[0] = 0;       //"初始化"prefix最长相等前后缀数组的第一位为0
//	j = 0;            //初始化j = 0，j代表i之前最长的相等前后缀
//	for (int i = 1; i < strlen(b); ++i)
//	{
//		while (j > 0 && b[j] != b[i])  //如果不相等就连续回退，尽头是下标为0处，无法再回退了
//		{
//			j = prefix[j - 1];  //根据前一位的前缀表回退到哪里
//		}
//		if (b[j] == b[i])      //如果相等，则令j+1
//		{
//			j++;
//		}
//		prefix[i] = j;    //更新next数组的值
//	}
//	
//}
//int main()
//{
//	cin >> a >> b;
//	getprefix(prefix,b);
//	i = 0;
//	j = 0;
//	while (a[i] != '\0')
//	{
//		if (a[i] == b[j])
//		{
//			if (b[j + 1] == '\0') cnt++;        //遍历完b数组，说明出现过了一次，cnt+1
//			i++;
//			j++;
//			
//		}
//		else if (j > 0)   //匹配失败
//		{
//			j = prefix[j - 1];   //根据前一位，即最长相等前后缀进行回退
//		}
//		else i++;     //第一次就匹配失败,i向前走一位，否则j就永远都会为0，i也无法前进
//	}
//	cout << cnt;
//	return 0;
//}