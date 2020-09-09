#include <bits/stdc++.h>
using namespace std;

void perm(string s, int k){
	int l = s.size();
	static int arr[10] = {0};
	static char res[10];
	if(k==l){
		cout<<res<<" ";
	}else{
		for(int i=0;i<l;++i){
			if(arr[i]==0){
				res[k] = s[i];
				arr[i] = 1;
				perm(s, k+1);
				arr[i] = 0;
			}
		}
	}
}

int main(){
	string s;
	cin>>s;
	perm(s,0);
	cout<<endl;
	return 0;
}
