#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n) {
    // count the number of 2s and 5s across prime factorizations of {1...n}
    ll twopow = 0;
    for (ll i = 1; pow(2, i) <= n; i++) {
        twopow += n / pow(2, i); 
    }

    ll fivepow = 0;
    for (ll i = 1; pow(5, i) <= n; i++) {
        fivepow += n / pow(5, i); 
    }

    ll trailing_zeros = (fivepow < twopow) ? fivepow : twopow;
    cout << trailing_zeros << endl;
}

int main() {
    ll n;
    cin >> n;
    solve(n);
}
