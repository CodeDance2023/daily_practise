#include <stdio.h>
#pragma warning(disable:4996)      //���߱��������Բ���ȫ�ĺ����ľ���
//sprintf����������ʽ�����ݴ�ӡ���ַ������棨printf�Ǵ�ӡ���նˣ�
//int main()
//{
//	char str[100];
//	sprintf(str,"�绰��%s","15975948675");    
//	printf("str = %s",str);          //str = �绰��15975948675
//	return 0;
//}

//sscanf��������ȡ�ַ��������ݵ�����ط�����ֻ���ַ������棬sprntfֻ�ܴ�ӡ���ַ������棩
//int main()
//{
//	int year, month, day;
//	sscanf("2024:2:10", "%d:%d:%d", &year, &month, &day);     //��ȡ�ĸ�ʽҪ��ԭ��������һ��
//	printf("year = %d month = %d day = %d", year, month, day); //year = 2024 month = 2 day = 10
//	return 0;
//}

//%*d,���������һ���Ǳ�ʾ����ȡ�������֮�󣬲�Ҫ���������
//int main()
//{
//	int num;
//	sscanf("159759 48675","%*d %d",&num);
//	printf("num = %d",num);      //num = 48675
//	return 0;
//}
//
////%6s��������������֣���ʾ�Լ�����Ȼ�ȡ�ַ������������
//int main()
//{
//	char str[100];
//	sscanf("15975948675","%6s",str);     //str = 159759
//	printf("str = %s",str);
//	return 0;
//}

//�ַ������ϲ������������������ַ���������

//%[ -z]����ʾ��ȡ�� - z ���ո񣨿ո�Ҳ���Ի�ȡ����z�������ַ����������������Χ���ַ�������ֹͣ��ȡ��
//int main()
//{
//	char str[100];
//	sscanf("abfji jdkljfl","%[ -z]",str);    //str = abfji jdkljfl
//	printf("str = %s",str);
//	return 0;
//}


////%[^a-z],��ʾ��ȡ����a-z��Χ�ڵ������ַ����ո�ҲҪ��ȡ
//int main()
//{
//	char str[100];
//	sscanf("123 456abcidjgileopdqw","%[^a-z]",str);
//	puts(str);         //123 456
//	return 0;
//}


//%[a b],��ȡ�ַ�����a���ո�b�����������������ַ��ľ�ֹͣ��ȡ���ո�ҲҪ��ȡ
//int main()
//{
//	char str[100];
//	sscanf("b abciefjkkoofeii","%[a b]",str); 
//	puts(str);   //b ab
//
//	return 0;
//}

//%[^abc],��ʾ��ȡ����a��b��c�������ַ����ո�ҲҪ��ȡ
//int main()
//{
//	char str[100];
//	sscanf("jijg ehaabbkdi","%[^abc]",str);
//	puts(str);         //jijg eh    ���ո���a,b,c���棬Ҳ���Ի�ȡ����
//	return 0;
//}