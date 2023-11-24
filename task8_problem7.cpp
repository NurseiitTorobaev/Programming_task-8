#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
    double n, sum = 0, c = 0;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double aver = sum / n;
    int SUM = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > aver)
        {
            SUM += arr[i];
            c++;
        }
    }
    cout << SUM << " " << c;
    return 0;
}
