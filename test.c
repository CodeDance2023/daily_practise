#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int main()
////{
////	int num1 = 0;
////	int num2 = 0;
////	printf("��������Ҫ��ӵ���������:");
////	scanf("%d %d", &num1, &num2);
////	int sum = num1 + num2;
////	printf("%d", sum);
////	return 0;
////}
//
////
////int main()
////{
////	int message;
////	scanf("%d",&message);
////	if (message == 1)
////	{
////		printf("��ã�C���ԣ�");
////
////	}
////	else
////	{
////		printf("��ã�Python!");
////	}
////	return 0;
////}
//
//
////
////int main()
////{
////	short i = 1;
////	while (i <= 100)
////	{
////		if (i == 1)
////		{
////			printf("��\n");
////		}
////		i++;
////	}
////
////	return 0;
////}
//
//
////���庯��add����
////int add(int x, int y)
////{
////	return x + y;
////}
////
////
////int main()
////{
////	int sum = add(1, 3);         //���ú���add����
////	printf("%d",sum);
////	return 0;
////}
////
////
//////����һ������
////int function()
////{
////	int i = 1;
////	while (i <= 100)
////	{
////		printf("%d:������ϲ��ѧC���ԣ�\n",i);
////		i += 1;
////		
////	}
////
////}
////
////int main()
////{
////	function();          //���������е���function����
////	return 0;
////}
//
//
//
//
////#include <string.h>
////int main()
////{
////	int length = strlen("������\0���˧");    //���ú���strlen()���鿴�ַ����ĳ���, ������ ���ĺͱ����Ŷ��ǡ����������ȣ�
////	printf("���ַ����ĳ����ǣ�%d",length);
////	return 0;
////}
//
//
////
////int main()
////{
////	char arr[] = "��ã�C���ԣ�";         //�ڴˣ��ҷ�����C������û���ַ����������ͣ�Ҳû���ַ������͵ı��������������ñ����������ַ�����ͬʱȷ�����ַ���������C�����б���Ϊ���ַ������͵����顪�����ַ����͵ļ���!!!!
////	printf("%s",arr);
////	return 0;
////}
////
//
//
//
//
////int main()
////{
////	int i = 1;
////	int a = 2;
////
////	if (i == 100)
////	{
////		printf("��ã�");
////	}
////	else
////	{
////		printf("C���ԡ�");
////
////	}
////	
////
////	return 0;
////}
//
////
////
////int main()
////{
////	 int i = 1;
////	while (i <= 10)
////	{
////		static int a = 1;           //����static�����ξֲ�����
////		a++;
////		printf("%d\n",a);
////		i++;
////	}
////	return 0;
////}
//
////
////int main()
////{
////	extern add();            //���������ⲿ�ĺ���
////	int message = add(2, 3);
////	printf("%d",message);
////	return 0;
////}
//
//
//
////��C������д�žų˷���
////int main()
////{
////	int i = 1;
////	while (i <= 9)
////	{
////		int j = 1;
////		while (j <= i)
////		{
//////			int sum = j * i;
////			printf("%d*%d=%d\t",j,i,i*j);    //������Python�и�ʽ�����ʽ����һ����Ҫ�ñ���������������˵Ľ��
////			j++;
////
////		}
////		i++;
////		printf("\n");       //����printf("%c",\n);
////	} 
////	return 0;
////}
////
//
//
////
////int main()
////{
////	typedef int i;                         //������������������������Ϊ���ġ����磺typedef int ������typedef float ��������
////	typedef float f;
////	i num1 = 111;
////	f num2 = 1.2222;
////	printf("%d\n",num1);
////	printf("%10.4f",num2);
////
////	return 0;
////}
//
//
//
//
////#define NUM 100         //#defined�����ʶ������NUM
////int main()
////{
////	int num = NUM;
////	printf("%d",NUM);
////	return 0;
////}
//
//
////
////
////#define add(x,y) ((x)+(y))                //#define���塰�ꡱ
////int main()
////{
////	int result = add(1, 3);
////	printf("%d",result);
////	return 0;
////}
//
//
//
////
////
////int main()
////{
////	int a = 10;
////	int* p = &a;                 //����ָ�����p��������Ϊint*
////	printf("%p",p);
////	return 0;
////}
//
//
////int main()
////{
////	int a = 10;
////	int* p = &a;
////	*p = 20;           //*pΪ�������ַ����൱��*p=����a����*p��p��ָ��Ķ���
////	printf("%d",a);
////}
////
//
//
//
//
////
////int main()
////{
////	int name;
////	printf("�������������䣺");
////	scanf("%d", &name);
////	printf("����������%d��",name);
////	return 0;
////}
//
//
//////��ѭ����ʱ��ӡ��������ֻ�ܴ�ӡ����ѭ�������ᴦ��ո��ѭ��
////int main()
////{
////	printf("   #\n");
////	printf("  ###\n");
////	printf(" #####\n");
////	printf("#######");
////
////	return 0;
////}
//
// 
//
//
////int main()
////{
////	int i = 1;
////	for (i = 1; i <= 9; i++)
////	{
////		int j = 1;
////		for (j = 1; j <= i; j++)
////		{
////
////			printf("%d*%d=%d\t", j, i, j * i);
////		}
////		printf("\n");
////	}
////	return 0;
////}
//
//
//
////int main()
////{
////	printf("%d\n", '\0' && 56);
////	printf("%d", "" && 56);
////
////	
////	return 0;
////}
//
//
//
////struct student                         //����ṹ������
////{
////	char name[20];
////	char sex[10];
////	char tele[20];
////	int age;
////	
////};
////
////
////void print(struct student* ps)                  //���庯��print()��������ʽ������һ�����ṹ��ָ�������
////{
////
////	printf("%s %s %s %d\n", ps->name, ps->sex, ps->tele, ps->age);
////	printf("%s %s %s %d\n", (*ps).name, (*ps).sex, (*ps).tele, (*ps).age);
////
////
////}
////
////
////int main()
////{
////	struct student s = { "������","��","15975948675",19 };            //�ṹ�����͵ĳ�ʼ��
////	printf("%s %s %s %d\n",s.name ,s.sex,s.tele,s.age);
////	print(&s);                             //��print�����������Σ�ʵ�ʲ�����ָ�루��ַ��
////	return 0;
////}
////
//
////
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	printf("%zd", sizeof(pow(3, 2)));           //���Ϊ8��˵��pow�����ķ���ֵ��double����
////	printf("%f", pow(3, 2));                //���棺��printf��: ��ʽ�ַ�����%d����Ҫ���͡�int���Ĳ��������ɱ���� 1 ӵ�������͡�double��
////	return 0;
////}
//
////����������
////#include<stdio.h>
////#include<math.h>
////int main()
////{
////	double r = 0;
////	double V = 0;
////	double pai = 3.14;
////	scanf("%lf", &r);
////	V = (4.0 / 3.0) * pai * (pow(r, 3));
////	printf("%.2lf", V);
////	return 0;
////}
////
////
////
//////1.3 16 �����߶εĳ���
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	float Xa, Ya, Xb, Yb;
////	float pow_X, pow_Y;
////	float result;
////	scanf("%f %f",&Xa,&Ya);
////	scanf("%f %f",&Xb,&Yb);
////	pow_X =(Xb - Xa)* (Xb - Xa); 
////	pow_Y =(Yb - Ya)* (Yb - Ya); 
////	result = (float)sqrt(pow_X + pow_Y);
////	printf("%.3f",result);
////
////	return 0;
////}
//
////
////����2��n����
////#include <stdio.h>
////int main()
////{
////	int i = 0;
////	int result = 2;
////	int n = 0;
////	printf("������һ��������0<=n<31��");
////	scanf("%d", &n);
////	if (n == 0)
////		printf("%d", 1);
////	else if (n == 1)
////		printf("%d",2);
////	else
////	{
////		for (i = 1; i < n; i++)
////		{
////			result = result *2;
////			
////		}
////		printf("%d",result);
////	}
////
////	return 0;
////}
//
////
//////����2��n����
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	int n = 0;
////	int result = 0;
////	printf("������һ��������0<=n<31��:");
////	scanf("%d",&n);
////	result = (int)pow(2,n);
////	printf("%d",result);
////
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	int a, b, c;
////	scanf("%d %d %d",&a,&b,&c);
////	printf("%d",(a+b)*c);
////	return 0;
////}
//
////
////#include <stdio.h>
////int main()
////{
////	int a, b, result_1, result_2;          //aΪ��������bΪ���� ��result_1Ϊ�̣�result_2Ϊ����
////	scanf("%d %d",&a,&b);
////	if (b == 0)
////		printf("�������");
////	result_1 = a / b;
////	result_2 = a % b;
////	printf("%d %d", result_1,result_2);
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////	float num = 0;
////	scanf("%f",&num);
////	if (num >= 0)
////		printf("%.2f", num);
////	else
////		printf("%.2f",-num);
////	return 0;
////}
//
////
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	scanf("%d",&n);
////	if (n % 2 == 0)
////		printf("even");
////	else
////		printf("odd");
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////
////	int ch = getchar();
////	if (ch % 2 != 0)
////		printf("YES");
////	else
////		printf("NO");
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////	int num = 0;
////	scanf("%d",&num);
////	if (num <= 1000)
////	{
////		if (num >= 10 && num <= 99)
////			printf("%d", 1);
////		else
////			printf("%d", 0);
////	}
////	else
////		printf("�������");
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////
////	int mathScore, chScore;
////	scanf("%d %d",&mathScore,&chScore);
////	if (mathScore < 60 && chScore >= 60 || mathScore >= 60 && chScore < 60)
////		printf("%d", 1);
////	else
////		printf("%d",0);
////
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////	int a, b, c;
////	scanf("%d %d %d",&a,&b,&c);
////	if ((a + b) > c && (a + c) > b && (b + c) > a)
////		printf("yes");
////	else
////		printf("no");
////	return 0;
////}
//
//
////
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	int i = 1;
////	int age = 0;
////	int sum = 0;
////	scanf("%d",&n);
////	while (i <= n)
////	{
////		scanf("%d",&age);
////		sum += age;                      //ԭ����age = age + age,�������Ϊÿһ������ľ���age��ֵ���������ۼӺ��ֵ
////		i++;
////	}
////	printf("%.2f",(float)sum / n);
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	double a;
////	a = (double)35 / 2;
////	printf("%lf",a);
////	return 0;
////}
//
//
////
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	int i = 0;
////	int score = 0;
////	int max = 0;
////	scanf("%d",&n);
////	for (i = 1; i <= n; i++)
////	{
////		scanf("%d",&score);
////		if (score >= max)
////			max = score;
////		else
////			max = max;
////	}
////	printf("%d",max);
////	return 0;
////}
//
////
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	int i = 1;
////	int gold = 0, silver = 0, bronze = 0, sum = 0,sum_g = 0,sum_s = 0,sum_b = 0;
////	scanf("%d",&n);
////	for (i = 1; i <= n; i++)
////	{
////		scanf("%d %d %d",&gold,&silver,&bronze);
////		sum_g += gold;
////		sum_s += silver;
////		sum_b += bronze;
////		sum = sum_g + sum_s + sum_b;
////	}
////	printf("%d %d %d %d",sum_g,sum_s,sum_b,sum);
////	return 0;
////}
//
////
////
////#include <stdio.h>
////int main()
////{
////	int a, n;
////	int i = 1;
////	int result = 1;
////
////	scanf("%d %d",&a,&n);
////	if ((a >= -1000000 && a <= 1000000) || (n >= 1 && n <= 10000))
////	{
////		if (n == 0)
////		{
////			printf("%d", 1);
////		}
////		else
////		{
////			if (n > 0)
////			{
////				for (i = 1; i <= n; i++)
////				{
////					result = result * a;
////				}
////				printf("%d",result);
////			}
////			else                                      //����Ϊʲô�������
////			{
////
////				for (i = 1; i <= (-n); i++)
////				{
////					result = 1/(result * a);
////				}
////				printf("%f", result);
////			}
////		
////		}
////
////	}
////	else
////		printf("�������");
////	return 0;
////}
//
//
///*
//���ַ��������������Ԫ��
//ע�⣺��������������飬��Ϊֻ���������ܸ����м�ֵ�Ĵ��ڻ�С��ȥ�������һ�����֣�
//*/
////#include <stdio.h>
////int main()
////{
////	int k;  //kΪҪ���ҵ�����
////	printf("��������Ҫ���ҵ����֣�");
////	scanf("%d",&k);
////	int arr[] = {1,2,3,4,5,6,7,8,9,10};
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	int left = 0;
////	int right = sz - 1;
////	
////	while (left <= right)
////	{
////		int mid = (left + right) / 2;
////		if (arr[mid] < k)
////		{
////			left = mid + 1;
////		}
////
////		else if (arr[mid] > k)
////		{
////			right = mid - 1;
////		}
////			
////
////		else                           //ÿһ�������ü��� {} ����Ȼ�������⡣��ΪC������else�����������if������
////		{
////			printf("�ҵ��ˣ��±��ǣ�%d",mid);
////			break;
////		}
////			
////		
////	}
////	if (left > right)
////		printf("û���ҵ���");
////	return 0;
////}
////
//
//
////
//////д�������ַ������˻�ۣ����м�ۺ�
////#include <stdio.h>
////#include <stdlib.h>      //standard library ��׼��
////#include <windows.h>      
////int main()
////{
////	char test[] = "abcdefghijkllmn";
////	char arr[] = "###############";
////	int size = sizeof(test) / sizeof(test[0]);    //��������һ��Ԫ�ص����ֽ�������һ��Ԫ�ص��ֽ�������Ϊ����Ԫ�صĸ���
////	int left = 0;
////	int right = size - 1;
////	while (left <= right)
////	{
////		arr[left] = test[left];
////		arr[right] = test[right];
////		printf("%s", arr);
////		Sleep(1000);                   //�ô���ִ��ֹͣ1000ms���ټ���ִ��
////		system("cls");                 //�ô�ӡ�������������
////		left++;
////		right--;
////	}
////	
////	return 0;
////}
//
////
////#include <stdio.h>
////#include <string.h>              //�⺯��strcmp��ͷ�ļ�
////
////int main()
////{
////	int i = 1;
////	int sum = 3;
////	char password[] = "abcdefg";
////	char input[] = {0};
////	for (i = 1; i <= 3; i++)
////	{
////		printf("�������������룺");
////		scanf("%s", input);
////		if (strcmp(input, password) == 0)            //�ж������ַ����Ƿ���ȣ�Ҫ�ÿ⺯��strcmp(),��ͷ�ļ���<string.h>
////		{
////			printf("������ȷ��");
////			break;
////		}
////
////		else if (i == 3 && strcmp(input, password) != 0)
////		{
////			printf("���ź������λ���ȫ�����꣬������󣡣���");
////		}
////		else
////		{
////			sum--;
////			printf("�������,��ʣ%d���ᣬ���ٴ����룺", sum);
////		}
////		
////	}
////	return 0;;
////
////}
//
// 
//////1.5 14 �˿���������
////#include <stdio.h>
////int main()
////{
////	int x =1 , n = 1 ,i = 1;
////	double result = 0;           //�������double���͵�result������int���͵�x����˿������double�����͵�����
////	scanf("%d %d",&x,&n);
////	result = x;
////	while (i <= n)
////	{
////		result = result + ( result * (0.1 / 100));      //��ɸ����������㣬�Ͳ������С���㲻�������������
////
////		i++;
////
////	}
////	printf("%.4lf", result);
////	return 0;
////}
//
//
//
//
//
////
//////����������ķ���
////#include <stdio.h>
////#include <stdlib.h>               //srand��rand������������ͷ�ļ�����<stdlib.h>
////#include <time.h>                 //time������ͷ�ļ���<time.h>
////
////int main()
////{
////	int num = 0;
////	srand((unsigned int)time(NULL)); //srand()��Ҫ�Ĳ�����unsigned int ��time()�ķ���ֵ��time_t���ͣ�������һ��������                                 
////	for (int i = 1; i <= 10; i++)     //�����Ҫ�ã�unsigned int��������ǿ������ת��,srand()��rand()�������ӣ�ֻҪ�����ڱ䣬rand()��������������ڱ�   
////	{
////		num = rand() % 100 +1;                     //rand()���������(0~100)
////		printf("%d\n", num);
////	}
////	
////	return 0;
////}
//
////
////
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////int main()
////{
////	int i;
////	int arr[20];
////	srand((unsigned int)time(NULL));
////	for (i = 0; i < 20; i++)
////	{
////		arr[i] = rand() / 1000;
////		printf("%d\n",arr[i]);
////	}
////
////	return 0;
////}
////
//////�������Ľ���
////#include <stdio.h>
////void Swap(int* px, int* py)
////{
////	int z = 0;
////	z = *px;        //z =a
////	*px = *py;      //a = b
////	*py = z;        //b = a
////}
////int main()
////{
////
////	int a = 0, b = 0;
////	scanf("%d %d",&a,&b);
////	printf("����ǰ: a = %d , b = %d",a,b);
////	Swap(&a,&b);          //��ַ����
////	printf("������: a = %d , b = %d", a, b); 
////
////	return 0;
////} 
//////+&a	    0x0000001d25affa54 {20}	int*      //���Կ���ʵ�ʲ���a,b����ʽ����*px��*py�ĵ�ַһ����˵����ռ�Ŀռ�һ����
//////+&*px	    0x0000001d25affa54 {20}	int*
//////+&b	    0x0000001d25affa74 {10}	int*
//////+&*py	    0x0000001d25affa74 {10}	int*
////
////
////
////#include <stdio.h>
////#include "add.h"        //1.��add.h��������˺���������ֻ�а�����ͷ�ļ��Ϳ���ʹ��add����
////int add(x, y);          //2.����ͷ�ļ����ڽ�ͷ�ļ�����ĺ���������������
////extern add();           //3.��Ϊadd()����������add.c���棬��test.c�п�ͨ��extern�����������ⲿ�ĺ���
////int main()              //�������ַ�������ʵ�ֶ������ⲿ�ĺ���������
////{
////	int z = add(1, 3);
////	printf("%d",z);
////	return 0;
////}
//
//
//
//
////#include <stdio.h>
////int main()
////{
////    int M;
////    scanf("%d", &M);         //��ȡ��������ݵ�����
////    int r[10];               //���������ж��Ƿ�����������εĽ��
////
////    for (int i = 0; i < M; i++)
////    {
////        float A, B, C;
////        scanf("%f %f %f", &A, &B, &C);                         //��ȡ�����ε�������            
////        r[i] = (A + B >C && A + C > B && B + C > A);           //�������������ξ�Ϊ1������Ϊ0
////    }
////    for (int i = 0; i < M; i++)
////    {
////        if (r[i] == 1)                     //���Ϊ1����˵������������Σ����ӡYES
////            printf("YES\n");
////        else
////            printf("NO\n");               //����˵��������������Σ����ӡNO
////       
////    }
////    return 0;
////} 
////
////
////
//////+&a	0x000000e5098ff5e4 {1}	int*
//////+&b	0x000000e5098ff604 {2}	int*
//////+&c	0x000000e5098ff624 {3}	int*
////
////
//////+&a	0x000000e5098ff5e4 {2}	int*
//////+&b	0x000000e5098ff604 {2}	int*
//////+&c	0x000000e5098ff624 {2}	int*
////
////
////
////
////
//
////#include <stdio.h>
////int main()
////{
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int* p = arr;         //�൱��int*p = &arr[0];
////	printf("%d\n", *p);
////	p += 3;                  //�����ַ�Ӽ�������Ӽ�����ָ���Ԫ��λ��
////	printf("%d", *p);
////}
//
//
////#include <stdio.h>
////struct student
////{
////	char name[20];
////	char sex[10];
////	char phone[20];
////}liang = { "������","��","15975948675" };        //�ڶ���ṹ�����͵�ͬʱ����ṹ�����������
////
////
////int main()
////{
////	struct student* p = &liang;   
////	printf("%s %s %s\n", liang.name, liang.sex, liang.phone);       //�����ַ������ýṹ���Ա
////	printf("%s %s %s\n", p->name, p->sex, p->phone);
////	printf("%s %s %s\n", (*p).name, (*p).sex, (*p).phone);
////	return 0;
////}
//
////1366��ASCII������
////#include <stdio.h>
////int main()
////{
////	char arr[3][3],t;
////	for (int i = 0; i <= 2; i++)              //����forѭ����������ַ�����
////	{
////		scanf("%c%c%c",&arr[i][0],&arr[i][1],&arr[i][2]);
////		getchar();            //��������������\n,���磺����abc\n������\n��Ӱ����һ�ε����룡
////	}                   
////
////
////	for (int j = 0; j <= 2; j++)        //����ֵ�Ĺ���
////	{
////		
////		if (arr[j][0] > arr[j][1])
////		{
////			t = arr[j][0]; arr[j][0] = arr[j][1]; arr[j][1] = t;
////		}
////
////		if (arr[j][0] > arr[j][2])
////		{
////			t = arr[j][0]; arr[j][0] = arr[j][2]; arr[j][2] = t;
////		}
////
////		if (arr[j][1] > arr[j][2])
////		{
////			t = arr[j][1]; arr[j][1] = arr[j][2]; arr[j][2] = t;
////		}
////		printf("%c %c %c\n",arr[j][0],arr[j][1],arr[j][2]);
////	}
////	return 0;
////}
////
////ASCII�ַ���С��������
////#include <stdio.h>
////int main()
////{
////	char a, b, c,t;
////	while (scanf("%c%c%c",&a,&b,&c) != EOF)           //һֱ����ֱ��û�����룬����EOF
////	{
////		getchar();
////		if (a > b)
////		{
////			t = a; a = b; b = t;
////		}
////		if (a > c)
////		{
////			t = a; a = c;  c = t;
////		}
////		if (b > c)
////		{
////			t = b; b = c; c = t;
////		}
////		printf("%c %c %c\n",a,b,c);
////	}
////	return 0;
////}
////
//// �������ݼ�����ľ���
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	float x1, y1, x2, y2;
////	float dis;
////	while (scanf("%f %f %f %f", &x1, &y1, &x2, &y2) != EOF)
////	{
////		dis = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
////		printf("%.2f\n", sqrt(dis));
////	}
////	return 0;
////}
////
//////�������ݼ���������
////#include <stdio.h>
////#define PI 3.1415927
////int main()
////{
////
////	double R;
////	while (scanf("%lf", &R) != EOF)
////	{
////		double result = (4.0 / 3) * PI * (R * R * R);
////		printf("%.3lf\n",result);
////	}
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////	float num;
////	while (scanf("%f", &num) != EOF)
////	{
////		if (num >= 0)
////		{
////			printf("%.2f\n",num);
////		}
////		else
////		{
////			printf("%.2f\n",-num);
////		}
////	}
////	return 0;
////}
////
////
////#include <stdio.h>
////int main()
////{ 
////	int n, i; 
////	float num;   //aΪ�����ĸ�����bΪ�㣬cΪ����
////	int a, b, c;
////	while (scanf("%d", &n) , n > 0 && n < 100)       //���ѭ������Ҫ����ʵ���ĸ���,whileѭ��������ֻ�Ƕ��ź����
////	{    
////		a = 0, b = 0, c = 0;
////	
////		for (i = 1; i <= n; i++)
////		{
////			scanf("%f", &num);      //�ڲ�ѭ����������ʵ��
////			if (num < 0)
////			{
////				a++;
////			}
////			else if (num == 0)
////			{
////				b++;
////			}
////			else
////			{
////				c++;
////			}
////		}
////		printf("%d %d %d\n",a,b,c);      //��ӡ����
////	}
////	return 0;
////}
//
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	int n, m,i;
////	while (scanf("%d %d", &n, &m) != EOF)
////	{
////		double num = n;       //����sqrt()��������ķ���������double���ͣ������Ҫ��һ��double���͵ı������������n����ֹ��ʧС������������
////		double sum = n;     
////		for (i = 1; i <= m - 1; i++)
////		{
////			num = sqrt(num);
////			sum = sum + num;     //�����ܺ�
////		}
////		printf("%.2lf\n",sum);
////	}
////	return 0; 
////}
//
////
////#include <stdio.h>
////int main()
////{
////	int m, n;
////	int ge, shi, bai;
////	while (scanf("%d %d", &m, &n) != EOF)      //���ѭ���������뷶Χ
////	{
////		int count = 0;
////		for (int i = m; i <= n; i++)    //�ڲ�ѭ���ҳ�ˮ�ɻ���
////		{
////			ge = m % 10;
////			shi = (m / 10) % 10;
////			bai = m/ 100;
////			if ((ge * ge * ge + shi * shi * shi + bai * bai * bai) == m)
////			{
////				printf((count++ ? "% d" : "%d"), m);   //��������ĸ�ʽ����һ��countΪ0��count++Ϊ��ʹ��count����һ���ȴ�ӡ%d(ǰ���޿ո�)��Ȼ��count+1�ٴ�ӡ %d(�пո�)���������Ա�֤���һ������޿ո�
////			}
////			m++;                      //���ҵ���ÿ������1
////		}
////		if (count <= 0)                 //�����Ƿ���ֹ�ˮ�ɻ������������ӡno
////		{
////			printf("no");             //
////		} 
////		printf("\n");
////	
////    }
////	return 0;
////}
//
////������ʧ������
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	int x, y, n, count = 0;
////	while (scanf("%d %d", &x, &y), (x != 0 || y != 0))       //���ѭ�����ƶ�������
////	{
////		n = x;          //��Ϊ�·��ģ�j <= y-x+1����Ҫ��Ϊ���ݷ�Χ��������Ϊһ��ȷ�������������n�����x��ֵ�������Ͳ���������ݵ�������
////		for (int j = 1; j <= (y - x + 1); j++)        //�β�ѭ��������x��y��Χ�ڸ�������
////		{
////			for (int i = 2; i <= sqrt((n * n) + n + 41); i++)    //�ڲ�ѭ���ж��Ƿ�Ϊ����
////			{
////				if (((n * n) + n + 41) % i == 0)
////				{
////					count++;       //��Ϊ�������1
////					break;         //�ҵ�һ��������������ѭ��
////				}
////			}
////
////			n++;          //n����x��Ϊ��һ�������ڴβ�ѭ����ÿһ�ζ�Ҫ��1
////		}
////		if (count == 0)            //count = 0˵��һ��������û��
////		{
////			printf("OK\n");
////		}
////		else
////		{
////			printf("Sorry\n");
////		}
////	}
////
////	return 0;
////}
////�����ĳɹ�����1
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	int x, y, count = 0;
////	while (scanf("%d %d", &x, &y), (x != 0 || y != 0))       //���ѭ�����ƶ�������
////	{
////		count = 0;  //ÿ�ν�����Ҫ��ʼ��countΪ0
////		for (int j = x; j <= y; j++)        //�β�ѭ��������x��y��Χ�ڸ�������
////		{
////			for (int i = 2; i <= (int)sqrt((j * j) + j + 41); i++)    //�ڲ�ѭ���ж��Ƿ�Ϊ����
////			{
////				if ((j * j + j + 41) % i == 0)
////				{
////					count++;       //��Ϊ������count��1
////					break;         //�ҵ�һ��������������ѭ��
////				}
////			}
////
////		}
////		if (count == 0)            //count = 0˵��һ��������û��
////		{
////			printf("OK\n");
////		}
////		else
////		{
////			printf("Sorry\n");
////		}
////	}
////	return 0;
////}
//
////�����ĳɹ�����2
////#include <stdio.h>
////int isprime(int n)                //���庯��isprime�������ж��Ƿ�Ϊ����
////{
////	for (int i = 2; i <(n * n + n + 41); i++)       //ѭ��������
////	{
////		if ((n * n + n + 41) % i == 0)
////		{
////			return 0;     //���������ͷ���0
////		}           
////	}
////	return 1;              //���ѭ�������ˣ��Ҳ�����������������˵��������������1
////}
////
////int main()
////{
////	int x, y,count;
////	while (scanf("%d %d", &x, &y), (x != 0 || y != 0))
////	{
////		count = 0;
////			for (int j = x; j <= y; j++)     //��x��y�ķ�Χ���ж��Ƿ�Ϊ����
////			{
////				if (isprime(j) == 0)      //�в�Ϊ��������
////				{
////					count++;
////					printf("Sorry\n");
////					break;                  //��������ѭ��
////				}
////			}
////			if (count == 0)
////			{
////				printf("OK\n");
////			}
////	}
////	return 0;
////}
//
//
////�׳˵ĵݹ��㷨
////#include <stdio.h>
////int fac(int n)
////{
////	if (1 == n)
////	{
////		return 1;
////	}
////	else
////	{
////		return fac(n - 1) * n;
////	}
////}
//
////��1��+2!+3!+4+.... n!���㷨
////#include <stdio.h>
////int main()
////{
////	int n, sum = 1,result = 0;
////	scanf("%d",&n);
////	for (int i = 1; i <= n; i++)
////	{
////		sum = sum * i;           //ԭ��n��= n *��n-1����,ֻҪ�����һ�����Ľ׳ˣ���һ�����Ľ׳˾��������������һ�����Ľ׳ˣ����磺3��=3 * 2��
////		result = result + sum;
////	}
////	printf("%d",result);
////	return  0;
////}
//
//
//
////#include <stdio.h>
////int main()
////{
////	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
////
////
////	return 0;
////}
//////�����Ԫ��֮��ĵ�ַ��ֵΪ�������͵Ĵ����ȣ�������int���͵ģ����ԾͲ�4
//////0x0000008532cff918 {1}  ��ַ��Ϊ����ұ������
//////0x0000008532cff91c {2}  ���+4 ���� ������4���ڴ浥Ԫ
//////0x0000008532cff920 {3} �����+4��+4
////// --------------------
//
//
//
//////ð������
////#include <stdio.h>
////void sort(int* arr, int len)
////{
////	int i ,j ,t;
////	for ( i = 0; i < len - 1; i++)                  //���ѭ�����ưѽϴ������������������ٴ�      
////	{
////		for (j = 0; j < len - 1 - i; j++)           //�ڲ�ѭ���������������������Ĵ���
////		{
////			if (arr[j] > arr[j + 1])      //����
////			{
////				t = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = t;
////			}
////		}
////	}
////}
////
////int main()
////{
////	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
////	int len = sizeof(arr) / sizeof(arr[0]);
////	sort(arr,len);
////	for (int k = 0; k <= len - 1; k++)
////	{
////		printf("%d ",arr[k]);
////	}
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////	int i, j, m, n;
////	double sum = 0;
////	scanf("%d",&m);
////	for (j = 1; j <= m; j++)
////	{
////		scanf("%d",&n);
////		sum = 0;
////		for (i = 1; i <= n; i++)
////		{
////			if (i % 2 == 0)
////			{
////				sum += -(1.0 / i);
////			}
////			else
////			{
////				sum += 1.0 / i;
////			}
////		}
////		printf("%.2lf\n",sum);
////	}
////	return 0;
////}
//
//
//////ĸţ���г�ʱ�ĵݹ顪������Time limit error
////#include <stdio.h>
////int F(int n)
////{
////	if (n <= 3)
////	{
////		return n;
////	}
////	else
////	{
////		return F(n - 1) + F(n - 3);
////	}
////}
////int main()
////{
////	int n, result;
////	while (scanf("%d", &n), n != 0 && n < 55)
////	{
////		result = F(n);
////		printf("%d\n", result);
////	}
////	return 0;
////}
//////
//////�����ڵݹ�Ķ�̬�滮,���Ƕ�̬�滮���Խ�ֵ������
////#include <stdio.h>
////int main()
////{
////	int n;
////	int a[60];
////	a[0] = 1, a[1] = 2, a[2] = 3;
////	while (scanf("%d", &n), n != 0 )
////	{
////		for (int i = 3; i < n; i++)
////		{
////			a[i] = a[i - 1] + a[i - 3];
////		}
////		printf("%d\n",a[n - 1]);
////	}
////	return 0;
////}
//// 
//
////#include <stdio.h>
////int main()
////{
////	int n, arr[100];
////	arr[0] = 1; arr[1] = 1;
////	while (scanf("%d", &n), n != 0)
////	{
////		for (int i = 2; i < n; i++)
////		{
////			arr[i] = arr[i - 1] + arr[i - 2];
////
////		}
////		printf("%d",arr[n - 1]);
////	}
////	return 0;
////}
//
////�Ż����ð������
////#include <stdio.h>
////void bubbleSort(int* arr, int length)
////{
////	for (int i = 1; i <= length -1; i++)
////	{
////		int flag = 0;
////		for (int j = 0; j < length - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				flag = 1;
////				int temp = arr[j+1];
////				arr[j + 1] = arr[j];
////				arr[j] = temp;
////			}
////			
////		}
////	if (flag == 0)
////			{
////				break;
////			}
////	}
////
////}
////
////int main()
////{
////	int length;
////	int arr[10] = {1,4,3,5,6,7,2,10,9,8};
////	length = sizeof(arr) / sizeof(arr[0]);
////	bubbleSort(arr, length);
////	for (int k = 0; k <= length - 1;k++)
////	{
////		printf("%d ",arr[k]);
////	}
////
////
////	return 0;
////}
////
////
//////ð������
////#include <stdio.h>
////void bubble_sort(int* arr, int length)
////{
////	int temp,i,j;
////	for ( i = 1; i <= length - 1; i++)  //���ѭ������������ÿһ�˽���������һ�����������n����ֻ��Ҫ����n��1�ˣ���Ϊǰ���n - 1���������һ���Զ��ͻ��ź�
////	{
////		for ( j = 0; j < length - i; j++)    //�ڲ���ƽ����Ĵ�������i = 1ʱҪ����n - 1�Σ�i= 2ʱҪ����n - 2�Σ��Դ����ơ�
////		{
////			if (arr[j] > arr[j + 1])      //�������� ���� ���������ڵ����ϴ���Ǹ������
////			{
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////			}
////
////		}
////
////	}
////}
////
////int main()
////{
////	int length;
////	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
////	length = sizeof(arr) / sizeof(arr[0]);
////	bubble_sort(arr, length);
////	for (int k = 0; k <= length - 1; k++)
////	{
////		printf("%d ",arr[k]);
////	}
////
////	return 0;
////
////}
////#include <stdio.h>
////void bubble_sort(int* arr, int length)        //ð������
////{
////	int j, k,temp;
////	for (j = 1; j <= length -1 ; j++)
////	{
////		int flag = 0;
////		for (k = 0; k < (length - j); k++)
////		{
////			if (arr[k] > arr[k + 1])
////			{
////				flag = 1;
////				temp = arr[k];
////				arr[k] = arr[k + 1];
////				arr[k + 1] = temp;
////			}
////		}
////		if (flag == 0)
////		{
////			break;
////		}
////	}
////}
////
////int main()
////{
////	int n, m, i;
////	int arr[100];
////	while (scanf("%d %d", &n, &m), (n != 0 || m != 0))
////	{
////		for (i = 0; i < n; i++)
////		{
////			scanf("%d", &arr[i]);
////		}
////		arr[n] = m;      //����m��������
////		bubble_sort(arr, n + 1);
////		for (int t = 0; t < n; t++)    
////		{
////			printf("%d ", arr[t]);       //��ӡ�ܳ��� - 1��Ԫ�أ����һ�����ֿ���ӡ����ֹ��һ���ո�
////		}
////		printf("%d",arr[n]);             //��ֹ�����һ���������ʱ���ӡһ���ո�
////		printf("\n");
////	}
////	return 0;
////}
////
////	
//
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	int n,len;
////	char arr[51];
//	//while (scanf("%d", &n) != EOF)
////	{
////		getchar();               //������������ֹ�����n��gets������ȡ
////		for (int i = 1; i <= n; i++)
////		{
////			gets(arr);                     //����ʱ�����ո�ֹͣ��ȡ���룬��Ҫ��scanf()
////			len = (int)strlen(arr);
////			int flag = 0;                 //������־
////			for (int k = 0; k < len; k++)          //ѭ�����������ַ���
////			{
////				if ((arr[0] >= 65 && arr[0] <= 90 || arr[0] >= 97 && arr[0] <= 122) || (arr[0] == 95))           //��һ���������ֲ��ܽ�������Ϊ��ĸ���ַ���
////				{
////
////					if ((arr[k] >= 48 && arr[k] <= 57) || (arr[k] >= 65 && arr[k] <= 90) || (arr[k] >= 97 && arr[k] <= 122) || (arr[k] == 95)) //��ĸ�����֣��»��ߡ�ע��ASCII����Сд��ĸ�ʹ�д��ĸ֮�䲢���������ŵģ���z��A֮�仹��6�������ַ�
////					{
////						flag = 1;
////
////					}
////					else
////					{
////						flag = 0;               //���ҵ�һ���ַ�������Ҫ��ģ���flag��־��Ϊ0�����������˳�ѭ������ֹ�ַ�������������Ҫ����ֱ�Ϊ1.���磺ff  ai_2
////						break;
////					}
////				}
////				else
////				{
////					flag = 0;
////					break;                     //��һ��Ϊ���������˳�ѭ����flag��Ϊ0
////				}
////			}
////			if (flag == 1)
////			{
////				printf("yes\n");
////			}
////			else
////			{
////				printf("no\n");
////			}
////		}
////	}
////	return 0;
////}
//
//////ʮ��������ת��������
////#include <stdio.h>
////int main()
////{
////
////	int N, R, r, count = 0;
////	while (scanf("%d %d", &N, &R) != EOF)
////	{
////		count = 0;
////		int arr[100];
////		if (N < 0)
////		{
////			N = -N;
////			printf("-");
////		}
////		for (int i = 0; 1 ; i++)
////		{
////			count++;
////			r = N % R;
////			arr[i] = r;
////			N = N / R;
////			if (N == 0)
////			{
////				break;
////			}
////		}
////		for (int k = count - 1; k >= 0; k--)
////		{
////			if (arr[k] == 10)
////			{
////				printf("%c", 'A');
////			}
////			else if (arr[k] == 11)
////			{
////				printf("%c",'B');
////			}
////			else if (arr[k] == 12)
////			{
////				printf("%c", 'C');
////			}
////			else if (arr[k] == 13)
////			{
////				printf("%c", 'D');
////			}
////			else if (arr[k] == 14)
////			{
////				printf("%c", 'E');
////			}
////			else if (arr[k] == 15)
////			{
////				printf("%c", 'F');
////			}
////			else
////			{
////				printf("%d",arr[k]);
////			}
////
////		}
////		printf("\n");
////	}
////	return 0;
////}
//
//////ѡ������
////#include <stdio.h>
////void select_sort(int* arr, int length)      //����ѡ��������
////{
////	int i, k, j, temp;
////	for (i = 0; i < length - 1; i++)         //���ѭ������������һ��ֻ�ܽ���һ��ѭ���е�һ����С�����ŵ���ǰ�棡
////	{
////		k = i;                                 //��ʼ����k���Ϊi��λ��
////		for (j = i + 1; j < length; j++)             //�ڲ�ѭ��������һ����Ѱ�ҵ���Сֵ�Ĵ�����j < length��ʾjÿ�ζ�Ҫ��������ĩβ
////		{
////			if (arr[j] < arr[k])
////			{
////				k = j;                      //�����������ǰ���С�������k��ֵ����kָ��j
////			}
////		}
////		temp = arr[i];                    //��k���ձ�ǵĵط�����һ���еĽ�Сֵ�������ȿ�ʼ��i���л���
////		arr[i] = arr[k];
////		arr[k] = temp;
////	}
////	for (int n = 0; n < length - 1; n++)
////	{
////		printf("%d ", arr[n]);         //��ӡǰlength - 1λ
////	}
////	printf("%d", arr[length - 1]);     //�ֿ���ӡ���һλ����ֹ���һ����ӡʱ��һ���ո�
////}
////int main()
////{
////	
////	int arr[10] = {7,8,1,4,3,2,5,9,10,6};
////	int length = sizeof(arr) / sizeof(arr[0]); 
////	select_sort(arr,length);           //���ú���select_sort()
////	return 0;
////}
//
//
//	//#include <stdio.h>
//	//#include <string.h>
//	//int main()
//	//{
//	//	char arr[100];
//	//	int n,length,countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
//	//	scanf("%d",&n);
//	//	getchar();             //������������ֹ���������n���·���gets()������ȡ����������arr������
//	//	for (int i = 1; i <= n; i++)
//	//	{
//	//		countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;      //ÿһ�ν������ѭ����Ҫ���½���������Ϊ0
//	//		gets(arr);                      //���Ի�ȡ�пո��ַ�����ȫ���ַ������������ո����¼ȡ
//	//		length = (int)strlen(arr);   
//	//		for (int j = 0; j < length; j++)
//	//		{
//	//			if (arr[j] == 'a')
//	//			{
//	//				countA++;
//	//			}
//	//			else if (arr[j] == 'e')
//	//			{
//	//				countE++;
//	//			}
//	//			else if (arr[j] == 'i')
//	//			{
//	//				countI++;
//	//			}
//	//			else if (arr[j] == 'o')
//	//			{
//	//				countO++;
//	//			}
//	//			else if (arr[j] == 'u')
//	//			{
//	//				countU++;
//	//			}
//	//		}
//	//		printf("a:%d\n",countA);
//	//		printf("e:%d\n",countE);
//	//		printf("i:%d\n",countI);
//	//		printf("o:%d\n",countO);
//	//		printf("u:%d",countU);
//	//		if (i < n)                //���һ�����벻��ӡ��һ������
//	//		{
//	//			printf("\n\n");
//	//		}
//	//	}
//	//	return 0;
//	//}
//
//
//
//
//////A + B
////#include <stdio.h>
////int main()
////{
////	int N,AH, AM, AS, BH, BM, BS,sumH,sumM,sumS;
////	scanf("%d",&N);
////	for (int i = 1; i <= N; i++)
////	{
////		sumH = 0, sumM = 0, sumS = 0;
////		scanf("%d %d %d %d %d %d", &AH, &AM, &AS, &BH, &BM, &BS);
////		sumH = AH + BH;
////		sumM = AM + BM;
////		if (sumM >= 60)
////		{
////			sumH++;
////			sumM -= 60;
////		}
////		sumS = AS + BS;
////		if (sumS >= 60)
////		{
////			sumM++;
////			sumS -= 60;
////		}
////		printf("%d %d %d", sumH, sumM, sumS);
////		if (i < N)
////		{
////			printf("\n");
////		}
////	}
////	return 0;
////}
//
//////��������
////#include <stdio.h>
////void insert_sort(int* arr, int length)
////{
////	int i, j,temp;
////	for (i = 1; i < length; i++)        
////	{
////		for (j = i; j >= 1; j--)
////		{
////			if (arr[j] < arr[j - 1])
////			{
////				temp = arr[j];
////				arr[j] = arr[j - 1];
////				arr[j - 1] = temp;
////			}
////			else
////			{
////				break;            //��Ϊǰ���ÿһ��ѭ�����ڹ����������У�������������Ҫ�������������ǰ�����һ������˵������ǰ�������е���������Ҫ����˿�����ǰ����ѭ����   
////			}
////		}
////	}
////}
////
////int main()
////{
////	int arr[10] = { 1,2,3,6,7,5,4,8,10,9 };
////	int length = sizeof(arr) / sizeof(arr[0]);
////	insert_sort(arr,length);
////	for (int k = 0; k < length; k++)
////	{
////		printf("%d", arr[k]);
////		if (k < length - 1)
////		{
////			printf(" ");
////		}
////	}
////
////	return 0;
////}
//
////A - B��ʧ�ܰ���
////#include <stdio.h>
////int main()
////{
////	int n, m, count,flag,length ;
////	int a[100], b[100], ret[100];
////	while (scanf("%d %d", &n, &m), (n != 0 || m != 0))
////	{
////		//����
////		count = 0;
////		for (int i = 0; i < n; i++)
////		{
////			scanf("%d", &a[i]);
////		}
////		for (int k = 0; k < m; k++)
////		{
////			scanf("%d", &b[k]);
////		}
////		//�ж�
////		for (int j = 0; j < n; j++)
////		{
////			flag = 1;
////			for (int o = 0; o < m; o++)   
////			{
////
////				if (a[j] == b[o])         //��A������B��
////				{
////					flag = 0;
////				}
////			}
////			if (flag == 1)              //��A�ڶ�����B��
////			{
////				ret[j] = a[j];
////				count++;
////			}
////		}
////		length = sizeof(ret) / sizeof(ret[0]);
////		//��������
////		for (int h = 1; h < length; h++)
////		{
////			for (int g = h; g >= 1; g--)
////			{
////				if (ret[g] < ret[g - 1])
////				{
////					int temp = ret[g];
////					ret[g] = ret[g - 1];
////					ret[g - 1] = temp;
////				}
////			}
////		}
////		if (count > 0)
////		{
////			for (int f = 0; f < length; f++)
////			{
////				printf("%d ", ret[f]);
////			}
////		}
////		else
////		{
////			printf("NULL");
////		}
////	}
////	return 0;
////}
//
////
//////�ж����õ������Ƿ�����Ҫ��
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	int M, count, sum, total, all,length;
////	char arr[50];
////	scanf("%d",&M);
////	getchar();                          //������������ֹǰ�������M�������gets()������ȡ��
////	for (int i = 1; i <= M; i++)        //����Ĵ���
////	{
////		count = 0, sum = 0, total = 0, all = 0;
////		gets(arr);                         //����gets()��������ո�
////		length = strlen(arr); 
////		if (length >= 8 && length <= 16)
////		{
////			for (int j = 0; j < length; j++)
////			{
////				if (arr[j] >= 'A' && arr[j] <= 'Z')
////				{
////					count = 1;
////				}
////				if (arr[j] >= 'a' && arr[j] <= 'z')
////				{
////					sum = 1;
////				}
////				if (arr[j] >= '0' && arr[j] <= '9')
////				{
////					total = 1;
////				}
////				if (arr[j] == '~' || arr[j] == '!' || arr[j] == '@' || arr[j] == '#' || arr[j] == '$' || arr[j] == '%' || arr[j] == '^')
////				{
////					all = 1;
////				}
////
////			}
////			if ((count + sum + total + all) >= 3)
////			{
////				printf("YES");
////			}
////			else
////			{
////				printf("NO");
////			}
////			if (i < M)
////			{
////				printf("\n");
////			}
////
////		}
////		else
////		{
////			printf("NO");
////			if (i < M)
////			{
////				printf("\n");
////			}
////		}
////
////	}
////	return 0;
////}
//
//
////ʮ����ת������
////#include <stdio.h>
////int main()
////{
////	int n, count,r;
////	int arr[100];               //���崢������������
////	while (scanf("%d", &n) != EOF)
////	{
////		count = 0;
////		for (int i = 0; n != 0; i++)
////		{
////			r = n % 2;
////			count++;            //ͳ�������ĸ���
////			arr[i] = r;         //��������
////			n = n / 2;
////		}
////
////		for (int k = count - 1; k >= 0; k--)             //�����ӡ����
////		{
////			printf("%d",arr[k]);              
////		}
////		printf("\n");
////	}
////	return 0;
////}
//
////�ֻ��̺�
////#include <stdio.h>
////int main()
////{
////	int N;
////	char arr[12];
////	scanf("%d",&N);
////	for (int i = 1; i <= N; i++)
////	{
////		scanf("%s",arr);
////		printf("%d", 6);
////		for (int k = 6; k <= 10; k++)
////		{
////			printf("%c",arr[k]);
////		}
////		if (i < N)
////		{
////			printf("\n");
////		}
////	}
////
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////	int n, m;
////	while (scanf("%d %d", &n, &m) != EOF)
////	{
////		//��ӡ����
////		printf("%c",'+');
////		for (int i = 1; i <= n; i++)
////		{
////			printf("%c",'-');
////		}
////		printf("%c",'+');
////		//��ӡ��β�����м��������
////		printf("\n");
////		for (int k = 1; k <= m; k++)
////		{
////			printf("%c",'|');
////			for (int j = 1; j <= n; j++)
////			{
////				printf(" ");
////			}
////			printf("%c",'|');
////			printf("\n");
////		}
////		//��ӡβ��
////		printf("%c", '+');
////		for (int i = 1; i <= n; i++)
////		{
////			printf("%c", '-');
////		}
////		printf("%c", '+');
////		printf("\n\n");           //ÿ�����ݺ�Ҫ��ӡһ�����У���ֹpresentation error
////	}
////	return 0;
////}
//
//
////
////#include <stdio.h>
////int main()
////{
////	char x;
////	int T,y;
////	scanf("%d",&T);
////	for (int i = 1; i <= T; i++)
////	{
////		getchar();              //�������뻺��������ֹ�ϴ�����Ļس�����'\n'���������scanf("%c",&x)������ȡ'\n'������x��ֵΪ'\n(10)',��y��ֵΪ'A',��Ϊ��ʽ���Զ��������Ϊһ�����룡
////		scanf("%c %d",&x,&y);
////		if (x >= 'A' && x <= 'Z')
////		{
////			x -= 64;
////		}
////		else if (x >= 'a' && x <= 'z')
////		{
////			x -= 96;
////			x = -x;
////		}
////		printf("%d",x + y);
////		if (i < T)
////		{
////			printf("\n");
////		}
////	}
////	
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////	int x;       
////	char y[12];    //����2\n
////	scanf("%d",&x);     //��ȡ2
////	gets(y);             //���ȴ��������룬ֱ���ڻ�������ȡ��Ϣ��������\n��getchar()�����������룬�����һ�����ַ���\0
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	int x;
////	char y;
////	scanf("%d",&x);
////	scanf("%c",&y);
////	return 0;
////}
////
////#include  <stdio.h>
////int main()
////{
////	printf("%zd\n",sizeof('j'));     //ASCII��ֵ
////	printf("%zd",sizeof(char));
////	return 0;
////}
//
////c������ҵת������
//#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int main()
////{
////	int i, j, k, x1, x2, x3, y1, y2, y3;
////	scanf("%d %d %d", &i, &j, &k);
////	x1 = i % 7, x2 = j % 7, x3 = k % 7;
////	y1 = i / 7, y2 = j / 7, y3 = k / 7;
////	if ( ( y1 == y2 && (x1 - x2 == 1 || x1 - x2 == -1) && x2 == x3 && (y3 - y2 == 1 || y3 - y2 == -1) )  ||  ( x1 == x2 && (y1 - y2 == 1 || y1 - y2 == -1) && y2 == y3 && (x3 - x2 == 1 || x3 - x2 == -1 ) ) )  //�ж����ڵ�����
////	{
////		if (y1 == y2)                //��������ͬ
////		{
////			if (x2 > x1)
////			{
////				if (y3 > y2)
////				{
////					printf("����ת��"); 
////				}
////				else
////				{
////					printf("����ת��");
////				}
////			}
////			else
////			{
////				if (y3 > y2)
////				{
////					printf("����ת��");
////				}
////				else
////				{
////					printf("����ת��");
////				}
////			}
////
////		}
////
////		if (x1 == x2)                    //��������ͬ
////		{
////
////			if (y2 > y1)
////			{
////				if (x3 > x2)
////				{
////					printf("�϶�ת��");
////				}
////				else
////				{
////					printf("����ת��");
////				}
////			}
////			else
////			{
////				if (x3 > x2)
////				{
////					printf("����ת��");
////				}
////				else
////				{
////					printf("����ת��");
////				}
////			}
////
////		}
////	}
////
////	else
////	{
////		printf("������ת��");
////	}
////
////	return 0;
////}
//
////��ҵע�Ͱ�
////#include <stdio.h>
////int main()
////{
////	int i, j, k, x1, x2, x3, y1, y2, y3;
////	scanf("%d %d %d", &i, &j, &k);
////	x1 = i % 7, x2 = j % 7, x3 = k % 7;
////	y1 = i / 7, y2 = j / 7, y3 = k / 7;
////	if ((y1 == y2 && (x1 - x2 == 1 || x1 - x2 == -1) && x2 == x3 && (y3 - y2 == 1 || y3 - y2 == -1)) || (x1 == x2 && (y1 - y2 == 1 || y1 - y2 == -1) && y2 == y3 && (x3 - x2 == 1 || x3 - x2 == -1)))        //�ж��Ƿ��ܹ�����ת�������
////	{
////		if (y1 == y2)                //��������ͬ��Ϊ������ת��
////		{
////			if (x2 > x1)            //��һ��Ϊ��ת��
////			{
////				if (y3 > y2)       //�ڶ���Ϊ��ת��
////				{
////					printf("����ת��");
////				}
////				else
////				{
////					printf("����ת��");
////				}
////			}
////			else                  //��һ��Ϊ��ת��
////			{
////				if (y3 > y2)
////				{
////					printf("����ת��");
////				}
////				else
////				{
////					printf("����ת��");
////				}
////			}
////
////		}
////
////		if (x1 == x2)                    //��������ͬ��Ϊ�ϻ�ת��
////		{
////
////			if (y2 > y1)               //��һ��Ϊ��ת��
////			{
////				if (x3 > x2)
////				{
////					printf("�϶�ת��");
////				}
////				else
////				{
////					printf("����ת��");
////				}
////			}
////			else                        //��һ��Ϊ��ת��
////			{
////				if (x3 > x2)         //�ڶ���Ϊ��ת��
////				{
////					printf("����ת��");
////				}
////				else
////				{
////					printf("����ת��");
////				}
////			}
////
////		}
////	}
////
////	else
////	{
////		printf("������ת��");
////	}
////
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	int n;
////	long long arr[100];
////	arr[0] = 1, arr[1] = 2;
////		for (int i = 2; i < 50; i++)
////		{
////			arr[i] = arr[i - 1] + arr[i - 2];
////
////		}
////		while (scanf("%d", &n) != EOF)
////		{
////			printf("%lld\n",arr[n - 1]);
////		}
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////	long long a, b, c;
////	int n;
////	while (scanf("%d", &n) != EOF)
////	{
////		a = 1;
////		b = 2;
////		if (n <= 2)
////		{
////			printf("%d\n", n);
////		}
////		else
////		{
////			for (int i = 2; i < n; i++)
////			{
////				c = a + b;
////				a = b;
////				b = c;
////			}
////			printf("%lld\n", c);
////		}
////	}
////	return 0;
////}
//
////long long fun(int x)
////{
////	if (x <= 2)
////	{
////		return x;
////	}
////	else
////	{
////		return fun(x - 1) + fun(x - 2);
////	}
////}
////#include <stdio.h>
////int main()
////{
////	int n;
////	long long ret;
////	while (scanf("%d", &n) != EOF)
////	{ 
////		ret = fun(n);
////		printf("%lld\n",ret); 
////	}
////	return 0;
////}
//
//
////���Ĵ�����
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	int n, flag, length;
////	char str[32];
////	scanf("%d", &n);
////	getchar();                 //���������Ļس�������ֹgets�����������롣
////	for (int k = 1; k <= n; k++)
////	{
////		flag = 0;      //���������־��������ʱflagΪ1������Ϊ0
////		gets(str);
////		length = strlen(str);
////		if (length == 1)                        //Ҫ�ر�ע�⣬�������ʱֻһ���ַ�ʱҲ�ǻ�������
////		{
////			flag = 1;
////		}
////		for (int i = 0; i <= length / 2 - 1; i++)          //�����һ���ַ�����ԳƵ�һ���ַ����жԱȡ������ַ����ĳ�������������ż������Ҫ�±�ķ�Χ����length / 2 - 1����Ϊ����ʱ�м���Ǹ�����Ҫ�Ƚϡ�
////		{
////			if (str[i] == str[length - i - 1])          //�����һ���ַ�����ԳƵ�һ���ַ����жԱ�
////			{
////				flag = 1;
////			}
////			else
////			{
////				flag = 0;              //�ҵ�һ���ַ�����ȣ�˵�����ǻ�������ֱ�ӽ���ѭ�����ҽ�flag����Ϊ0
////				break;
////			}
////		}
////		if (flag == 1)
////		{
////			printf("yes");
////		}
////		else
////		{
////			printf("no");
////		}
////		if (k < n)
////		{
////			printf("\n");
////		}
////	}
////	return 0;
////}
//
////
////
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	int n, flag, length;
////	char str[32];
////	scanf("%d", &n);
////	getchar();
////	for (int k = 1; k <= n; k++)
////	{
////		flag = 0;
////		gets(str);
////		if ((int)strlen(str) == 1)
////		{
////			flag = 1;
////		}
////		for (int i = 0; i <= (int)strlen(str) / 2 - 1; i++)              //strlen(str) / 2 - 1��strlen(str)������������ʱ,Ҫ��������ת��(int)strlen(str)
////		{
////			if (str[i] == str[(int)strlen(str) - i - 1])
////			{
////				flag = 1;
////			}
////			else
////			{
////				flag = 0;
////				break;
////			}
////		}
////		if (flag == 1)
////		{
////			printf("yes");
////		}
////		else
////		{
////			printf("no");
////		}
////		if (k < n)
////		{
////			printf("\n");
////		}
////	}
////	return 0;
////}
//
//
////////Ӣ�ľ�������ĸ��д
////#include <stdio.h>
////int main()
////{
////	int i;
////	char str[101];
////	while (gets(str) != NULL)
////	{
////		if (str[0] >= 'a' && str[0] <= 'z')     //�жϵ�һλ�Ƿ�Ҫ��д
////		{
////			str[0] -= 32;
////		}
////		for (i = 1; str[i] != '\0'; i++)// ��һλ�Ժ� ,�ո��ĵ�һ����ĸ��д 
////		{
////			if ( str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
////			{
////				str[i + 1] -= 32;
////			}
////		}
////		puts(str);
////	}
////	return 0;
////}
//
////
////#include <stdio.h>
////int main()
////{
////	int n = 0,count = 0,i = 0,k = 0;
////	char str[201];
////	scanf("%d",&n);
////	getchar();          //������������Ļس�������ֹ�����gets()�����س���������,��������Ľ��Ϊһ�����ַ�����\0��
////	for (i = 1; i <= n; i++)
////	{
////		count = 0;
////		fgets(str,201,stdin);  //�����ַ���
////		for (k = 0; str[k] != '\0'; k++)
////		{
////			if (str[k] < 0 )      //��char���Ͳ鿴�����ֵ�ASCIIֵС��0
////			{
////				count++;            //һ������ռ�������ֽڣ����һ�����ֻ�count��2
////			}
////		}
////		printf("%d",count / 2);        //���ָ���Ҫ�������
////		if (i < n)
////		{
////			printf("\n");
////		}
////	}
////	return 0;
////}
////
//////��ԭ������ĸ������ֲ���̬�滮��
////#include <stdio.h>
////int main()
////{
////	int arr[30];
////	int N = 0, a = 0,i,j;
////	arr[0] = 4;
////	scanf("%d",&N);
////	for (i = 1; i <= N; i++)
////	{
////		scanf("%d", &a);
////		for (j = 1; j < a; j++)
////		{
////			arr[j] = (arr[j - 1] - 1) * 2;
////		}
////		printf("%d",arr[a - 1]);
////		if (i < N)
////		{
////			printf("\n");
////		}
////	}
////	return 0;
////}
//
//////��ԭ������ĸ��������嶯̬�滮��
////#include <stdio.h>
////int main()
////{
////	int arr[30];
////	int N = 0, a = 0, i, j;
////	arr[0] = 4;
////	for (j = 1; j < 30; j++)
////	{
////		arr[j] = (arr[j - 1] - 1) * 2;        //�������ĿҪ���30����
////	}
////	scanf("%d", &N);
////	for (i = 1; i <= N; i++)
////	{
////		scanf("%d", &a);             //���뾭�����շ�վ�ĸ��������ɵõ���
////		printf("%d",arr[a - 1]);
////		if (i < N)
////		{
////			printf("\n");
////		}
////	}
////	return 0;
////}
//
//
//
//#include <stdio.h>
//int main()
//{
//	float arr[20];
//	int C = 0, n = 0, i = 0, j = 0;
//	arr[0] = 0.5;
//	for (j = 1; j < 20; j++)
//	{
//		arr[j] = arr[j - 1] * (j + 1) / (j + 2);
//	}
//
//	scanf("%d",&C);
//	for (i = 1; i <= C; i++)
//	{
//		scanf("%d", &n);
//		printf("%.2f",arr[n - 2] * 100);
//		printf("%c",'%');
//		if (i < C)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int T, A, B,i = 0,ret;
//	scanf("%d",&T);
//	for (i = 1; i <= T; i++)
//	{
//		scanf("%d %d",&A,&B);
//		if (A >= 100)
//		{
//			A = (A / 10 % 10) * 10 + A % 10;
//		}
//		if (B >= 100)
//		{
//			B = (B / 10 % 10) * 10 + B % 10;
//		}
//		ret = A + B;
//		if (ret >= 100)
//		{
//			ret = (ret / 10 % 10) * 10 + ret % 10;
//		}
//		printf("%d",ret);
//		if (i < T)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
////#include<stdio.h>
////int main()
////{
////	int n, i;
////	long long a[51];
////	a[0] = 3;
////	a[1] = 6;
////	a[2] = 6;
////	for (i = 3; i < 50; i++)
////	{
////		a[i] = 2 * a[i - 2] + a[i - 1];
////	}
////	while (scanf("%d", &n) != EOF)
////	{
////		printf("%lld\n", a[n - 1]);
////	}
////	return 0;
////}
//
//
//#include <stdio.h>
//int main()
//{
//	int A = 0, B = 0, i = 0;
//	long long ret = 1;
//	while (scanf("%d %d", &A, &B), (A != 0 || B != 0))
//	{
//		ret = 1;
//		for (i = 1; i <= B; i++)
//		{
//			ret = ret * A;
//		}
//		printf("%lld\n",ret % 1000);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char str[101];
//	int max = 0, i = 0,j = 0;
//	while (gets(str) != '\0')
//	{
//		max = 0;
//		for (i = 0; str[i] != '\0'; i++)             
//		{
//			if (str[i] > max)                       //�ҳ����ֵ
//			{
//				max = str[i];
//			}
//		}
//		for (j = 0; str[j] != '\0'; j++)
//		{
//			printf("%c",str[j]);
//			if (str[j] == max)           
//			{
//				printf("(max)");                //���Ϊ���ֵ����������ӡmax
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0, k = 0, n = 0, m = 0, r = 0, t = 0;
//	for (i = 2; i <= 3; i++)
//	{
//		for (j = 2; j <= 3; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			}
//			for (k = 2; k <= 3; k++)
//			{
//				if ( (i + j + k) != 8)
//				{
//					continue;
//				}
//				if (k == j)
//				{
//					continue;
//				}
//				for (n = 2; n <= 3; n++)
//				{
//					if (n == k)
//					{
//						continue;
//					}
//					for (m = 2; m <= 3; m++)
//					{
//						if ((n + m) != 5)
//						{
//							continue;
//						}
//						/*if (m == n)
//						{
//							continue;
//						}*/
//						for (r = 2; r <= 3; r++)
//						{
//							if (r == m)
//							{
//								continue;
//							}
//							if (r == i)
//							{
//								continue;
//							}
//							for (t = 1; t <= 3; t++)
//							{
//								if ((t + r) != 3)
//								{
//									continue;
//								}
//								if (t == r)
//								{
//									continue;
//								}
//								if (t == m)
//								{
//									continue;
//								}
//								if (t == k)
//								{
//									continue;
//								}
//								if (t == j)
//								{
//									continue;
//								}
//								printf("%d %d %d\n", 1, i, j);
//								printf("%d %d %d\n", n, 1, k);
//								printf("%d %d %d", m, r, t);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	unsigned int array[3][3] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };
//
//	for (array[0][0] = 1; array[0][0] < 10; array[0][0]++)
//	{
//		for (array[0][1] = 1; array[0][1] < 10; array[0][1]++)
//		{
//			if (array[0][1] == array[0][0])
//				continue;
//			for (array[0][2] = 1; array[0][2] < 10; array[0][2]++)
//			{
//				if (array[0][2] == array[0][0])
//					continue;
//				if (array[0][2] == array[0][1])
//					continue;
//				if ((array[0][0] + array[0][1] + array[0][2]) != 15)
//					continue;
//
//				for (array[1][0] = 1; array[1][0] < 10; array[1][0]++)
//				{
//					if (array[1][0] == array[0][0])
//						continue;
//					if (array[1][0] == array[0][1])
//						continue;
//					if (array[1][0] == array[0][2])
//						continue;
//					for (array[1][1] = 1; array[1][1] < 10; array[1][1]++)
//					{
//						if (array[1][1] == array[0][0])
//							continue;
//						if (array[1][1] == array[0][1])
//							continue;
//						if (array[1][1] == array[0][2])
//							continue;
//						if (array[1][1] == array[1][0])
//							continue;
//						for (array[1][2] = 1; array[1][2] < 10; array[1][2]++)
//						{
//							if (array[1][2] == array[0][0])
//								continue;
//							if (array[1][2] == array[0][1])
//								continue;
//							if (array[1][2] == array[0][2])
//								continue;
//							if (array[1][2] == array[1][0])
//								continue;
//							if (array[1][2] == array[1][1])
//								continue;
//							if ((array[1][0] + array[1][1] + array[1][2]) != 15)
//								continue;
//
//							for (array[2][0] = 1; array[2][0] < 10; array[2][0]++)
//							{
//								if (array[2][0] == array[0][0])
//									continue;
//								if (array[2][0] == array[0][1])
//									continue;
//								if (array[2][0] == array[0][2])
//									continue;
//								if (array[2][0] == array[1][0])
//									continue;
//								if (array[2][0] == array[1][1])
//									continue;
//								if (array[2][0] == array[1][2])
//									continue;
//
//								if ((array[0][0] + array[1][0] + array[2][0]) != 15)
//									continue;
//
//								for (array[2][1] = 1; array[2][1] < 10; array[2][1]++)
//								{
//									if (array[2][1] == array[0][0])
//										continue;
//									if (array[2][1] == array[0][1])
//										continue;
//									if (array[2][1] == array[0][2])
//										continue;
//									if (array[2][1] == array[1][0])
//										continue;
//									if (array[2][1] == array[1][1])
//										continue;
//									if (array[2][1] == array[1][2])
//										continue;
//									if (array[2][1] == array[2][0])
//										continue;
//
//									if ((array[0][1] + array[1][1] + array[2][1]) != 15)
//										continue;
//
//									for (array[2][2] = 1; array[2][2] < 10; array[2][2]++)
//									{
//										if (array[2][2] == array[0][0])
//											continue;
//										if (array[2][2] == array[0][1])
//											continue;
//										if (array[2][2] == array[0][2])
//											continue;
//										if (array[2][2] == array[1][0])
//											continue;
//										if (array[2][2] == array[1][1])
//											continue;
//										if (array[2][2] == array[1][2])
//											continue;
//										if (array[2][2] == array[2][0])
//											continue;
//										if (array[2][2] == array[2][1])
//											continue;
//
//										if ((array[2][0] + array[2][1] + array[2][2]) != 15)
//											continue;
//
//										if ((array[0][2] + array[1][2] + array[2][2]) != 15)
//											continue;
//
//										if ((array[0][0] + array[1][1] + array[2][2]) != 15)
//											continue;
//										if ((array[0][2] + array[1][1] + array[2][0]) != 15)
//											continue;
//
//										printf("%d %d %d\n", array[0][0], array[0][1], array[0][2]);
//										printf("%d %d %d\n", array[1][0], array[1][1], array[1][2]);
//										printf("%d %d %d\n", array[2][0], array[2][1], array[2][2]);
//
//										printf("\n");
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	getchar();
//}




