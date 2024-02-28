#include <iostream>
using namespace std;

int main() {
    int a1 = 11, b1 = 11, c1 = 11, sum = 0;
    int a2, b2, c2;
    cin >> a2 >> b2 >> c2;


    //15,840 + 660 + 11
    if (16511 > ((a2 * 1440) + (b2 * 60) + c2))
        cout << -1;
    else
    {

        while (true)
        {
            if (a1 == a2 && b1 == b2 && c1 == c2)
                break;

            sum++;
            c1++;
            if (c1 > 60)
            {
                b1++;
                c1 = 1;

                if (b1 > 24)
                {
                    a1++;
                    b1 = 1;
                }
            }
        }

        cout << sum;
    }
    return 0;
}