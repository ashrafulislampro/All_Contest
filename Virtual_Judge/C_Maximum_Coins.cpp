#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int win_coin = 0;
        int i;
        for (i = n; i > n-x; i--)
        {
            win_coin += pow(2, i);
        }
       
        for (int j = i; j >= 1; j--)
        {
            win_coin -= pow(2, j);
        }
        cout << win_coin << endl;
    }
    return 0;
}