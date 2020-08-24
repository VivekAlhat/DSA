#include <iostream>
using namespace std;

void print(int arr[], int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int n, *arr;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	cout<<"Elements Before Sorting: "<<endl;
	print(arr, n);

	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout<<"Elements After Ascending Sort: "<<endl;
	print(arr, n);

	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(arr[i]<arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout<<"Elements After Descending Sort: "<<endl;
	print(arr, n);
	return 0;
}