//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0, k = 0, n = 0, m = 0, r = 0, t = 0;
//	for (i = 2; i <= 3; i++)
//	{
//		for (j = 2; j <= 3; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			}
//			for (k = 2; k <= 3; k++)
//			{
//				if ( (i + j + k) != 8 || k == j )
//				{
//					continue;
//				}
//				for (n = 2; n <= 3; n++)
//				{
//					if (n == k)
//					{
//						continue;
//					}
//					for (m = 2; m <= 3; m++)
//					{
//						if ((n + m) != 5)
//						{
//							continue;
//						}
//						for (r = 2; r <= 3; r++)
//						{
//							if (r == m || r == i)
//							{
//								continue;
//							}
//							for (t = 1; t <= 3; t++)
//							{
//								if ((t + r) != 3 || t == j || t == k || t == m || t == r )
//								{
//									continue;
//								}
//								printf("%d %d %d\n", 1, i, j);
//								printf("%d %d %d\n", n, 1, k);
//								printf("%d %d %d", m, r, t);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2;
//	int* p = &a, * q = &b;          //ͬʱ��������ָ�����ʱ��һ��Ҫ������*
//	printf("%p %p",p,q);
//	return 0;
//}
////00000093A817F584 (16byte = 64bit)



//#include <stdio.h>
//int main()
//{
//	char c = 'a';
//	char* pc = "a";
//	printf("%s",pc);
//	
//	short num = 1;
//	short* p = &num;
//	printf("%p",p);
//
//	return 0;
//}



