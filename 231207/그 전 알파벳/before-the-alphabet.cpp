#include <iostream>
#include <string>
using namespace std;

int main() {
    char a;
    cin >> a;

    if(a == 'a') cout << 'z';
    else cout << (char)(a - 1);
    // 여기에 코드를 작성해주세요.
    return 0;
}