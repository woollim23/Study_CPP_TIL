#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i > 1; i--){
        for(int j = 0; j < n-i; j++){
            cout << "  ";
        }
        for(int j = 0; j < i*2-1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            cout << "  ";
        }
        for(int j = 0; j < i*2-1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}