#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& v, int key){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == key){
            return i;
        }
    }
    return -1;
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

    int index = linearSearch(v, key);
    if(index != -1){
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}