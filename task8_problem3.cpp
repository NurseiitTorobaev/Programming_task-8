#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
    int n;
    cin >> n;
    float arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            arr[i] *= -1;
        }
    }
    float max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << fixed << setprecision(2) << max;
}
