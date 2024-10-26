#include <bits/stdc++.h>

using namespace std;

int main() {
  double n, m, a;
  cin >> n;
  cin >> m;
  cin >> a;

  double dh = m/a;
  double dw = n/a;
  // If difference in both > 0, add 1 (bc of corner)
  
  long long p = ceil(dh) * ceil(dw); 

  if (p*a*a < n*m) {
    p++;
  }

  cout << p;

  return 0;
}
