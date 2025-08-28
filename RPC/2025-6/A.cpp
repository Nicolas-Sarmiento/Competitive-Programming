#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> A(n);

    for (ll i = 0; i < n; ++i) cin >> A[i];

    vector<ll> max_left(n), min_right(n);

    max_left[0] = 0;
    for (ll i = 1; i < n; ++i)
        max_left[i] = max(max_left[i - 1], A[i - 1]);

    min_right[n - 1] = 1e7;
    for (ll i = n - 2; i >= 0; --i)
        min_right[i] = min(min_right[i + 1], A[i + 1]);

    vector<ll> pivots;
    for (ll i = 0; i < n; ++i) {
        if (max_left[i] <= A[i] && A[i] < min_right[i]) {
            pivots.push_back(A[i]);
        }
    }

    cout << pivots.size();
    for (ll i = 0; i < min((int)pivots.size(), 100); ++i)
        cout << " " << pivots[i];
    cout << "\n";

    return 0;
}
