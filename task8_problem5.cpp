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
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            a = i;
        }
    }
    b = arr[0];
    arr[0] = min;
    arr[a] = b;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
