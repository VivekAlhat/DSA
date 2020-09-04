#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World! I am Nova";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int words = 0, vowels = 0, consonants = 0;
    for (int i = 0; s[i]; ++i)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }

        if (s[i] == ' ' && s[i - 1] != ' ')
        {
            words++;
        }
    }
    cout << s << endl;
    cout << "Words: " << words + 1 << endl;
    cout << "Vowels: " << vowels << flush << " Consonants: " << consonants - words << endl;
    return 0;
}