#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, tc = 1;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int sum = 0;
        for (int i = a; i <= b; i++)
        {
            if(i % 2 != 0) sum += i;
        }
        cout << "Case " << tc++ << ": " << sum << '\n';
    }
    return 0;
}