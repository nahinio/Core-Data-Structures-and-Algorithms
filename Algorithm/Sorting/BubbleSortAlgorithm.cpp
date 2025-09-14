#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v){

    for (int step = 0; step < v.size(); ++step){
        bool swapped = false;

        for (int i = 0; i < (v.size() - step - 1); ++i){
            if (v[i] > v[i + 1]){
                swap(v[i], v[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) return;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    bubbleSort(v);

    for (int i : v){
        cout << i << " ";
    }

    return 0;
}