#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &array)
{
    int size = array.size();

    for (int step = 0; step < (size - 1); ++step)
    {
        int swapped = 0;

        for (int i = 0; i < (size - step - 1); ++i)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    bubbleSort(arr);

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}