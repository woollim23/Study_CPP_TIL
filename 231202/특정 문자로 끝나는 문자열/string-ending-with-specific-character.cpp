#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[10];
    char c;

    for(int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }

    cin >> c;

    for(int i = 0; i < 10; i++)
    {
        if(s[i][s[i].length()-1] == c) cout << s[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}