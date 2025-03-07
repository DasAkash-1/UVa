#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, tc = 1;
    cin >> t;
    getchar();

    while (t--)
    {
        string s, s2;
        getline(cin, s);
        getline(cin, s2);

        if (s == s2)
        {
            cout << "Case " << tc++ << ": " << "Yes" << '\n';
        }
        
        else
        {
            s.erase(remove(s.begin(), s.end(), ' '), s.end());
            s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
            if (s == s2)
            {
            cout << "Case " << tc++ << ": " << "Output Format Error" << '\n';
            }
            else cout << "Case " << tc++ << ": " << "Wrong Answer" << '\n';
        }
    }
    
}