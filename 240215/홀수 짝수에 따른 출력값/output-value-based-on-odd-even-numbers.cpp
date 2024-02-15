#include <iostream>
using namespace std;

int Test(int n) // 짝수 함수
{
    if(n == 2)
        return 2;

    return n + Test(n-2);
}

int Test2(int n) // 홀수 함수
{
    if(n == 1)
        return 1;

     return n + Test2(n-2); 
}

int main() {
    int n;
    cin >> n;

    if(n % 2 == 0)
        cout << Test(n);
    else
        cout << Test2(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}