#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int main()
////{
////	int num1 = 0;
////	int num2 = 0;
////	printf("请输入您要相加的两个数字:");
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
////		printf("你好，C语言！");
////
////	}
////	else
////	{
////		printf("你好，Python!");
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
////			printf("你\n");
////		}
////		i++;
////	}
////
////	return 0;
////}
//
//
////定义函数add（）
////int add(int x, int y)
////{
////	return x + y;
////}
////
////
////int main()
////{
////	int sum = add(1, 3);         //调用函数add（）
////	printf("%d",sum);
////	return 0;
////}
////
////
//////定义一个函数
////int function()
////{
////	int i = 1;
////	while (i <= 100)
////	{
////		printf("%d:梁琦玮喜欢学C语言！\n",i);
////		i += 1;
////		
////	}
////
////}
////
////int main()
////{
////	function();          //在主函数中调用function函数
////	return 0;
////}
//
//
//
//
////#include <string.h>
////int main()
////{
////	int length = strlen("梁琦玮\0你好帅");    //调用函数strlen()来查看字符串的长度, 发现了 中文和标点符号都是“两个”长度！
////	printf("此字符串的长度是：%d",length);
////	return 0;
////}
//
//
////
////int main()
////{
////	char arr[] = "你好，C语言！";         //在此，我发现了C语言中没有字符串数据类型，也没有字符串类型的变量——即不能用变量来接收字符串。同时确定了字符串类型在C语言中表现为“字符”类型的数组——即字符类型的集合!!!!
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
////		printf("你好！");
////	}
////	else
////	{
////		printf("C语言。");
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
////		static int a = 1;           //利用static来修饰局部变量
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
////	extern add();            //声明来自外部的函数
////	int message = add(2, 3);
////	printf("%d",message);
////	return 0;
////}
//
//
//
////用C语言来写九九乘法表
////int main()
////{
////	int i = 1;
////	while (i <= 9)
////	{
////		int j = 1;
////		while (j <= i)
////		{
//////			int sum = j * i;
////			printf("%d*%d=%d\t",j,i,i*j);    //类似于Python中格式化表达式，不一定需要用变量来接收两数相乘的结果
////			j++;
////
////		}
////		i++;
////		printf("\n");       //或者printf("%c",\n);
////	} 
////	return 0;
////}
////
//
//
////
////int main()
////{
////	typedef int i;                         //类型重命名，甚至可以命名为中文。例如：typedef int 整数；typedef float 浮点数；
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
////#define NUM 100         //#defined定义标识符常量NUM
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
////#define add(x,y) ((x)+(y))                //#define定义“宏”
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
////	int* p = &a;                 //定义指针变量p，其类型为int*
////	printf("%p",p);
////	return 0;
////}
//
//
////int main()
////{
////	int a = 10;
////	int* p = &a;
////	*p = 20;           //*p为解引用字符，相当于*p=变量a，即*p：p所指向的对象
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
////	printf("请输入您的年龄：");
////	scanf("%d", &name);
////	printf("您的年龄是%d岁",name);
////	return 0;
////}
//
//
//////用循环暂时打印不出来，只能打印两层循环，不会处理空格的循环
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
////struct student                         //定义结构体类型
////{
////	char name[20];
////	char sex[10];
////	char tele[20];
////	int age;
////	
////};
////
////
////void print(struct student* ps)                  //定义函数print()，且其形式参数是一个“结构体指针变量”
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
////	struct student s = { "梁琦玮","男","15975948675",19 };            //结构体类型的初始化
////	printf("%s %s %s %d\n",s.name ,s.sex,s.tele,s.age);
////	print(&s);                             //给print（）函数传参，实际参数是指针（地址）
////	return 0;
////}
////
//
////
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	printf("%zd", sizeof(pow(3, 2)));           //结果为8，说明pow函数的返回值是double类型
////	printf("%f", pow(3, 2));                //警告：“printf”: 格式字符串“%d”需要类型“int”的参数，但可变参数 1 拥有了类型“double”
////	return 0;
////}
//
////计算球的体积
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
//////1.3 16 计算线段的长度
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
////计算2的n次幂
////#include <stdio.h>
////int main()
////{
////	int i = 0;
////	int result = 2;
////	int n = 0;
////	printf("请输入一个整数（0<=n<31）");
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
//////计算2的n次幂
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	int n = 0;
////	int result = 0;
////	printf("请输入一个整数（0<=n<31）:");
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
////	int a, b, result_1, result_2;          //a为被除数，b为除数 ，result_1为商，result_2为余数
////	scanf("%d %d",&a,&b);
////	if (b == 0)
////		printf("输入错误！");
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
////		printf("输入错误！");
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
////		sum += age;                      //原本用age = age + age,会出错，因为每一次输入的就是age的值，而不是累加后的值
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
////			else                                      //负数为什么结果错误？
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
////		printf("输入错误！");
////	return 0;
////}
//
//
///*
//二分法查找有序数组的元素
//注意：必须是有序的数组，因为只有这样才能根据中间值的大于或小于去掉数组的一半数字！
//*/
////#include <stdio.h>
////int main()
////{
////	int k;  //k为要查找的数字
////	printf("请输入您要查找的数字：");
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
////		else                           //每一个语句最好加上 {} ，不然会出现误解。因为C语言中else和离它最近的if语句搭配
////		{
////			printf("找到了，下标是：%d",mid);
////			break;
////		}
////			
////		
////	}
////	if (left > right)
////		printf("没有找到！");
////	return 0;
////}
////
//
//
////
//////写代码让字符从两端汇聚，向中间聚合
////#include <stdio.h>
////#include <stdlib.h>      //standard library 标准库
////#include <windows.h>      
////int main()
////{
////	char test[] = "abcdefghijkllmn";
////	char arr[] = "###############";
////	int size = sizeof(test) / sizeof(test[0]);    //数组里面一个元素的总字节数除于一个元素的字节数，即为数组元素的个数
////	int left = 0;
////	int right = size - 1;
////	while (left <= right)
////	{
////		arr[left] = test[left];
////		arr[right] = test[right];
////		printf("%s", arr);
////		Sleep(1000);                   //让代码执行停止1000ms，再继续执行
////		system("cls");                 //让打印出来的内容清空
////		left++;
////		right--;
////	}
////	
////	return 0;
////}
//
////
////#include <stdio.h>
////#include <string.h>              //库函数strcmp的头文件
////
////int main()
////{
////	int i = 1;
////	int sum = 3;
////	char password[] = "abcdefg";
////	char input[] = {0};
////	for (i = 1; i <= 3; i++)
////	{
////		printf("请输入您的密码：");
////		scanf("%s", input);
////		if (strcmp(input, password) == 0)            //判断两个字符串是否相等，要用库函数strcmp(),其头文件是<string.h>
////		{
////			printf("密码正确！");
////			break;
////		}
////
////		else if (i == 3 && strcmp(input, password) != 0)
////		{
////			printf("很遗憾，三次机会全部用完，密码错误！！！");
////		}
////		else
////		{
////			sum--;
////			printf("输入错误,还剩%d机会，请再次输入：", sum);
////		}
////		
////	}
////	return 0;;
////
////}
//
// 
//////1.5 14 人口增长问题
////#include <stdio.h>
////int main()
////{
////	int x =1 , n = 1 ,i = 1;
////	double result = 0;           //灵活运用double类型的result来代替int类型的x，因此可以输出double了类型的数据
////	scanf("%d %d",&x,&n);
////	result = x;
////	while (i <= n)
////	{
////		result = result + ( result * (0.1 / 100));      //编成浮点数再运算，就不会出现小数点不见的情况！！！
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
//////生成随机数的方法
////#include <stdio.h>
////#include <stdlib.h>               //srand和rand这两个函数的头文件都是<stdlib.h>
////#include <time.h>                 //time函数的头文件是<time.h>
////
////int main()
////{
////	int num = 0;
////	srand((unsigned int)time(NULL)); //srand()需要的参数是unsigned int ，time()的返回值是time_t类型（本质是一个整数）                                 
////	for (int i = 1; i <= 10; i++)     //因此需要用（unsigned int）来进行强制类型转换,srand()给rand()传输种子，只要种子在变，rand()产生的随机数就在变   
////	{
////		num = rand() % 100 +1;                     //rand()生成随机数(0~100)
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
//////两个数的交换
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
////	printf("交换前: a = %d , b = %d",a,b);
////	Swap(&a,&b);          //传址调用
////	printf("交换后: a = %d , b = %d", a, b); 
////
////	return 0;
////} 
//////+&a	    0x0000001d25affa54 {20}	int*      //可以看到实际参数a,b与形式参数*px，*py的地址一样，说明所占的空间一样！
//////+&*px	    0x0000001d25affa54 {20}	int*
//////+&b	    0x0000001d25affa74 {10}	int*
//////+&*py	    0x0000001d25affa74 {10}	int*
////
////
////
////#include <stdio.h>
////#include "add.h"        //1.在add.h里面进行了函数声明后，只有包含其头文件就可以使用add函数
////int add(x, y);          //2.包含头文件等于将头文件里面的函数声明拷贝过来
////extern add();           //3.因为add()函数定义在add.c里面，在test.c中可通过extern来声明来自外部的函数
////int main()              //以上三种方法均可实现对来自外部的函数的声明
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
////    scanf("%d", &M);         //获取输入的数据的组数
////    int r[10];               //用来储存判断是否能组成三角形的结果
////
////    for (int i = 0; i < M; i++)
////    {
////        float A, B, C;
////        scanf("%f %f %f", &A, &B, &C);                         //获取三角形的三条边            
////        r[i] = (A + B >C && A + C > B && B + C > A);           //如果能组成三角形就为1，否则为0
////    }
////    for (int i = 0; i < M; i++)
////    {
////        if (r[i] == 1)                     //如果为1，则说明能组成三角形，则打印YES
////            printf("YES\n");
////        else
////            printf("NO\n");               //否则，说明不能组成三角形，则打印NO
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
////	int* p = arr;         //相当于int*p = &arr[0];
////	printf("%d\n", *p);
////	p += 3;                  //数组地址加减，结果加减的是指向的元素位置
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
////}liang = { "梁琦玮","男","15975948675" };        //在定义结构体类型的同时定义结构体变量！！！
////
////
////int main()
////{
////	struct student* p = &liang;   
////	printf("%s %s %s\n", liang.name, liang.sex, liang.phone);       //用三种方法引用结构体成员
////	printf("%s %s %s\n", p->name, p->sex, p->phone);
////	printf("%s %s %s\n", (*p).name, (*p).sex, (*p).phone);
////	return 0;
////}
//
////1366：ASCII码排序
////#include <stdio.h>
////int main()
////{
////	char arr[3][3],t;
////	for (int i = 0; i <= 2; i++)              //利用for循环存好三组字符数据
////	{
////		scanf("%c%c%c",&arr[i][0],&arr[i][1],&arr[i][2]);
////		getchar();            //清理缓冲区，拿走\n,例如：输入abc\n，拿走\n不影响下一次的输入！
////	}                   
////
////
////	for (int j = 0; j <= 2; j++)        //交换值的过程
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
////ASCII字符从小到大排序
////#include <stdio.h>
////int main()
////{
////	char a, b, c,t;
////	while (scanf("%c%c%c",&a,&b,&c) != EOF)           //一直输入直到没有输入，触发EOF
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
//// 多组数据计算球的距离
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
//////多组数据计算球的体积
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
////	float num;   //a为负数的个数，b为零，c为正数
////	int a, b, c;
////	while (scanf("%d", &n) , n > 0 && n < 100)       //外层循环控制要输入实数的个数,while循环的条件只是逗号后面的
////	{    
////		a = 0, b = 0, c = 0;
////	
////		for (i = 1; i <= n; i++)
////		{
////			scanf("%f", &num);      //内层循环控制输入实数
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
////		printf("%d %d %d\n",a,b,c);      //打印个数
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
////		double num = n;       //由于sqrt()这个函数的返回类型是double类型，因此需要用一个double类型的变量来替代整形n，防止丢失小数点后面的数据
////		double sum = n;     
////		for (i = 1; i <= m - 1; i++)
////		{
////			num = sqrt(num);
////			sum = sum + num;     //计算总和
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
////	while (scanf("%d %d", &m, &n) != EOF)      //外层循环控制输入范围
////	{
////		int count = 0;
////		for (int i = m; i <= n; i++)    //内层循环找出水仙花数
////		{
////			ge = m % 10;
////			shi = (m / 10) % 10;
////			bai = m/ 100;
////			if ((ge * ge * ge + shi * shi * shi + bai * bai * bai) == m)
////			{
////				printf((count++ ? "% d" : "%d"), m);   //控制输出的格式，第一次count为0，count++为先使用count，第一次先打印%d(前面无空格)，然后count+1再打印 %d(有空格)，这样可以保证最后一个输出无空格
////			}
////			m++;                      //查找的数每次向后加1
////		}
////		if (count <= 0)                 //计算是否出现过水仙花数，若无则打印no
////		{
////			printf("no");             //
////		} 
////		printf("\n");
////	
////    }
////	return 0;
////}
//
////素数的失败例子
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	int x, y, n, count = 0;
////	while (scanf("%d %d", &x, &y), (x != 0 || y != 0))       //外层循环控制多组输入
////	{
////		n = x;          //因为下方的（j <= y-x+1）需要作为数据范围的总量，为一个确定的数，因此用n来替代x的值，这样就不会更改数据的总数了
////		for (int j = 1; j <= (y - x + 1); j++)        //次层循环控制在x，y范围内更换数据
////		{
////			for (int i = 2; i <= sqrt((n * n) + n + 41); i++)    //内层循环判断是否为合数
////			{
////				if (((n * n) + n + 41) % i == 0)
////				{
////					count++;       //若为合数则加1
////					break;         //找到一个因数马上跳出循环
////				}
////			}
////
////			n++;          //n即是x，为第一个数，在次层循环中每一次都要加1
////		}
////		if (count == 0)            //count = 0说明一个合数都没有
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
////素数的成功例子1
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	int x, y, count = 0;
////	while (scanf("%d %d", &x, &y), (x != 0 || y != 0))       //外层循环控制多组输入
////	{
////		count = 0;  //每次进来都要初始化count为0
////		for (int j = x; j <= y; j++)        //次层循环控制在x，y范围内更换数据
////		{
////			for (int i = 2; i <= (int)sqrt((j * j) + j + 41); i++)    //内层循环判断是否为合数
////			{
////				if ((j * j + j + 41) % i == 0)
////				{
////					count++;       //若为合数则count加1
////					break;         //找到一个因数马上跳出循环
////				}
////			}
////
////		}
////		if (count == 0)            //count = 0说明一个合数都没有
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
////素数的成功例子2
////#include <stdio.h>
////int isprime(int n)                //定义函数isprime来帮助判断是否为素数
////{
////	for (int i = 2; i <(n * n + n + 41); i++)       //循环找因子
////	{
////		if ((n * n + n + 41) % i == 0)
////		{
////			return 0;     //不是素数就返回0
////		}           
////	}
////	return 1;              //如果循环结束了，找不到因子来整除，则说明是素数，返回1
////}
////
////int main()
////{
////	int x, y,count;
////	while (scanf("%d %d", &x, &y), (x != 0 || y != 0))
////	{
////		count = 0;
////			for (int j = x; j <= y; j++)     //在x，y的范围内判断是否为素数
////			{
////				if (isprime(j) == 0)      //有不为素数的数
////				{
////					count++;
////					printf("Sorry\n");
////					break;                  //立即跳出循环
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
////阶乘的递归算法
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
////求1！+2!+3!+4+.... n!的算法
////#include <stdio.h>
////int main()
////{
////	int n, sum = 1,result = 0;
////	scanf("%d",&n);
////	for (int i = 1; i <= n; i++)
////	{
////		sum = sum * i;           //原理n！= n *（n-1）！,只要求出上一个数的阶乘，下一个数的阶乘就是这个数乘以上一个数的阶乘，比如：3！=3 * 2！
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
//////数组的元素之间的地址差值为数组类型的储存宽度，上面是int类型的，所以就差4
//////0x0000008532cff918 {1}  地址即为编号且编号连续
//////0x0000008532cff91c {2}  编号+4 —— 即跳过4个内存单元
//////0x0000008532cff920 {3} （编号+4）+4
////// --------------------
//
//
//
//////冒泡排序
////#include <stdio.h>
////void sort(int* arr, int len)
////{
////	int i ,j ,t;
////	for ( i = 0; i < len - 1; i++)                  //外层循环控制把较大的数放在数组的最后多少次      
////	{
////		for (j = 0; j < len - 1 - i; j++)           //内层循环控制相邻两个数交换的次数
////		{
////			if (arr[j] > arr[j + 1])      //交换
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
//////母牛产仔超时的递归————Time limit error
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
//////类似于递归的动态规划,但是动态规划可以将值存起来
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
////优化后的冒泡排序
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
//////冒泡排序
////#include <stdio.h>
////void bubble_sort(int* arr, int length)
////{
////	int temp,i,j;
////	for ( i = 1; i <= length - 1; i++)  //外层循环控制趟数！每一趟将该趟最大的一个数放在最后，n个数只需要进行n—1趟，因为前面的n - 1个数，最后一个自动就会排好
////	{
////		for ( j = 0; j < length - i; j++)    //内层控制交换的次数！当i = 1时要交换n - 1次，i= 2时要交换n - 2次，以此类推。
////		{
////			if (arr[j] > arr[j + 1])      //交换过程 —— 将两个相邻的数较大的那个往后放
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
////void bubble_sort(int* arr, int length)        //冒泡排序
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
////		arr[n] = m;      //插入m在数列中
////		bubble_sort(arr, n + 1);
////		for (int t = 0; t < n; t++)    
////		{
////			printf("%d ", arr[t]);       //打印总长度 - 1个元素，最后一个数分开打印，防止多一个空格
////		}
////		printf("%d",arr[n]);             //防止在最后一个数字输出时多打印一个空格
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
////		getchar();               //清理缓冲区，防止输入的n被gets函数获取
////		for (int i = 1; i <= n; i++)
////		{
////			gets(arr);                     //输入时遇到空格不停止获取输入，不要用scanf()
////			len = (int)strlen(arr);
////			int flag = 0;                 //设立标志
////			for (int k = 0; k < len; k++)          //循环遍历整个字符串
////			{
////				if ((arr[0] >= 65 && arr[0] <= 90 || arr[0] >= 97 && arr[0] <= 122) || (arr[0] == 95))           //第一个不是数字才能进来，即为字母或字符串
////				{
////
////					if ((arr[k] >= 48 && arr[k] <= 57) || (arr[k] >= 65 && arr[k] <= 90) || (arr[k] >= 97 && arr[k] <= 122) || (arr[k] == 95)) //字母，数字，下划线。注意ASCII码表的小写字母和大写字母之间并不是连续着的，从z到A之间还有6个其他字符
////					{
////						flag = 1;
////
////					}
////					else
////					{
////						flag = 0;               //若找到一个字符不满足要求的，则将flag标志改为0，并且马上退出循环，防止字符串后面又满足要求的又变为1.例如：ff  ai_2
////						break;
////					}
////				}
////				else
////				{
////					flag = 0;
////					break;                     //第一个为数字立即退出循环，flag设为0
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
//////十进制整数转其他进制
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
//////选择排序
////#include <stdio.h>
////void select_sort(int* arr, int length)      //定义选择排序函数
////{
////	int i, k, j, temp;
////	for (i = 0; i < length - 1; i++)         //外层循环控制趟数，一趟只能将这一轮循环中的一个最小的数放到最前面！
////	{
////		k = i;                                 //开始先让k标记为i的位置
////		for (j = i + 1; j < length; j++)             //内层循环控制这一趟中寻找的最小值的次数，j < length表示j每次都要来到数组末尾
////		{
////			if (arr[j] < arr[k])
////			{
////				k = j;                      //若后面的数比前面的小，则更新k的值，让k指向j
////			}
////		}
////		temp = arr[i];                    //让k最终标记的地方（这一趟中的较小值）和最先开始的i进行互换
////		arr[i] = arr[k];
////		arr[k] = temp;
////	}
////	for (int n = 0; n < length - 1; n++)
////	{
////		printf("%d ", arr[n]);         //打印前length - 1位
////	}
////	printf("%d", arr[length - 1]);     //分开打印最后一位，防止最后一个打印时多一个空格
////}
////int main()
////{
////	
////	int arr[10] = {7,8,1,4,3,2,5,9,10,6};
////	int length = sizeof(arr) / sizeof(arr[0]); 
////	select_sort(arr,length);           //调用函数select_sort()
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
//	//	getchar();             //清理缓冲区，防止上面输入的n被下方的gets()函数获取并当作数组arr的内容
//	//	for (int i = 1; i <= n; i++)
//	//	{
//	//		countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;      //每一次进入外层循环都要重新将计数器置为0
//	//		gets(arr);                      //可以获取有空格字符串的全部字符，不会遇到空格截至录取
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
//	//		if (i < n)                //最后一个输入不打印多一个换行
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
//////插入排序
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
////				break;            //因为前面的每一次循环都在构建有序序列，因此如果后面想要插进来的数比它前面的那一个数大，说明它比前面序列中的所有数都要大，因此可以提前结束循环。   
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
////A - B的失败案例
////#include <stdio.h>
////int main()
////{
////	int n, m, count,flag,length ;
////	int a[100], b[100], ret[100];
////	while (scanf("%d %d", &n, &m), (n != 0 || m != 0))
////	{
////		//输入
////		count = 0;
////		for (int i = 0; i < n; i++)
////		{
////			scanf("%d", &a[i]);
////		}
////		for (int k = 0; k < m; k++)
////		{
////			scanf("%d", &b[k]);
////		}
////		//判断
////		for (int j = 0; j < n; j++)
////		{
////			flag = 1;
////			for (int o = 0; o < m; o++)   
////			{
////
////				if (a[j] == b[o])         //在A内且在B内
////				{
////					flag = 0;
////				}
////			}
////			if (flag == 1)              //在A内而不在B内
////			{
////				ret[j] = a[j];
////				count++;
////			}
////		}
////		length = sizeof(ret) / sizeof(ret[0]);
////		//插入排序
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
//////判断设置的密码是否满足要求
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	int M, count, sum, total, all,length;
////	char arr[50];
////	scanf("%d",&M);
////	getchar();                          //清理缓冲区，防止前面输入的M被下面的gets()函数获取。
////	for (int i = 1; i <= M; i++)        //输入的次数
////	{
////		count = 0, sum = 0, total = 0, all = 0;
////		gets(arr);                         //利用gets()可以输入空格
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
////十进制转二进制
////#include <stdio.h>
////int main()
////{
////	int n, count,r;
////	int arr[100];               //定义储存余数的数组
////	while (scanf("%d", &n) != EOF)
////	{
////		count = 0;
////		for (int i = 0; n != 0; i++)
////		{
////			r = n % 2;
////			count++;            //统计余数的个数
////			arr[i] = r;         //储存余数
////			n = n / 2;
////		}
////
////		for (int k = count - 1; k >= 0; k--)             //逆序打印余数
////		{
////			printf("%d",arr[k]);              
////		}
////		printf("\n");
////	}
////	return 0;
////}
//
////手机短号
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
////		//打印首行
////		printf("%c",'+');
////		for (int i = 1; i <= n; i++)
////		{
////			printf("%c",'-');
////		}
////		printf("%c",'+');
////		//打印首尾两行中间的所有行
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
////		//打印尾行
////		printf("%c", '+');
////		for (int i = 1; i <= n; i++)
////		{
////			printf("%c", '-');
////		}
////		printf("%c", '+');
////		printf("\n\n");           //每组数据后要打印一个空行，防止presentation error
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
////		getchar();              //清理输入缓冲区，防止上次输入的回车键（'\n'）被下面的scanf("%c",&x)函数获取'\n'，导致x的值为'\n(10)',而y的值为'A',因为格式不对而输入错误，为一堆乱码！
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
////	char y[12];    //输入2\n
////	scanf("%d",&x);     //获取2
////	gets(y);             //不等待键盘输入，直接在缓冲区获取信息，遇到了\n，getchar()函数结束输入，结果是一个空字符串\0
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
////	printf("%zd\n",sizeof('j'));     //ASCII码值
////	printf("%zd",sizeof(char));
////	return 0;
////}
//
////c语言作业转向问题
//#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int main()
////{
////	int i, j, k, x1, x2, x3, y1, y2, y3;
////	scanf("%d %d %d", &i, &j, &k);
////	x1 = i % 7, x2 = j % 7, x3 = k % 7;
////	y1 = i / 7, y2 = j / 7, y3 = k / 7;
////	if ( ( y1 == y2 && (x1 - x2 == 1 || x1 - x2 == -1) && x2 == x3 && (y3 - y2 == 1 || y3 - y2 == -1) )  ||  ( x1 == x2 && (y1 - y2 == 1 || y1 - y2 == -1) && y2 == y3 && (x3 - x2 == 1 || x3 - x2 == -1 ) ) )  //判断相邻的条件
////	{
////		if (y1 == y2)                //纵坐标相同
////		{
////			if (x2 > x1)
////			{
////				if (y3 > y2)
////				{
////					printf("东南转向！"); 
////				}
////				else
////				{
////					printf("东北转向！");
////				}
////			}
////			else
////			{
////				if (y3 > y2)
////				{
////					printf("西南转向！");
////				}
////				else
////				{
////					printf("西北转向！");
////				}
////			}
////
////		}
////
////		if (x1 == x2)                    //横坐标相同
////		{
////
////			if (y2 > y1)
////			{
////				if (x3 > x2)
////				{
////					printf("南东转向！");
////				}
////				else
////				{
////					printf("南西转向！");
////				}
////			}
////			else
////			{
////				if (x3 > x2)
////				{
////					printf("北东转向！");
////				}
////				else
////				{
////					printf("北西转向！");
////				}
////			}
////
////		}
////	}
////
////	else
////	{
////		printf("不构成转向！");
////	}
////
////	return 0;
////}
//
////作业注释版
////#include <stdio.h>
////int main()
////{
////	int i, j, k, x1, x2, x3, y1, y2, y3;
////	scanf("%d %d %d", &i, &j, &k);
////	x1 = i % 7, x2 = j % 7, x3 = k % 7;
////	y1 = i / 7, y2 = j / 7, y3 = k / 7;
////	if ((y1 == y2 && (x1 - x2 == 1 || x1 - x2 == -1) && x2 == x3 && (y3 - y2 == 1 || y3 - y2 == -1)) || (x1 == x2 && (y1 - y2 == 1 || y1 - y2 == -1) && y2 == y3 && (x3 - x2 == 1 || x3 - x2 == -1)))        //判断是否能够构成转向的条件
////	{
////		if (y1 == y2)                //纵坐标相同，为东或西转向
////		{
////			if (x2 > x1)            //第一次为东转向
////			{
////				if (y3 > y2)       //第二次为南转向
////				{
////					printf("东南转向！");
////				}
////				else
////				{
////					printf("东北转向！");
////				}
////			}
////			else                  //第一次为西转向
////			{
////				if (y3 > y2)
////				{
////					printf("西南转向！");
////				}
////				else
////				{
////					printf("西北转向！");
////				}
////			}
////
////		}
////
////		if (x1 == x2)                    //横坐标相同，为南或北转向
////		{
////
////			if (y2 > y1)               //第一次为南转向
////			{
////				if (x3 > x2)
////				{
////					printf("南东转向！");
////				}
////				else
////				{
////					printf("南西转向！");
////				}
////			}
////			else                        //第一次为北转向
////			{
////				if (x3 > x2)         //第二次为东转向
////				{
////					printf("北东转向！");
////				}
////				else
////				{
////					printf("北西转向！");
////				}
////			}
////
////		}
////	}
////
////	else
////	{
////		printf("不构成转向！");
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
////回文串问题
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	int n, flag, length;
////	char str[32];
////	scanf("%d", &n);
////	getchar();                 //清理缓冲区的回车键，防止gets（）结束输入。
////	for (int k = 1; k <= n; k++)
////	{
////		flag = 0;      //设置输出标志，回文数时flag为1，否则为0
////		gets(str);
////		length = strlen(str);
////		if (length == 1)                        //要特别注意，如果输入时只一个字符时也是回文数。
////		{
////			flag = 1;
////		}
////		for (int i = 0; i <= length / 2 - 1; i++)          //正序的一个字符逆序对称的一个字符进行对比。无论字符串的长度是奇数还是偶数，需要下标的范围都是length / 2 - 1，因为奇数时中间的那个不需要比较。
////		{
////			if (str[i] == str[length - i - 1])          //正序的一个字符逆序对称的一个字符进行对比
////			{
////				flag = 1;
////			}
////			else
////			{
////				flag = 0;              //找到一对字符不相等，说明不是回文数，直接结束循环，且将flag设置为0
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
////		for (int i = 0; i <= (int)strlen(str) / 2 - 1; i++)              //strlen(str) / 2 - 1。strlen(str)参与算术运算时,要进行类型转换(int)strlen(str)
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
////////英文句子首字母大写
////#include <stdio.h>
////int main()
////{
////	int i;
////	char str[101];
////	while (gets(str) != NULL)
////	{
////		if (str[0] >= 'a' && str[0] <= 'z')     //判断第一位是否要大写
////		{
////			str[0] -= 32;
////		}
////		for (i = 1; str[i] != '\0'; i++)// 第一位以后 ,空格后的第一个字母大写 
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
////	getchar();          //清理缓冲区里面的回车键，防止下面的gets()遇到回车结束输入,导致输入的结果为一个空字符串‘\0’
////	for (i = 1; i <= n; i++)
////	{
////		count = 0;
////		fgets(str,201,stdin);  //输入字符串
////		for (k = 0; str[k] != '\0'; k++)
////		{
////			if (str[k] < 0 )      //用char类型查看，汉字的ASCII值小于0
////			{
////				count++;            //一个汉字占用两个字节，因此一个汉字会count加2
////			}
////		}
////		printf("%d",count / 2);        //汉字个数要减半输出
////		if (i < n)
////		{
////			printf("\n");
////		}
////	}
////	return 0;
////}
////
//////求原来的羊的个数（局部动态规划）
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
//////求原来的羊的个数（整体动态规划）
////#include <stdio.h>
////int main()
////{
////	int arr[30];
////	int N = 0, a = 0, i, j;
////	arr[0] = 4;
////	for (j = 1; j < 30; j++)
////	{
////		arr[j] = (arr[j - 1] - 1) * 2;        //先求出题目要求的30个答案
////	}
////	scanf("%d", &N);
////	for (i = 1; i <= N; i++)
////	{
////		scanf("%d", &a);             //输入经过的收费站的个数，即可得到答案
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
//			if (str[i] > max)                       //找出最大值
//			{
//				max = str[i];
//			}
//		}
//		for (j = 0; str[j] != '\0'; j++)
//		{
//			printf("%c",str[j]);
//			if (str[j] == max)           
//			{
//				printf("(max)");                //如果为最大值，则在其后打印max
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
//	int* p = &a, * q = &b;          //同时定义两个指针变量时，一定要用两个*
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



////期末试题最后一题的答案
//#include <stdio.h>
//int main()
//{
//	int a[10] = { 1,1,2,2,2,3,3,4,4,5 };
//	int size = 0, sum = 0;
//	size = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] == a[i + 1])               //前一个等于后一个
//		{
//			for (int j = i + 1; j < size - 1; j++)
//			{
//				a[j] = a[j + 1];       //从这个数开始后一个赋给前一个
//			}
//		}
//		else if (a[i] == a[i - 1])          //后一个等于前一个
//		{
//			
//			for (int k = i; k < size - 1; k++)
//			{
//				a[k] = a[k + 1];
//			}
//		}
//		size = size - 1;             //关键点，每次删除一个数后都要将数组的长度减1
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
//	printf("请输入你想要删除的数字的序号：");
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



////计算字符串的长度 —— 递归算法
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);     //递归式：my_strlen("abcdef") =  1 + mystrlen("bcdef")
//		                                   //因为str为首地址，因此可以访问"abcdef", 因此str+1可以理解为只能访问"bcdef"
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


