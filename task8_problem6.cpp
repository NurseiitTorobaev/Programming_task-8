#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
    int n, a = 0, b = 0;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
            a = i;
        }
    }
    b = arr[n - 1];
    arr[n - 1] = max;
    arr[a] = b;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
