#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n) {
    ll c = 1;
    ll mod = pow(10, 9) + 7;
    for (int i =0; i < n; i++) {
        c = (2*c) % mod;
    }
    cout << c << endl;

}

int main() {
    ll n;
    cin >> n;
    solve(n);
}
