#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if((a >= 3) && (a <= 5)){
        cout << "Spring";
    }
    else if((a >= 6) && (a <= 8)){
        cout << "Summer";
    }
    else if((a >= 9) && (a <= 11)){
        cout << "Fall";
    }
    else if((a >= 1) || (a == 12)){
        cout << "Winter";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}