//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int L, R, arr[100], sum[100], N;  //L,R�ֱ�Ϊ��������
//	cout << "��������ĳ���:(N <= 100)";
//	cin >> N;      //��������ĳ���
//	cout << "�������������:";
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];     //�������������
//	}
//	sum[0] = arr[0];        //����ǰ׺��
//	for (int j = 1; j < N; j++)
//	{
//		sum[j] = sum[j - 1] + arr[j];     
//	}
//	cout << "�����������䣺";
//	cin >> L >> R;
//	if (L == 0)
//	{
//		cout << sum[R];
//	}
//	else
//	{
//		cout << sum[R] - sum[L - 1];
//	}
//	return 0;
//}