////��ĩ�������һ��Ĵ�
//#include <stdio.h>
//int main()
//{
//	int a[10] = { 1,1,2,2,2,3,3,4,4,5 };
//	int size = 0, sum = 0;
//	size = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] == a[i + 1])               //ǰһ�����ں�һ��
//		{
//			for (int j = i + 1; j < size - 1; j++)
//			{
//				a[j] = a[j + 1];       //���������ʼ��һ������ǰһ��
//			}
//		}
//		else if (a[i] == a[i - 1])          //��һ������ǰһ��
//		{
//			
//			for (int k = i; k < size - 1; k++)
//			{
//				a[k] = a[k + 1];
//			}
//		}
//		size = size - 1;             //�ؼ��㣬ÿ��ɾ��һ������Ҫ������ĳ��ȼ�1
//	}
//	for (int j = 0; j < size; j++)
//	{
//		printf("%d ",a[j]);
//	}
//	return 0;
//}



//#include <stdio.h>
//void main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,0};
//	int size = sizeof(a) / sizeof(a[0]);
//	int n = 0;
//	printf("����������Ҫɾ�������ֵ���ţ�");
//	scanf("%d",&n);
//	for (int i = n; i < size - 1; i++)
//	{
//		a[i] = a[i + 1];
//	}
//	size = size - 1;
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ",a[i]);
//	}
//}



////�����ַ����ĳ��� ���� �ݹ��㷨
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);     //�ݹ�ʽ��my_strlen("abcdef") =  1 + mystrlen("bcdef")
//		                                   //��ΪstrΪ�׵�ַ����˿��Է���"abcdef", ���str+1�������Ϊֻ�ܷ���"bcdef"
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d",len);
//	return 0;
//}


#include <stdio.h>
//void bubble_sort(int a[], int len)
//{
//	int temp;
//	for (int i = 1; i <= len - 1; i++)
//	{
//		for (int j = 1; j <= len - i; j++)
//		{
//			if (a[j] < a[j - 1])
//			{
//				temp = a[j - 1];
//				a[j - 1] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//
//}

void select_sort(int a[], int len)
{
	int i, j, k, temp;
	for (i = 0; i < len - 1; i++)
	{
		k = i;
		for (j = i + 1; j < len; j++)
		{
			if (a[j] < a[k])
			{
				k = j;
			}
		}
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
}


