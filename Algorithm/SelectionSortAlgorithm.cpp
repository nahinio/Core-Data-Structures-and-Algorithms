#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>& v){

	for (int i = 0; i < v.size(); ++i)
	{
		int smallIndex = i;

		for (int j = i + 1; j < v.size(); ++j)
		{
			if(v[j] < v[smallIndex]){
				smallIndex = j;
			}
		}

		swap(v[i], v[smallIndex]);
	}

}

int main() {
	int n;
	cin >> n;

	vector<int> v;

	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	SelectionSort(v);

	for (int i : v){
		cout << i << " ";
	}
    

    return 0;
}