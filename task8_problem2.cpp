

#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int array[100000];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        if ((array[i + 1] > 0 && array[i] > 0) || (array[i + 1] < 0 && array[i] < 0))
        {
            cout << array[i] << " " << array[i + 1] << endl;
        }
    }
}

