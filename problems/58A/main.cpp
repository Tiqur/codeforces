#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  
  string hello = "hello";
  long unsigned int index = -1;

  for (size_t i = 0; i<s.size(); ++i) {
    char c = s[i];

    if (s[i] == hello[index+1]) {
      index++;
    } 

    if (index == hello.size()-1 && c == hello[index]) {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";
  return 0;
}
