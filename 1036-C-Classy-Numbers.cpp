#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> vec;

void dfs(ll start, int cnt, int len) {
    vec.push_back(start);
    if(len == 18)
        return;
    dfs(start * 10, cnt, len + 1);
    if(cnt < 3) {
        for(int i=1; i<=9; i++)
            dfs(start * 10 + i, cnt + 1, len + 1);
    }
}

int main() {
    for(int i=1; i<=9; i++)
        dfs(i, 1, 1);
    vec.push_back(1e18);
    sort(vec.begin(), vec.end());
    int T;
    scanf("%d", &T);
    while(T--) {
        ll L, R;
        scanf("%lld %lld", &L, &R);
        int l = lower_bound(vec.begin(), vec.end(), L) - vec.begin();
        int r = upper_bound(vec.begin(), vec.end(), R) - vec.begin();
        printf("%d\n", r - l);
    }
    return 0;
}