#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vii;
typedef vector<int> vi;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define mp make_pair
#define srt(x) sort(x.begin(), x.end())
#define inf 0x3f3f3f3f

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        if ((n-k+1) % 2 == 1){
            cout << "YES\n";
            for (int i = 1; i < k; i++) cout << 1 << ' ';
            cout << n-k+1 << '\n';
        }
        else if ((n-2*(k-1)) % 2 == 0 && (n-2*(k-1)) > 0){
            cout << "YES\n";
            for (int i = 1; i < k; i++) cout << 2 << ' ';
            cout << n-2*(k-1) << '\n';
        }
        else cout << "NO\n";
    }
}