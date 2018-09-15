#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int q;
    scanf("%d", &q);
    for(int i=0; i<q; i++) {
        ll m, n, k;
        scanf("%lld %lld %lld", &n, &m, &k);
        if(k < max(n, m)) {
            printf("-1\n");
            continue;
        }
        ll a = k - n, b = k - m, ans = k;
		ans -= (a % 2 + b%2);
		printf("%lld\n", ans);
    }
    return 0;
}