#include <iostream>
using namespace std;

int main() {
    char c;
    int n, cnt = 0;

    for(int i = 0; i < 3; i++){
        cin >> c >> n;
        if((c == 'Y') && (n >= 37)){
            cnt++;
        }
    }
    if(cnt >= 2){
        cout << "E";
    }
    else{
        cout << "N";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}