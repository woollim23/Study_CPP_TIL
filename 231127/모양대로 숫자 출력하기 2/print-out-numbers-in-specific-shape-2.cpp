#include <iostream>
using namespace std;

int main() {
    int n, cnt = 2;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << cnt << " ";
            cnt += 2;
            if(cnt > 9) cnt = 2;
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}