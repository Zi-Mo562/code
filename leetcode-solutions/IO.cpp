#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        long long x;

        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }

        cout << sum << '\n';
    }

    return 0;
}