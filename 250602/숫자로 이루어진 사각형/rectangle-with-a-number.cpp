#include <iostream>

using namespace std;

int N;

void Print()
{
    int num = 1;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << num << " ";
            num++;
            if(num == 10)
                num = 1;
        }
        cout << endl;
    }
}

int main() {
    cin >> N;

    Print();

    return 0;
}