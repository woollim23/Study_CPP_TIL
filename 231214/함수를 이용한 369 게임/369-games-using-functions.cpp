#include <iostream>
using namespace std;

bool test2(int n)
{
    while(n > 0)
    {
        if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9) return true;
        n /= 10;
    }
    return false;
}

bool test1(int n)
{
    return ((n % 3 == 0) || test2(n));
}

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        if(test1(i)) cnt++;
    }

    cout << cnt;
    return 0;
}