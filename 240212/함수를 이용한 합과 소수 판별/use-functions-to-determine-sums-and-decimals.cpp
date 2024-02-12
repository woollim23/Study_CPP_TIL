#include <iostream>
using namespace std;

bool Test2(int n)
{
    if(n < 10)
    {
        if(n % 2 == 0) 
            return true;
    }
    else if(n < 100)
    {
        if(((n / 10)+(n % 10)) % 2 == 0)
            return true;
    }

    return false;
}

bool Test(int n)
{
    if(n == 1) 
        return false;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        if(Test(i) && Test2(i))
            cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}