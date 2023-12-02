#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;

    cin >> s >> n;

    for(int i = 0; i < n; i++)
    {
        cout << s[s.length()-1-i];
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}