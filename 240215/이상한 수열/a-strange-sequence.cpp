#include <iostream>
using namespace std;

int arr[100] = {2, 4, };

int Test(int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return 2;

    return Test(n/3) + Test(n-1);
}

int main() { 
    int n;
    cin >> n;

    cout << Test(n-1);
    // 여기에 코드를 작성해주세요.
    return 0;
}