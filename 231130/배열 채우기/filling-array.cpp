#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n = 10;

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            n = i;
            break;
        }
    }

    for(int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}