#include <iostream>
using namespace std;

int main() {
    int arr1[10][10];
    int arr2[10][10];
    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }
    

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr1[i][j] == arr2[i][j]) cout << 0 <<  " ";
            else cout << 1 << " ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}