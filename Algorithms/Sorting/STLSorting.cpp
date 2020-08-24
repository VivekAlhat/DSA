#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

bool cmp(int x, int y){
	return x>y;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	cout<<"Elements Before Sorting: "<<endl;
	print(arr,n);

	sort(arr, arr+n);
	cout<<"Elements After Ascending Sort: "<<endl;
	print(arr,n);

	sort(arr, arr+n, cmp);
	cout<<"Elements After Descending Sort: "<<endl;
	print(arr,n);
	return 0;
}
