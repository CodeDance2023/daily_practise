//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	long long a, b;
//	int ret = 1;
//	while (scanf("%lld %lld", &a,&b) != EOF)
//	{
//		ret = 1;
//		while (b != 0)
//		{
//			if (b & 1)
//			{
//				ret = ret * a % 10;
//			}
//			a = a * a % 10;
//			b = b >> 1;
//		}
//		printf("%d\n",ret);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	long long a, b, ret = 1;       //aΪ������bΪָ����retΪ�۳˵Ľ��
//	while (b != 0)            
//	{
//		if (b % 2 == 1)       //bΪ����ʱ�������һ���۳�
//		{
//			ret = ret * a;    //b��һ�η��ó�����b���ż��
//		}
//		a = a * a;           //������ż����Ҫ����������߼� ���� ����ƽ����ָ������
//		b = b / 2;
//	}
//	printf("%lld",ret);
//	return 0;
//}