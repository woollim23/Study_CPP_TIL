#include <iostream>
using namespace std;

int Test(int n, int cnt)
{
    if(n == 1)
        return cnt;

    cnt++;

    if(n % 2 == 0)
        n /= 2;
    else
        n = n * 3 + 1;

    return Test(n, cnt);
}

int main() {
    int n, cnt = 0;
    cin >> n;

    cout << Test(n, cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}