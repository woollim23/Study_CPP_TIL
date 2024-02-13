#include <iostream>
using namespace std;

int main() {
    int a[100] = {};
    int n, m, sum = 0;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    while(m != 1)
    {
        sum += a[m-1];
        
        if(m % 2 == 0)
            m /= 2;
        else
            m -= 1;
    }

    cout << sum + a[m-1];
    // 여기에 코드를 작성해주세요.
    return 0;
}