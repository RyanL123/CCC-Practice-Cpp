#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vii;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define inf 0x3f3f3f3f

int dp[1010][1010], G[1010], H[1010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string g, h;
    cin >> n >> g;
    for (int i = 0; i < n; i++){
        cin >> G[i];
    }
    cin >> h;
    for (int i = 0; i < n; i++){
        cin >> H[i];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if (g[i-1] == 'W' && h[j-1] == 'L' && G[i-1] > H[j-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + G[i-1] + H[j-1]);
            }
            else if (g[i-1] == 'L' && h[j-1] == 'W' && G[i-1] < H[j-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + G[i-1] + H[j-1]);
            }
        }
    }
    cout << dp[n][n] << "\n";
}
