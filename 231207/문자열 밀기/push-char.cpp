#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    s = s.substr(1) + s.substr(0, 1);

    cout << s;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}