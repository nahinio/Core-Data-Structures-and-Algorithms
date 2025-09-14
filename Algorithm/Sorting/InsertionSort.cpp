#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>& v){
  for(int i = 1; i < v.size(); ++i){
    int current = v[i];
    int j = i - 1;
    
    while(v[j] > current && j >= 0){
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = current;
  }
}

int main() 
{
    int n;
    cin >> n;
    
    vector<int> v;
    
    for(int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      v.push_back(temp);
    }
    
    InsertionSort(v);
    
    for(int i : v){
      cout << i << " ";
    }
    
    
    return 0;
}