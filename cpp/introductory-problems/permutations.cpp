#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n) {
    if ((n == 2) or (n == 3)) {
        cout << "NO SOLUTION" << endl;
        return;    
    }
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    ll n;
    cin >> n;
    solve(n);
}
