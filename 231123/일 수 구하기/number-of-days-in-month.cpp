#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 2){
        cout << 28;
    }
    else if((n == 4) || (n == 6) || (n == 9) || (n == 11)){
        cout << 30;
    }
    else{
        cout << 31;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}