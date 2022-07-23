//  1 2 3 4
//  1 2 3 4
//  1 2 3 4
//  1 2 3 4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j = 1;
    while (j <= n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << "\t";
        }
        cout << endl;
        j++;
    }
    return 0;
}