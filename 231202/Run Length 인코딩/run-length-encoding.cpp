#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int cnt = 1, res = 0;

    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != s[i+1]) res++;
    }

    cout << res * 2 << endl;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == s[i+1]) cnt++;
        else
        {
            cout << s[i] << cnt;
            cnt = 1;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}