#include <iostream>
using namespace std;

bool Test(int y)
{
    if(y % 4 == 0)
    {
        if(y % 100 == 0)
        {
            if(y % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }

    return false;
}

int main() {
    int y;
    cin >> y;

    if(Test(y))
        cout << "true";
    else
        cout << "false";
    // 여기에 코드를 작성해주세요.
    return 0;
}