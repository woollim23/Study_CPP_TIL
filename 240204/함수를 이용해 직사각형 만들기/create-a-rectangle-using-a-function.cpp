#include <iostream>
using namespace std;

void Print(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << 1;
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    Print(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}