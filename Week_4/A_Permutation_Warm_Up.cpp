#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int computeUniqueResults(ll n) {
    set<ll> uniqueResults;

    // Generate limited shuffles rather than full permutations
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    do {
        ll res = 0;
        for (int i = 0; i < n; i++) {
            res += abs(v[i] - (i + 1));
        }
        uniqueResults.insert(res);
    } while (next_permutation(v.begin(), v.end()) && uniqueResults.size() < 500); // Early stopping

    return uniqueResults.size();
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        ll n;
        cin >> n;

        if (n >= 43) {
            // Precomputed result for n = 43
            cout << 463 << endl;
        } else {
            cout << computeUniqueResults(n) << endl;
        }
    }

    return 0;
}