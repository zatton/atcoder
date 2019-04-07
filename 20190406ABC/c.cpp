#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<long> cap(5);
  long n;
  cin >> n;
  for(int i=0; i<5; i++){
    cin >> cap.at(i);
  }
  vector<long>::iterator minIt = min_element(cap.begin(), cap.end());
  int minIdx = distance(cap.begin(), minIt);
  long min = cap.at(minIdx);
  long ans = 4 + n / min;
  if ( n % min != 0){
    ans++;
  }
  cout << ans << endl;
}
