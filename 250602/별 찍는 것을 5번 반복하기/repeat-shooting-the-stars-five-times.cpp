#include <iostream>
using namespace std;

void PrintStar()
{
    cout << "**********" << endl;
}

void Repeat()
{
    for(int i = 0; i < 5; i++)
    {
        PrintStar();
    }
}

int main() {
    Repeat();
    return 0;
}