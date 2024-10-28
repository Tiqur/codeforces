#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;

  for (int i=0; i<c; i++) {
    int n;
    int k;

    cin >> n;
    cin >> k;
    
    float q = (float)k/n;

    if (q >= 1.0) {
      cout << (int)ceil(q) << endl;
    } else {
      cout << (k/n) + (n>k && n%k != 0) + 1 << endl;
    }
  }

  return 0;
}
