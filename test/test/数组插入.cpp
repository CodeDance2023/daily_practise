//#include <stdio.h>
//#pragma warning(disable:4996)
////思路：从数组的最后一个数开始，从后往前，前一个给后一个赋值。注意：不能从前往后，前一个给后一个赋值，那样会导致从x开始，后面的数全部变成同一个数
//int main()
//{
//	int len, x, num, i, j, a[100];
//	printf("请输入数组的长度：");
//	scanf("%d",&len);
//	printf("请输入数组的内容：");
//	for (i = 0; i < len; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("请输入要插入的位置的下标和要插入的数字：");
//	scanf("%d %d",&x,&num);
//	for (j = len - 1; j >= x; j--)
//	{
//		a[j + 1] = a[j];             //从输入的最后一个数开始，从后往前，前一个给后一个赋值，直到x
//	}
//	a[x] = num;
//	for (i = 0; i < len + 1; i++)            //len+1为插入一个数字后，数组的长度要加1
//	{
//		printf("%d ",a[i]);
//	}
//	return 0;
//}