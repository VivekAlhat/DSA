#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int arr[26] = {0};
	for(int i=0;i<s.size();++i){
		arr[s[i]-'a']++;
	}

	for(int i=0;i<26;++i){
		if(arr[i]>1){
			cout<<char(i+97)<<" "<<arr[i]<<endl;
		}
	}
	return 0;
}
