#include <iostream> 
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, c = 0, b = 1;
    cin >> n >> k;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int b = i + 1; b < n; b++)
        {
            if ((arr[i] + arr[b]) % k == 0)
            {
                c++;
            }
        }
    }
    cout << c;
    return 0;
}
