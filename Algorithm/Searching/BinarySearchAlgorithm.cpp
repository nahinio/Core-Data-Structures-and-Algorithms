#include<bits/stdc++.h>
using namespace std;

int binarySearchIterative(vector<int>& v, int key){
    int left = 0, right = v.size() - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(v[mid] == key){
            return mid;
        } else if(v[mid] < key){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int binarySearchRecursive(vector<int>& v, int left, int right, int key){
    if(left > right){
        return -1;
    }
    int mid = left + (right - left) / 2;
    if(v[mid] == key){
        return mid;
    } else if(v[mid] < key){
        return binarySearchRecursive(v, mid + 1, right, key);
    } else {
        return binarySearchRecursive(v, left, mid - 1, key);
    }
}

int main(){
    int n;
    cin>>n;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        
        v.push_back(temp);
    }

    int key;
    cin >> key;

    int index = binarySearchIterative(v, key);
    if(index != -1){
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    index = binarySearchRecursive(v, 0, n - 1, key);
    if(index != -1){
        cout << "Element found at index (recursive): " << index << endl;
    } else {
        cout << "Element not found (recursive)" << endl;
    }

    return 0;
}