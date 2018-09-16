#include <bits/stdc++.h>
using namespace std;
const int N = 3e5+5;
long long sumA, sumB;
int r, bi, n, m, a[N], b[N];
int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  cin >> n; for (int i = 0; i < n; i++) cin >> a[i];
  cin >> m; for (int i = 0; i < m; i++) cin >> b[i];
  for (int i = 0; i < n; i++){
    sumA += a[i];
    while (sumB < sumA && bi < m)
      sumB += b[bi++];
    if (sumA == sumB) r++;
  }
  if(sumB == sumA && bi == m)   printf("%d\n", r);
  else  printf("-1\n");
  return 0;
}
//  Imagine two number axises and some flags. Just traverse from left to right.