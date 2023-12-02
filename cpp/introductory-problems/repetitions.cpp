#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(string n) {
    int max_len = 0;
    int curr_len = 0;
    char curr;
    for (char c : n) {
        if (curr_len == 0) {
            curr_len = 1;
            curr = c;
        } else {
            if (curr == c) {
                curr_len++;
            } else {
                max_len = (max_len > curr_len) ? max_len : curr_len;
                curr_len = 1;
                curr = c;
            }
        }
    }
    max_len = (max_len > curr_len) ? max_len : curr_len;
    cout << max_len << endl;
}

int main() {
    string n;
    cin >> n;
    solve(n);
}
