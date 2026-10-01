
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> pre(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;

        for (int j = 1; j <= n; j++) {
            int x = (s[j - 1] == '*');

            pre[i][j] = x
                      + pre[i - 1][j]
                      + pre[i][j - 1]
                      - pre[i - 1][j - 1];
        }
    }

    while (q--) {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;

        int ans = pre[y2][x2]
                - pre[y1 - 1][x2]
                - pre[y2][x1 - 1]
                + pre[y1 - 1][x1 - 1];

        cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
