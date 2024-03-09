//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i;
//	char str[1010] = "0";
//	while (gets(str)) //gets()函数读取失败返回NULL( (*void)0 ),相当于停止获取
//	{
//		for (i = 0; str[i] != '\0';)
//		{
//			if (str[i] == 'y' && str[i + 1] == 'o' && str[i + 2] == 'u') 
//			{
//				printf("%s","we");
//				i += 3; //跳过you
//			}
//			else
//			{
//				putchar(str[i]);
//				i += 1;  //下一个字符
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}