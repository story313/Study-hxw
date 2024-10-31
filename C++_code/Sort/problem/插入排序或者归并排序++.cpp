#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int>a(n);
  vector<int>s(n);
  for (int i = 0; i < n; i++) {  
    cin >> a[i];
  }
  for (int i = 0; i < n; i++){
     cin >> s[i];
  }
  int i, j;
  for (i = 0; i < n - 1 && s[i] <= s[i + 1]; i++);
  for (j = i + 1; j < n; j++) {
    if (a[j] != s[j]) break;
  }
  if (j == n) {
    cout << "Insertion Sort" << endl;
    sort(a.begin(), a.begin() + min(i + 2, n));
  }
  else {
    cout << "Merge Sort" << endl;
    int flag = 1;
    int step = 1;
    while (flag) {
      flag = 0;
      for (int k = 0; k < n; k++) {
        if (a[k] != s[k]) {
          flag = 1;
        }
      }
      step = step * 2;
      for (int k = 0; k < n; k += step) {
        sort(a.begin() + k, a.begin() + min(k + step, n));
      }
    }
  }
  for (int k = 0; k < n; k++) {
    if (k) cout << " " << a[k];
    else cout << a[k];
  }
  return 0;
}