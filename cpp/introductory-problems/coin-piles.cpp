#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n) {
    int a, b;
    int solves[n];
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
    
        // numerators of solutions to the system of equations
            //  {2x + y = a; 2y + x = b}
        ll x = (2*a-b);
        ll y = (-a+2*b);
        
        // check if nonnegative and divisible by 3
        solves[i] = (x >= 0) and (y >= 0) and (x % 3 == 0) and (y % 3 == 0);
    }

    for (bool s : solves) {
        if (s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    ll n;
    cin >> n;
    solve(n);
}
