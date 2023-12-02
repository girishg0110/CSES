#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(string n) {
    map<char, int> freq;
    for (char c : n) {
        freq[c]++;
    }

    pair<char, int> middle = {' ', 0};
    for (auto itr = freq.begin(); itr != freq.end(); itr++) {
        if ((itr->second % 2) == 1) {
            if (middle.second == 0) {
                middle.first = itr->first;
                middle.second = itr->second;
            } else {
                cout << "NO SOLUTION" << endl;
                return;
            }
        }
    }

    stack<char> back_half;
    for (auto itr = freq.begin(); itr != freq.end(); itr++) {
        if (itr->second % 2 == 1) continue;
        for (int i = 0; i < itr->second/2; i++) {
            cout << itr->first;
            back_half.push(itr->first);
        }
    }

    if (middle.second != 0) {
        for (int i = 0; i < middle.second; i++) {
            cout << middle.first;
        }
    }

    while (not back_half.empty()) { 
        cout << back_half.top();
        back_half.pop();
    }
    cout << endl;

}

int main() {
    string n;
    cin >> n;
    solve(n);
}
