#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	sort(a, a + 10, greater<int>()); //降序：sort（首地址，最后一个地址的后一个地址，greater<data_type>()）;
	for (int i = 0; i < 10; ++i)     //升序：sort（首地址，最后一个地址的后一个地址）；
	{
		cout << a[i] << " ";
	}
	return 0;
}