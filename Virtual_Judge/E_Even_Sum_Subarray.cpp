#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, idx, sum;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        idx = 0;
        for (int i = 0; i < n; i++)
        {
            sum = 0;            
            for (int j = i, arr_size = 0; j < n; j++)
            {
                sum += vec[j];
                arr_size++;
                if (sum % 2 == 0)
                {                   
                    idx = max(arr_size, idx);
                }
            }
        }
        cout << idx << endl;
    }
    return 0;
}