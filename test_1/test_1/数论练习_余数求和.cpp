////#include <iostream>
////using namespace std;
//////����𰸴���
////int main()
////{
////	long long n,k,sum = 0,L,R;
////	cout << "����j(n,k)��n��k��";
////	cin >> n >> k;
////	for (long long i = 1; i <= n;)
////	{
////		if (k / i == 0)
////		{
////			break;
////		}
////		L = i;                        //k/i��ȵ�������Ĭ��Ϊ��һ����
////		R = min(n, k/(k/i));             //�۲췢��������Ϊk/��k / i),���n�п���С��k������min������֤������С�ڵ���N
////		for (long long j = L; j <= R; j++)      //���������ľ�i*k/i���
////		{
////			sum = sum + j * (k / i);
////		}
////		i = R + 1;      
////		
////	}
////	cout << n * k - sum;
////	return 0;
////}
//
//////�������ȷ
////#include <iostream>
////using namespace std;
////typedef long long ll;
////int main() {
////	ll n, k;
////	cin >> n >> k;
////	ll sum = n * k; // ͨ����ʽ�Ƶ������ģ�����Ϊ������Ȼ���ȥ��Ӧ���������ˡ�
////	for (ll i = 1; i <= n;) { // һ����n������Ҫ�����ۼ�
////		if (k / i == 0) break; // ���k/i����0��ֱ�ӽ���
////		ll l = i; // ��߽�
////		ll r = min(n, k / (k / i)); // �ұ߽��������n����ȡn
////		sum -= (k / i) * (l + r) * (r - l + 1) / 2; // sum ��ȥ��һ���ֵ
////		i = r + 1; // ����i��ֵ��������һ��
////	}
////	cout << sum << endl; // ������
////	return 0;
////}
//
////
////
////#include<iostream>
////#include<algorithm>
////using namespace std;
////typedef long long ll;
////
////int main(void)
////{
////	ll n, k;
////
////	cin >> n >> k;
////
////	ll sum = n * k; // ͨ����ʽ�Ƶ������ģ�����Ϊ������Ȼ���ȥ��Ӧ���������ˡ�
////
////	for (ll i = 1; i <= n; i++) // һ����n������Ҫ�����ۼ�
////	{
////		ll l = i, r, s = k / i;//  l Ϊ��߽磬 r Ϊ�ұ߽磬 s Ϊk/i��ȡ��ֵ��
////
////		if (k / i == 0) break;//��� Ϊ0 ֱ�ӽ���
////
////		r = min(n, k / s);//����ұ߽�������ķ�Χ֮�⣬�����һ�¡�
////
////		sum -= s * ((l + r) * (r - l + 1) / 2); // sum ��ȥ��һ�����ֵ��
////
////		i = r;//���� i ֵ��������һ�����
////	}
////
////	cout << sum;//��������
////
////	return 0;
////}
//
//�����Լ�д����ȷ�汾
//#include <iostream>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll n, k, l, r,sum = 0;
//	cin >> n >> k;
//	for (ll i = 1; i <= n;)
//	{
//		if (k / i == 0) break;
//		l = i;        //��߽�Ĭ��Ϊ�ҵ��ĵ�һ��
//		r = k / (k / i);          //�ұ߽�Ϊk/(k/i),��n<kʱ���ұ߽��п���Խ�磬��ʱ����r=n
//		if (r > n) r = n;        //��ֹ�������n<kʱ���ұ߽�r����n�����
//		sum += ((l + r) * (r - l + 1) / 2) * (k / i);     //k/i�ظ��������ǰn��� * (k/i) 
//		i = r + 1;
//	}
//	cout << n * k - sum;
//	return 0;
//}
