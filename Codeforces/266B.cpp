#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vii;
typedef vector<int> vi;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define srt(x) sort(x.begin(), x.end())
#define all(x) x.begin(), x.end()
#define inf 0x3f3f3f3f

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    string s;
    cin >> n >> t >> s;
    for (int i = 0; i < t; i++){
        for (int j = 0; j < n-1; j++){
            if (s[j] == 'B' && s[j+1] == 'G'){
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    cout << s << '\n';
}