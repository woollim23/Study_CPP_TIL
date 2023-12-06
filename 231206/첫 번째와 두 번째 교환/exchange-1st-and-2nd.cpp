#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c;
    cin >> s;
    
    c = s[0];

    for(int i = 0; i < s.length(); i++)
    {
        if(c == s[i]) s[i] = s[1];
    }
    s[1] = c;

    cout << s;
    // 여기에 코드를 작성해주세요.
    return 0;
}