#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << "(" << i << ", " << j << ") ";
            if((i+j) % 4 == 0) cout << endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}