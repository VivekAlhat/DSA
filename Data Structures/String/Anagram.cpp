#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s1,s2;
	cin>>s1>>s2;
	bool ans = true;
	int arr[26] = {0};
	for(int i=0;i<s1.size();++i){
		arr[s1[i]-'a'] += 1;
	}

	for(int i=0;i<s2.size();++i){
		arr[s2[i]-'a'] -= 1;
	}

	for(auto i: arr){
		if(i!=0){
			ans = false;
			break;
		}
	}

	if(ans){
		cout<<"Anagram"<<endl;
	}else{
		cout<<"Not Anagram"<<endl;
	}
	return 0;
}
