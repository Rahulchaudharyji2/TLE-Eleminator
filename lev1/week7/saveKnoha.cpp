#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        long long Z;
        cin >> N >> Z;

        priority_queue<int> pq;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            pq.push(x);
        }

        int attacks = 0;

        while (Z > 0 && pq.top() > 0) {
            int mx = pq.top();
            pq.pop();

            Z -= mx;
            attacks++;

            pq.push(mx / 2);
        }

        if (Z <= 0)
            cout << attacks << '\n';
        else
            cout << "Evacuate\n";
    }

    return 0;
}