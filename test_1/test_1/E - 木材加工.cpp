//#include <iostream>
//using namespace std;
//int L[100010]; //����ԭľ�ĳ���
//int n, k, l, r,mid,cnt,ans,Max = 0;
//
//bool check(int x)
//{
//	if (x == 0) return false;    //��ֹ��0�����������0cm��˵��1cm���в�����������false
//	cnt = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		cnt += L[i] / x;     //�ǵ÷�ֹxΪ0�����ֳ�0�����
//	}
//	if (cnt >= k)             //���cnt >= k,�ͷ���true��cnt < k,�ͷ���false
//	{
//		ans = x;              //����Ҫ�󣬱���һ����
//		return true;     
//	}
//	else   return false;
//}
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> L[i];       //����ÿһ��ԭľ�ĳ���
//		if (L[i] > Max) Max = L[i];  //�ҳ�ԭľ����󳤶ȣ���Ϊ�𰸵��ұ߽�
//	}
//		
//	l = 1;      //����Ϊ0cm�����ǲ�����Ϊ0������ֳ�0���⣬0����������ж�
//	r = Max;    //�����Ϊn��ԭľ�е���󳤶�
//	while (l <= r)
//	{
//		mid = (l + r) >> 1; 
//		if (check(mid))
//		{
//			l = mid + 1;         //���� >= k,�����Ӵ󳤶������Ž�
//		}
//		else
//		{
//			r = mid - 1;        //����С��k��˵������̫���ˣ���Сһ��
//		}
//	}
//	if (check(ans)) cout << ans;     //Ϊ��ϴ�Ϊ0��������ٴμ��һ�δ𰸣�Ϊtrue�����ans���������0
//	else cout << 0;                   //�����жϣ�1cmҲ�в������������0
//	return 0;
//}