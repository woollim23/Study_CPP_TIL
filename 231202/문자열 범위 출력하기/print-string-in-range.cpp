#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    getline(cin, s);

    for(int i = 2; i <= 9; i++)
    {
        cout << s[i];
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}