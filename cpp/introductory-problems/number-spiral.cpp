#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n) {
    ll x, y;
    vector<ll> solves;
    for (int i = 0; i < n; i++) {
        cin >> y >> x;
        // ring is max(x,y)
        ll ring_id = (x > y) ? x - 1 : y - 1;
        ll ring_start = ring_id * ring_id + 1;
        ll sol;
        if (ring_id % 2 == 0) {
            sol = ring_start + (x - 1) + (ring_id - (y - 1));
        } else {
            sol = ring_start + (y - 1) + (ring_id - (x - 1));
        }
        solves.push_back(sol);
    }
    for (ll s: solves) {
        cout << s << endl;
    }
}

int main() {
    ll n;
    cin >> n;
    solve(n);
}
