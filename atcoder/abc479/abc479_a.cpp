// Problem: A - Odd Index Sum
// Platform: atcoder
// Contest: abc479
// Language: C++23 (GCC 15.2.0)
// Verdict: AC
// URL: https://atcoder.jp/contests/abc479/submissions/80023072
// Solved on: 2026-10-13T17:17:42.986Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;

        if (i % 2 == 1) {
            sum += x;
        }
    }

    cout << sum << '\n';

    return 0;
}
