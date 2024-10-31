// Problem:

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;

const int N = 10;
char g[N][N];
int col[N], row[N];

void solve() {
    for (int i = 0; i < 8; i++)
        cin >> g[i];

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (g[i][j] == '#')
                col[j] = row[i] = 1;

    int res = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (!row[i] && !col[j])
                res++;

    cout << res << endl;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}