#include <iostream>

using namespace std;

int n, m;

void Print()
{
    cout << "1";
}

void Repeat()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            Print();
        cout << endl;
    }
}

int main() {
    cin >> n >> m;

    Repeat();

    return 0;
}