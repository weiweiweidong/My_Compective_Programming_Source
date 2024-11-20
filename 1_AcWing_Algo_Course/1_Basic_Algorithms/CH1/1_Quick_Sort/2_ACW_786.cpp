// Problem:https://www.acwing.com/problem/content/788/
// 查找第k小的数字

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;

const int N = 1e6 + 10;
int n, k;
int q[N];

int quick_sort(int q[], int l, int r, int k) {
    if (l >= r)
        return q[l];
    int i = l - 1, j = r + 1, x = q[(l + r) >> 1];
    while (i < j) {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (q[j] > x);
        if (i < j)
            swap(q[i], q[j]);
    }
    // 如果k在左边区域
    if (j - l + 1 >= k)
        return quick_sort(q, l, j, k);
    // 如果k在右边区域
    else
        return quick_sort(q, j + 1, r, k - (j - l + 1));
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> q[i];
    cout << quick_sort(q, 0, n - 1, k) << endl;
}