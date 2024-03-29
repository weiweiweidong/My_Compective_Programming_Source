// Problem: https://www.acwing.com/problem/content/879/
// 扩展欧几里得算法
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;

int n;

/*
    exgcd 的作用：
        1. 返回a和b的最大公约数d （和gcd算法功能相同）
        2. 求出 ax+by=gxd(a,b) 的一组特解 x和y
*/
int exgcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }

    int d = exgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

void solve() {
    cin >> n;
    while (n--) {
        int a, b, x, y;
        cin >> a >> b;
        exgcd(a, b, x, y);
        cout << x << " " << y << endl;
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}