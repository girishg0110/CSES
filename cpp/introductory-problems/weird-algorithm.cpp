#include <bits/stdc++.h>
using namespace std;

void solve(long long n) {
    while (n > 1) {
        cout << n << " ";
        if (n % 2 == 0) n /= 2;
        else n = 3*n+1;
    }
    cout << n << endl;
}

int main() {
    long long n;
    cin >> n;
    solve(n);
}
