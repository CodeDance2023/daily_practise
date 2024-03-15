
#include <iostream>
using namespace std;
int t,cnt;
string s;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        cnt = 0;
        for (int i = 0; i < s.size(); ++i)
        {   
            if (s[i] == 'N') cnt++;
        }
        if (cnt == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
