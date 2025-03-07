#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    getchar();

    while (t--)
    {
        string s, t, s1, t1;
        getline(cin, s);
        getline(cin, t);

        string vow = {'a', 'e', 'i', 'o', 'u'};

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                s1 += s[i];
            }
        }
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u')
            {
                t1 += t[i];
            }
        }

        if (s1 == t1) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
}