#include <stdio.h>
#pragma warning(disable:4996)      //告诉编译器忽略不安全的函数的警告
//sprintf函数：将格式化内容打印到字符串里面（printf是打印到终端）
//int main()
//{
//	char str[100];
//	sprintf(str,"电话：%s","15975948675");    
//	printf("str = %s",str);          //str = 电话：15975948675
//	return 0;
//}

//sscanf函数，获取字符串的内容到任意地方（不只是字符串里面，sprntf只能打印到字符串里面）
//int main()
//{
//	int year, month, day;
//	sscanf("2024:2:10", "%d:%d:%d", &year, &month, &day);     //获取的格式要和原来的内容一样
//	printf("year = %d month = %d day = %d", year, month, day); //year = 2024 month = 2 day = 10
//	return 0;
//}

//%*d,在里面加上一颗星表示，获取这个整数之后，不要这个整数。
//int main()
//{
//	int num;
//	sscanf("159759 48675","%*d %d",&num);
//	printf("num = %d",num);      //num = 48675
//	return 0;
//}
//
////%6s，在里面加上数字，表示以几个宽度获取字符串里面的内容
//int main()
//{
//	char str[100];
//	sscanf("15975948675","%6s",str);     //str = 159759
//	printf("str = %s",str);
//	return 0;
//}

//字符串集合操作————仅限于字符串！！！

//%[ -z]，表示获取（ - z ）空格（空格也可以获取）到z的所有字符，遇到不在这个范围的字符就马上停止获取。
//int main()
//{
//	char str[100];
//	sscanf("abfji jdkljfl","%[ -z]",str);    //str = abfji jdkljfl
//	printf("str = %s",str);
//	return 0;
//}


////%[^a-z],表示获取不在a-z范围内的所有字符，空格也要获取
//int main()
//{
//	char str[100];
//	sscanf("123 456abcidjgileopdqw","%[^a-z]",str);
//	puts(str);         //123 456
//	return 0;
//}


//%[a b],获取字符串中a，空格，b，遇到不是这三个字符的就停止获取，空格也要获取
//int main()
//{
//	char str[100];
//	sscanf("b abciefjkkoofeii","%[a b]",str); 
//	puts(str);   //b ab
//
//	return 0;
//}

//%[^abc],表示获取不是a，b，c的所有字符，空格也要获取
//int main()
//{
//	char str[100];
//	sscanf("jijg ehaabbkdi","%[^abc]",str);
//	puts(str);         //jijg eh    （空格不在a,b,c里面，也可以获取到）
//	return 0;
//}