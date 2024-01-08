#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int main() {
    int arr[MAX];
    int n, max = 0, cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
    {
        cnt++;
        if(i == 0 || arr[i-1] != arr[i])
        {
            cnt = 0;
        }
        if(cnt > max) max = cnt;
    }

    cout << max;
    // 여기에 코드를 작성해주세요.
    return 0;
}