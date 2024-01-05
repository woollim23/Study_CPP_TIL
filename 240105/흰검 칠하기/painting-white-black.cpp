#include <iostream>
#define MAX 20000
using namespace std;
// 0 - 백지, 1 - 흰색, 2 - 검은색, 3 - 회색
int main() {
    int paper[MAX + 1] = {0, };
    int white[MAX + 1] = {0, };
    int black[MAX + 1] = {0, };
    int gray[MAX + 1] = {0, };
    int n, idx = 10000;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        char c;
        cin >> x >> c;

        if(c == 'L')
        {
            for(int j = idx; j > (idx-x); j--)
            {
                white[j]++;
                paper[j] = 1;
            }
            idx -= x;
            idx++;
        }
        else if(c == 'R')
        {
            for(int j = idx; j < (idx+x); j++)
            {
                black[j]++;
                paper[j] = 2;
            }
            idx += x;
            idx--;
        }
    }

    for(int i = 0; i <= MAX; i++)
    {
        if((white[i] >= 2) && (black[i] >= 2)) gray[i] = 3;
    }

    for(int i = 0; i <= MAX; i++)
    {
        if(gray[i] == 3) paper[i] = 3;
    }

    int w = 0, b = 0, g = 0;
    for(int i = 0; i <= MAX; i++)
    {
        if(paper[i] == 1) w++;
        else if(paper[i] == 2) b++;
        else if(paper[i] == 3) g++;
    }
    cout << w << " " << b << " " << g;
    // 여기에 코드를 작성해주세요.
    return 0;
}