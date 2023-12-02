#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n) {
    ll s = n*(n+1)/2;
    ll a;
    for (int i = 0; i < n - 1; i++) {
        cin >> a;
        s -= a; 
    }
    cout << s << endl;
}

int main() {
    ll n;
    cin >> n;
    solve(n);
}
