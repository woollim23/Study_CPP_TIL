#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(((i % 3) == 0) || ((i > 10) && ((((i / 10) % 3) == 0) || ((i % 10 != 0) && ((((i % 10) % 3) == 0)))))){
            cout << 0 << " ";
        }
        else{
            cout << i << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}