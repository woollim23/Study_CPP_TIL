#include <iostream>
#define MAX 1000
using namespace std;

int main() {
    int a[MAX + 1], b[MAX + 1];
    int n, m, v, t;
    cin >> n >> m;

    int time_a = 0; // a의 총 시간
    for(int i = 0; i < n; i++)
    {
        cin >> v >> t;
        time_a += t;
        for(int j = 1; j <= t; j++)
            a[j] = v * j;
    }

    int time_b = 0; // b의 총 시간
    for(int i = 0; i < m; i++)
    {
        cin >> v >> t;
        time_b += t;
        for(int j = 1; j <= t; j++)
            b[j] = v * j;
    }

    int cnt = 0;
    for(int i = 1; i <= time_a; i++)
    {
        if((a[i-1] < b[i-1]) && (a[i] >= b[i])) cnt++;
        if((a[i-1] >= b[i-1]) && (a[i] < b[i])) cnt++;
    }
    cout << cnt;
    return 0;
}