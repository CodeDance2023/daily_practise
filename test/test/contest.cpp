//#include <iostream>
//#include <ctime>
//#include <cstring>
//#include <string>
//#pragma warning(disable:4996)
////using namespace std;
////int main()
////{
////	char s[] = "hhijiihappynewyear";
////	char* ret;
////	ret = strstr(s,"happynewyear");
////	cout << "�±��ǣ�" << ret - s ;
////
////	return 0;
////}
//////
//////int main()
//////{
//////	//char s[100] = "�绰��15975948675,������������,�Ա���";
//////	//char* ps[4];
//////	//ps[0] = strtok(s,",");
//////	//cout << ps[0] << endl;
//////	//ps[1] = strtok(NULL,",");
//////	//cout << ps[1] << endl;
//////	//ps[2] = strtok(NULL,",");
//////	//cout << ps[2] << endl;
//////	//ps[3] = strtok(NULL,",");
//////	//printf("%d",ps[3]);
//////	char s[100] = "�绰��15975948675,������������,�Ա���";
//////	char* ps[4];
//////	ps[0] = strtok(s,",");           //��һ����
//////	cout << ps[0] << endl;
//////	int i = 1;
//////	while (ps[i] != NULL)             //�ڶ��ο�ʼ��Ҫ��NULL������strtok()����һ���и��λ�ý����и�
//////	{
//////		ps[i] = strtok(NULL,",");
//////		cout << ps[i] << endl;
//////		i++;
//////	}
//////	return 0;
//////}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	clock_t s, f;
//	long long a, b, ret = 1;
//	int p;
//	cin >> a >> b >> p;
//	s = clock();
//	for (int i = 1; i <= b; ++i)
//	{
//		ret = ret * a;
//		ret = ret % p;
//	}
//	cout << ret << endl;
//	f = clock();
//	cout << (double)(f - s) / CLOCKS_PER_SEC;
//	return 0;
//}