#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int m = mid - left + 1;
    int n = right - mid;
    
    vector<int> A(m), B(n);
    
    for (int i = 0; i < m; i++)
        A[i] = arr[left + i];
    for (int j = 0; j < n; j++)
        B[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    
    while (i < m && j < n) {
        if (A[i] <= B[j]) {
            arr[k++] = A[i++];
        } else {
            arr[k++] = B[j++];
        }
    }
    
    while (i < m) arr[k++] = A[i++];
    while (j < n) arr[k++] = B[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void mergeSort(vector<int>& arr) {
    mergeSort(arr, 0, arr.size() - 1);
}

void printArray(const vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original: ";
    printArray(arr);
    
    mergeSort(arr);
    
    cout << "Sorted:   ";
    printArray(arr);
    
    return 0;
}