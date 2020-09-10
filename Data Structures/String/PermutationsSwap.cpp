#include <bits/stdc++.h>
using namespace std;

void perm(string s, int l, int h)
{
	if (l == h)
	{
		cout << s << endl;
	}
	else
	{
		for (int i = l; i <= h; ++i)
		{
			swap(s[l], s[i]);
			perm(s, l + 1, h);
			swap(s[l], s[i]);
		}
	}
}

int main()
{
	int l, h;
	string s;
	cin >> s;
	l = 0;
	h = s.size() - 1;
	perm(s, l, h);
	return 0;
}
