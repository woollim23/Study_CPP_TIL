#include <iostream>

using namespace std;

int N;

void Print()
{
    cout << "12345^&*()_";
}

void Repeat()
{
    for(int i = 0; i < N; i++)
    {
        Print();
        cout << endl;
    }
}

int main() {
    cin >> N;

    Repeat();

    return 0;
}