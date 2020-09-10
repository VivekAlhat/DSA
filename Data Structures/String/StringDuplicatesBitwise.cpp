#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	long int N = 0, X = 0;
	for (int i = 0; s[i]; ++i)
	{
		X = 1;
		X = X << (s[i] - 'a');

		if ((X & N) > 0)
		{
			cout << s[i] << endl;
		}
		else
		{
			N = X | N;
		}
	}
	return 0;
}
