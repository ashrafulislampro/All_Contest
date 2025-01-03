#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    int x = 0;
    while (t--)
    {
        cin >> str;
        
        if (str.find("++") != string::npos)
        {
            x++;
        }
        else if (str.find("--") != string::npos)
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}