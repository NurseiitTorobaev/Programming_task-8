#include <iostream> 
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0, c = 0;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[n - i - 1], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
