#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n) {
    ll s = 0;    
    ll prev, curr;
    cin >> prev;
    for (int i = 0; i < n - 1; i++) {
        cin >> curr;
        ll increment = (prev > curr) ? prev - curr : 0;
        s += increment;
        prev = curr + increment;
    }
    cout << s << endl;
}

int main() {
    ll n;
    cin >> n;
    solve(n);
}
